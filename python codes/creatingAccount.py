class Account :
    def __init__(self , account_number , balance ) :
        self.account_number = account_number
        self.balance = balance
        print("Account created successfully !!..")
   
    def debitMonety( self , amount ) :
        if( amount <= 0 ) :
            print("Invalid Amount !!...")
        elif( self.balance <= 0 ) :
            print("not enough money you have , to debit !...")
        else :
            print("amount debited successfully !... ")
            self.balance -= amount
    
    def creditMoney( self , amount ) :
        if( amount <= 0 ) :
            print("Invalid Amount !!...")
        else :
            print("amount credited successfully !...")
            self.balance += amount
    
    def display(self) :
        print("your A/C no. is :" , self.account_number )
        print("Your balance is : " , self.balance )


acc1 = Account("654725487" , 500.50 )
acc1.display()
acc1.debitMonety( 200 )
acc1.display()
acc1.creditMoney( 100 )
acc1.display()

print("END OF CODE ")