number1 = float(input("enter number first : "))
number2 = float(input("enter number two : "))

operation = input("enter the operation to perform : ")

match operation :
    case "+":
        print(" the addtion is : " , number1 + number2 )
    case "-":
        print(" the subtraction is : " , number1 - number2 )
    case "*":
        print(" the mulplication is " , number1 * number2 )
    case "/":
        if number2 == 0 :
            print(" not valid undefined..")
        else :
            print(" the division is : " , number1 / number2 )
    case default : 
        print(" you entered wrong operation !...")

print(" END OF CODE ")
