#include <iostream>
using namespace std;

void print(int len, int wth);        //function prototype
void input(int &len, int &wth);     

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;  //end of the main function
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here
void input(int &len, int &wth)
{
   cout<<"Enter Length : ";       //display "Enter Length"
   cin>>len;                 //read Length
   cout<<"Enter Width : ";      //display "Enter Width"
   cin>>wth;                //read Width
}
