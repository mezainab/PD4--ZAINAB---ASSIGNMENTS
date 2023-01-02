#include <iostream>
using namespace std;

void statement(string text);

main() 
{
 while(true)
 {
 string text;

 cout <<"Enter statement";
 cin >> text;

 statement(text);
 }
}


 void statement(string text)
{
 if (text == "true")
  {
  cout <<"False"<<endl;
  }
 if (text == "false")
  {
  cout <<"True"<<endl;
  }
}
