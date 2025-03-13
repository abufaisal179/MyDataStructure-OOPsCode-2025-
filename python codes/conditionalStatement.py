print("enter the marks of All subjects !! " , " and the minimum cutoff for all 3 subs is 99 marks !! ")
math = input("enter the value for math >> ")
phy = input("enter the value for physics >> ")
che = input("enter the value for chemistry >> ")

sumOfvalues = phy + che + math

if  99 <= sumOfvalues <= 150 :
    print("you passed with 3rd division !! ")
    print("and your marks is b/w 99-150 ")
elif 150 <= sumOfvalues <=200 :
    print("you got 2nd divsion ")
else :
    print("you got 1st division , because you have marks >= 200 ")



