//
//  main.cpp
//  billing1
//
//  Created by Buddhika Niroshan on 2024-01-27.
//

#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;
    
public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
    
};

void shopping::menu()
{
    m:
    int choice;
    string email;
    string password;
    
    cout<<"\t\t\t\t____________________________________________\n";
    cout<<"\t\t\t\t                                            \n";
    cout<<"\t\t\t\t            Supermarket Main Menu           \n";
    cout<<"\t\t\t\t                                            \n";
    cout<<"\t\t\t\t____________________________________________\n";
    cout<<"\t\t\t\t                                            \n";
    cout<<"\t\t\t\t|  1) Administrator     |\n";
    cout<<"\t\t\t\t|                       |\n";
    cout<<"\t\t\t\t|  2) Buyer             |\n";
    cout<<"\t\t\t\t|                       |\n";
    cout<<"\t\t\t\t|  3) Exit              |\n";
    cout<<"\t\t\t\t|                       |\n";
    
    cout<<"\t\t\t\tPlease select:";
    cin>>choice;
    
    
    switch(choice)
    {
        case 1:
        {
            cout<<"\t\t\t Please Login \n";
            cout<<"\t\t\t Enter Email   \n";
            cin>>email;
            cout<<"\t\t\t Password        \n";
            
            if(email=="robby@email.com" && password=="robby@123")
            {
                administrator();
            }
            else
            {
                cout<<"Invalid email/password";
            }
            break;
        }
            
        case 2:
        {
            buyer();
        }
            
        case 3:
        {
            exit(0);
        }
        default:
        {
            cout<<"Please select from the given options";
        }
            
    }
    goto m;
}



int main(int argc, const char * argv[]) {
   
    
    
    
    return 0;
}
