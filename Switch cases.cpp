#include<iostream>
using namespace std;
 
//Switch cases 
int main (){
    int age;
    cout<<"Please enter your age!"<<endl;
    cin>>age;
    switch(age){
    case 18:
    cout<<"You are now matured one! "<<endl;
    break; 
    case 25:
    	cout<<"You better find a spouse!"<<endl;
    	break;
    default:
    cout<<"You are alive at least! "<<endl;
    break;
    }
    cout<<"Thanks for wasting your time here!"<<endl;
    return 0;
}
