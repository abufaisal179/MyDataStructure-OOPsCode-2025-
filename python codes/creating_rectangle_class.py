class rectangle:
    def __init__( self , length , breadth ):
        self.length = length 
        self.breadth = breadth 
    def print_rectangle_data( self ):
        print("the area is : " , self.length*self.breadth )

object1 = rectangle(4 , 6)
object1.print_rectangle_data() 