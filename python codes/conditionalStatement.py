print("enter the marks of All subjects !! " , " and the minimum cutoff for all 3 subs is 99 marks !! ")
math = int(input("enter the value for math >> "))
phy = int(input("enter the value for physics >> "))
che = int(input("enter the value for chemistry >> "))

sumOfvalues = phy + che + math
if 0 <= sumOfvalues <= 98 :
    print("you got failed in your examination , because your marks is <= 98 ") 
elif  99 <= sumOfvalues <= 150 :
    print("you passed with 3rd division !! ")
    print("and your marks is b/w 99-150 ")
elif 150 <= sumOfvalues <=200 :
    print("you got 2nd divsion ")
else :
    print("you got 1st division , because you have marks >= 200 ")



