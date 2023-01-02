#include <iostream>
using namespace std;

void ticketprice(float price, string countryName, float finalprice);

int main() 
{
 
float price;
string countryName;
float finalprice;

cout <<"Enter country name: ";
cin >>countryName;
cout <<"Enter Price of ticket";
cin >>price;

ticketprice(price, countryName, finalprice);
return 0;
}


void ticketprice(float price, string countryName, float finalprice)

{
 
  if (countryName == "Pakistan")
  {
  finalprice = price*0.95;
  cout <<finalprice;
  }

 if (countryName == "Ireland")
  {
  finalprice = price*0.9;
  cout <<finalprice;
  }
 if (countryName == "India")
  {
  finalprice = price*0.8;
  cout <<finalprice;
  }
 if (countryName == "England")
  {
   finalprice = price*0.7;
   cout <<finalprice;
  }
 if (countryName == "Canada")
  {
  finalprice = price*0.55;
  cout <<finalprice;
  } 

 }

 