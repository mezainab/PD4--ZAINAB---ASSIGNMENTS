#include <iostream>
using namespace std;

void challan(int speed);

main() 
{
 while(true)
 {
 int speed;

 cout <<"Enter Speed: ";
 cin >>speed;

 challan(speed);
 }
}


 void challan(int speed)
 {
  if (speed >100)
  {
  cout <<"HALT.. YOU WILL BE CHALLENGED"<<endl;
  }
  if (speed <100)
  {
  cout <<"Perfect. You're going good"<<endl;
  }
 }