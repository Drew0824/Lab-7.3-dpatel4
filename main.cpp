#include <iostream>
using namespace std;

int main() {
  const int INSTATETUITION = 3000;
  const int OUTSTATETUITION = 4500;
  const int INSTATEROOM = 2500;
  const int OUTSTATEROOM = 3500;
  int status = 0;
  int room = 0;
  
  // Add prompts for user to input their residency and room/board status
  
  cout << "Enter 1 for in-state residency or 2 for out-of-state:\n" << endl;
  cin >> status;

  cout << "Enter 1 if you need room and board or 2 for no room and board:\n" << endl;
  cin >> room;



  if (status == 1 && room == 1)
  {
    cout << "Your total bill for this semester is $" << INSTATETUITION + INSTATEROOM << endl;
  }
  
  if (status == 2 && room == 2)
  {
    cout << "Your total bill for this semester is $" << OUTSTATETUITION << endl;
  }

 if (status == 1 && room == 2)
  {
    cout << "Your total bill for this semester is $" << INSTATETUITION << endl;
  }

 if (status == 2 && room == 1)
  {
    cout << "Your total bill for this semester is $" << OUTSTATETUITION + OUTSTATEROOM << endl;
  }
  // Add more if statements
  
}