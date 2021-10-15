#include<iostream>
using namespace std;

int main() {

    int a;
    cin>>a;

    while (a<0) {
        cout<<"false"<<endl;
        break;
    }

    if(a%5==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}
