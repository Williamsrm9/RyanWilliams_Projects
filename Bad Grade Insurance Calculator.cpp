#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int courseQuantity;
int q;
int courseCost[10];
char courseName[10][150];
int studentYear;
int gradeProtection;
int courseSubtotal;

cout << "Please enter the number of courses that you would like to buy insurance for this semester:" << endl;
cin >> courseQuantity;

for(q = 0; q < courseQuantity; q++){
    
    cout << "Enter the name of class #" << (q+1) << ": " << endl;
    cin >> courseName[q];
    
    cout << "Enter the price for " << courseName[q] << ":" << endl;
    cout << "$";
    cin >> courseCost[q];
    
    courseSubtotal += courseCost[q];
    

}

cout << "What year of college are you in?" << endl;
cout << "If you are a freshman, press 1" << endl;
cout << "If you are a sophomore, press 2" << endl;
cout << "If you are a junior, press 3" << endl;
cout << "If you are a senior, press 4" << endl;
cout << "If you have been in college for more than four years, press 5" << endl;

cin >> studentYear;

switch(studentYear){

      case 1: cout << "You have selected that you are in your first year of college (Freshman)" << endl; break;
      case 2: cout << "You have selected that you are in your second year of college (Sophomore)" << endl; break;
      case 3: cout << "You have selected that you are in your third year of college (Junior)" << endl; break;
      case 4: cout << "You have selected that you are in your fourth year of college (Senior)" << endl; break;
      case 5: cout << "You have selected that you have been in college for more than four years" << endl; break;
      default: cout << "This is not a valid selection. Please select a suitable option or exit." << endl;
}

cout << "Which grades would you like to buy protection for?" << endl;
cout << "If you would like to purchase protection for Fs, press 1" << endl;
cout << "If you would like to purchase protection for Fs and Ds, press 2" << endl;
cout << "If you would like to purchase protection for Fs, Ds, and Cs, press 3" << endl;
cout << "If you would to purchase protection for Fs, Ds, Cs, and Bs, press 4" << endl;

cin >> gradeProtection;

switch(gradeProtection){
    
      case 1: cout << "You have selected protection against Fs" << endl; break;
      case 2: cout << "You have selected protection against Fs and Ds" << endl; break;
      case 3: cout << "You have selected protection against Fs, Ds, and Cs" << endl; break;
      case 4: cout << "You have selected protection against Fs, Ds, Cs, and Bs" << endl; break;
      default: cout << "This is not a valid selection. Please select a suitable option or exit." << endl;
}
    

    

}
