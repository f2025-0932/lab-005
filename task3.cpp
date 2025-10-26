#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a, b, c;
    if (a>b && a<c || a>c && a<b) {
    cout << "The larger number is"<<a<<endl;
   
}
else if (b>a && b<c || b<a && b>c) {
    cout<< "The larger number is :"<<b<<endl;
}
else { 
cout<<"The larger number is :"<<c<<endl;
}
return 0;
}
    
