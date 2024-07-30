//#include <iostream>
//#include <string>
//
//using namespace std;
//
////base class
//
//class Vehicle
//{
//public:
//    string brand = "Ford";
//    void honk(){
//        cout << "Tuut, tuut!\n";
//    }
//};
//
////derived class
//
//class Car: public Vehicle
//{
//public:
//    string model = "Mustang";
//};
//
//
//int main(int argc, const char * argv[])
//{
//    
//    Car myCar;
//    myCar.honk();
//    
//    cout<<myCar.brand+" "+myCar.model;
//    
//    
//   
//    return 0;
//}
////////////////////////////////////////////////BINARAY SERCH AND SORT METHODS/////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(int argc, const char * argv[])
//{
//    
////    int A[10]={4,5,8,2,9,3,1,6,0,7};
////    for(int i=0;i<10;i++)
////    {
////        cout<<A[i]<<" ";
////    }
////    cout<<endl;
////    
////    for(int i=0;i<9;i++)
////    {
////        for(int j=0;j<9-i;j++)
////        {
////            if(A[j]>A[j+1])
////            {
////                int temp =A[j];
////                A[j]=A[j+1];
////                A[j+1]= temp;
////            }
////        }
////    }
////    
////    for(int i=0;i<10;i++)
////    {
////        cout<<A[i]<<" ";
////    }
////    
////    int l=0, h=9,key;
////    
////    cout<<"\nEnter Key: ";
////    cin>>key;
////    
////    while(l<=h)
////    {
////        int mid =(l+h)/2;
////        
////        if(key==A[mid])
////        {
////            cout<<"found at "<<mid;
////            return 0;
////        }
////        else if (key<A[mid]) h=mid-1;
////        else l= mid+1;
////        
////    }
////    cout<<"Not found"<<endl;
////    
//    int *a;
//    int b=8;
//    
//    a=&b;
//    
//    
//    cout<<a<<" , "<<b<<" , "<<&b<<" , "<<&a<<" , "<<*a<<endl;
//    
//   
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//// Base class
//class Animal {
//public:
//    void eat() {
//        std::cout << "Animal is eating" << std::endl;
//    }
//protected:
//    int x=90;
//    void sleep() {
//        std::cout << "Animal is sleeping" << std::endl;
//    }
//};
//
//// Derived class
//class Dog : private Animal {
//public:
//    
//    void play(){
//        std::cout<<x;
//    }
////    void run(){
////        sleep();
////        eat();
////    }
//    void bark() {
//        std::cout << "Dog is barking" << std::endl;
//    }
//    void run(){
//        sleep();
//        eat();
//    }
//};
//
//int main() {
// 
//    
//    double door=176.4;
//    double &x;
//    x=door;
//
//    cout<<x<<endl;
//    
//    x=34;
//    
//    cout<<door;
//    
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    // Creating a vector of integers
//    vector<int> myVector;
//
//    // Adding elements to the vector
//    myVector.push_back(10);
//    myVector.push_back(20);
//    myVector.push_back(30);
//
//    // Accessing elements
//    cout << "Elements of myVector: ";
//    for (int i = 0; i < myVector.size(); ++i) {
//        cout << myVector[i] << " ";
//    }
//    cout << endl;
//
////    // Modifying elements
//      myVector[1] = 50;
//    
//    cout<<myVector[1]<<endl;
//    
//    cout << "Elements of myVector: ";
//    for (int i = 0; i < myVector.size(); ++i) {
//        cout << myVector[i] << " ";
//    }
//    cout << endl;
//    for(auto elem:myVector)
//    {
//        cout<<elem<<" "<<endl;
//    }
////
//    // Accessing elements using iterators
//    cout << "Elements of myVector using iterators: ";
//    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
//        cout << *it << " ";
//    }
//    cout << endl;
//
//    // Removing the last element
//    myVector.pop_back();
//
//    cout << "After popping, size of myVector: " << myVector.size() << endl;
//    
//    for(auto ss:myVector){
//        
//        cout<<ss<<" "<<endl;
//    }
//
//    return 0;
//}


#include <iostream>

using namespace std;

int main(){
    int a=10,b=3;
    float c;
    
    c=(float)a/b;
    cout<<c;
    
    return 0;
}
