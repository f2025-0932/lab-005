#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1,color2;
    cout<<"Enter first primary color (red, blue , yellow) :"<<endl;
    cin>>color1;
    cout<<"Enter second primary colour (red, blue, yellow) :"<<endl;
if ((color1 == "red" || color1== "blue" || color1== "yellow") && (color2 == "red" || color2 == "blue" || color2 == "yellow")) 
    
    if (color1== "red") {
        if (color2 == "blue")
        cout<< "purple"<<endl;
        else if (color2=="yellow")
        cout<<"orange"<<endl;
    }
    else if (color1 == "blue") {
        if (color2=="red")
        cout<< "purple"<<endl;
        else if (color2=="yellow")
        cout<< "green"<<endl;
        }
       else if (color1=="yellow") {
           if (color2=="red")
           cout<<"orange"<<endl;
           else if (color2=="blue")
           cout<<"green"<<endl;
       }
       else {
       cout<<"invalid color"<<endl;
       
       return 0;
    
}
}






