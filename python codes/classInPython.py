class Student :
    my_college = "SHEAT Varanasi"
    def __init__(self , full_name ) : 
        self.name = full_name
    def printName(self) :
        print("the name of student is : " , self.name )
s1 = Student("faisal")
s1.printName()

s2 = Student("David Goggin")
s2.printName()

print("END OF CODE")