target = 54

for i in range( 1 , 100 ) :
    number = int(input("enter number : "))
    if number == target:
        print("you find the number , target matched ...")
    else:
        if number > target:
            print("you're entering larger number than target...")
        elif (number < (target+10)) or (number > (target-10) ):
            print("you're too closed to your number...")
        else:
            print("you're entering smaller number than target number...")

print ("END OF CODE ")