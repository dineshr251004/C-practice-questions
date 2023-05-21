#include <iostream>
using namespace std;
class BankAccount{
    int accno;
    double bal=0.00;
    public:
        BankAccount(int ano){
            accno=ano;
        }
        void dep(double d){
            bal+=d;
        }
        void withdraw(double w){
            if (bal>=w){
                bal-=w;
            }
            else{
                cout<<"insufficient funds"<<endl;
            }
        }
        double viewbal(){
            return bal;
        }
    
       
};
int main(){
    BankAccount acc1(1001);
    while (1){
        cout<<"1. Deposit"<<endl<<"2. Withdraw"<<endl<<"3. View Balance"<<endl<<"4. Exit"<<endl;
        int ch;
        cout<<"Enter your choice:";
        cin>>ch;
        if (ch==1){
            double d;
            cout<<"Enter the amount:";
            cin>>d;
            acc1.dep(d);
        }
        else if (ch==2){
            double w;
            cout<<"Enter amount:";
            cin>>w;
            acc1.withdraw(w);
        }
        else if(ch==3){
            cout<<"The balance is:"<<acc1.viewbal()<<endl;
        }
        else if(ch==4){
            break;
        }
    }
    return 0;
}
