#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int courseQuantity;
int q;
int courseCost[10];

cout << "Please enter the number of courses that you would like to buy insurance for this semester:" << endl;
cin >> courseQuantity;

for(q = 1; q <= courseQuantity; q++){
    
    cout << "Enter the price for class #" << q << ": " << endl;
    cin >> courseCost[(q-1)];
    
    
}
    
    

}
