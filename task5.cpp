#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

 

int main() {

   int num1, num2, userAnswer, correctAnswer;

 

   srand(time(0));  

 

   

   num1 = rand() % 500 + 100;

   num2 = rand() % 500 + 100;

 

 

   cout << "   " << num1 << endl;

   cout << "+  " << num2 << endl;

   cout << "--------" << endl;

 

   cout << "Enter your answer: ";

   cin >> userAnswer;

 

   

   correctAnswer = num1 + num2;

 

   

   if (userAnswer == correctAnswer) {

       cout << "Congratulations! Your answer is correct." << endl;

   }

   else {

       cout << "Oops! The correct answer is " << correctAnswer << "." << endl;

   }

 

   return 0;
}
   






   
