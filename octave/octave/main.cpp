#include <iostream>
#include <string>

using namespace std;

int main()
{

    //Dynamically allocate integer
    int *dint;
    dint = new int;
    *dint = 14;
    
    //Dynamically allocate char
    
    char *dchar;
    dchar = new char;
    *dchar = 'D';
    
    //Dynamically allocate string
    
    string *Dstring;
    Dstring = new string;
    *Dstring = "Dimuthu";
    
    
    cout << "Dynamically allocated integer: " << *dint<<endl;
    cout << "Dynamically allocated character: " << *dchar<<endl;
    cout << "Dynamically allocated string: " << *Dstring <<endl;
    
    //Deallocate the memory
    
    delete dint; dint=NULL;
    delete dchar; dchar=NULL;
    delete Dstring; Dstring=NULL;
    
    
    
    return 0;
}
