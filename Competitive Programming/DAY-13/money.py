kara=int(input("Enter number of glasses kara sold"))
rani=int(input("Enter number of glasses rani sold"))

glassesk= kara*5
glassesr= rani*7

if glassesk > glassesr:
    print("Kara has more money by ",glassesk-glassesr," cents")
elif glassesr > glassesk:
    print("Rani has more money by ",glassesr-glassesk," cents")
else:
    print("Both have same amount of money ",glassesr," cents")
