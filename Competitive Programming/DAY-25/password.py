def password(p):
    sym=['$','#','@','%']
    val=True
    
    if len(p)<6:
        print("Length should be atleast 6")
    if len(p)>20:
        print("Length is more than 20")
    
    if not any(char.isdigit() for char in p):
        print("It should have atleast one number")
        val=False
    
    if not any(char.isupper() for char in p):
        print("It should have atleast one Uppercase Letter")
        val=False
            
    if not any(char.islower() for char in p):
        print("It should have atleast one Lowercase Letter")
        val=False
            
    if not any(char in sym for char in p):
        print("It should have atleast one Special Symbol")
        val=False
    
    if val is True:
        return val
        
pa=input("Enter the password")
if(password(pa) is True):
    print("Valid Password")
else:
    print("Invalid Password")
