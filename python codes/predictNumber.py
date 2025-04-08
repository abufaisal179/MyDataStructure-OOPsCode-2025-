target = 54

for i in range( 1 , 100 ) :
    number = int(input("enter number : "))
    if number == target:
        print("you find the number , target matched ...")
        break
    else:
        if number > (target-10) and number < (target+10):
            print("you're too closed to your number...")
        elif number > target:
            print("you're entering larger number than target...")
        else:  
            print("you're entering smaller number than target number...")

print ("END OF CODE ")