#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int courseQuantity;
int q;
int courseCost[10];
int studentYear;

cout << "Please enter the number of courses that you would like to buy insurance for this semester:" << endl;
cin >> courseQuantity;

for(q = 1; q <= courseQuantity; q++){
    
    cout << "Enter the price for class #" << q << ": " << endl;
    cout << "$";
    cin >> courseCost[(q-1)];
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
    
    

}
