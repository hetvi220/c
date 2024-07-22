#include <iostream>
using namespace std;

class Bank
{
public:
    int balance = 10000;
    int depo_amt;
    int withdraw_amt;
      int atm_pin;

      void info(){
        cout<<"enter a pin";
        cin>>atm_pin;
      }

        void deposit()
        {
            cout << "Your current balance is : " << balance << endl;
            cout<< "Enter the amount of money you want to deposit : ";
            cin >> depo_amt;
            balance += depo_amt;
            cout << "After depositing you have : " << balance << endl;
        }

        void withdraw()
        {
            cout << "Your current balance is : " << balance << endl ;
                 << "Enter the amount of money you want to withdraw : ";
            cin >> withdraw_amt;
            if (withdraw_amt <= balance)
            {
                balance -= withdraw_amt;
                cout << "After withdrawing you have " << balance << endl;
            }
        }

        void checkbalance()
        {
            cout << "your current balance is : " << balance;
        }
    };

    int main()
    {
        int num;
        int atm_pin;
        class Bank obj;
       
        cout << "**********************************  WELCOME TO RBI BANK  **********************************  " << endl;
        cout << "enter the atm pin number : ";
        cin >> atm_pin;

            next : if (atm_pin == 22){
             do{
                cout << "                                        HELLO HETVI !                               " << endl;
                cout << "             ************************ WELCOME TO ATM ************************ " << endl;
                cout << "1. To deposit money" << endl;
                cout << "2. To withdraw money" << endl;
                cout << "3. To check balance" << endl;
                cout << "4. EXIT " << endl;
                cout << "enter the number of your choice: ";
                cin >> num;

                switch (num)
                {
                case 1:
                    obj.deposit();
                    break;

                case 2:
                    obj.withdraw();
                    break;

                case 3:
                    obj.checkbalance();

                case 4:
                    cout <<endl<< "           EXIT             "<<endl;
                }
                }while (num != 4);}
                    else
        {
            cout << "There exist no such data for pin " << atm_pin << endl;
            cout << "ENTER A VALID PIN AGAIN : " << endl;
            cin >> atm_pin;
           goto next;
        } 
            
    return 0;
}




















