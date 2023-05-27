#include <iostream>
using namespace std;
class BankAccount{
    
    public:
            int salary;
            string name;
            string type;
            float balance;
    
    
    BankAccount(int sal, string n, string t, float b )
        {  cout<< "Constructor is working"<<endl;
            
            salary=sal;
            name=n;
            type=t;
            balance=b;
            
        }
    void display()
     {
        cout<<salary<<endl<<name<<endl<<type<<endl<<balance;
     }
     
     void deposit(int a)
     {
        balance+=a; 
     }
     void withdraw(int w){
         balance-=w;
     }
     
     
};
class person:public BankAccount{
    string details;
};


int main() {
    //person Object2;
    BankAccount b1(123,"rajnish","Saving",100);
    //cout<< Object2.accountNo;
    b1.display();
    b1.deposit(200);
    b1.display();
    b1.withdraw(100);
    b1.display();
    return 0;
}
