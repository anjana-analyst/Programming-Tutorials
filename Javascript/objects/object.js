var myDog = 
{
  "name": "Coder",
  "legs": 4,
  "tails": 1,
  "friends": ["freeCodeCamp Campers"]
};
//to change
myDog["name"]="Happy Coder";
//to add
myDog["bark"]="bow-wow";
//to delete
delete myDog["tails"];

//having an object and doing search
function phoneticLookup(val) 
{
  var result="";
  var lookup=
  {
    "alpha": "Adams",
    "bravo": "Boston",
    "charlie": "Chicago",
    "delta": "Denver",
    "echo": "Easy",
    "foxtrot":"Frank"
  }
  result=lookup[val];
  
  return result;
}

phoneticLookup("charlie");

//to check whether object has that property
function checkObj(obj, checkProp) 
{
  if(obj.hasOwnProperty(checkProp))
  {
    return obj[checkProp];
  }
  else
  {
     return "Not Found";
  }
}
checkObj({gift: "pony", pet: "kitten", bed: "sleigh"}, "gift")
