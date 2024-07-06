age=int(input("Enter the Age : "))
if (age>=1 and age<=12):
    print("Kid !")
elif (age>12 and age<=19):
    print("Teen ! ")
elif (age>19 and age<=30):
    print("Young !")
elif (age>30 and age<=45):
    print("Mature !")
elif (age>45 and age<=60):
    print("Experienced !")
elif (age>60 and age<=75):
    print("Old!")
elif (age>75):
    print("Senior Citizen")
else:
    print("Enter Valid Age !")
