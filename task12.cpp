#include <iostream>
using namespace std;

void flowers(int redrose, int whiterose, int tulip, float price);

int main()
{
 while(true)
 {
 int redrose;
 int whiterose;
 int tulip;
 float price;
 float finalprice;

 cout<<"Enter no of redroses: ";
 cin>>redrose;
 cout<<"Enter no of white roses: ";
 cin>>whiterose;
 cout<<"Enter no of tulips: ";
 cin>>tulip;
 
 price = redrose*2+whiterose*4.10+tulip*2.50;
 
 flowers(redrose, whiterose, tulip, price);
 return 0;
 }
}
 void flowers(int redrose, int whiterose, int tulip, float price)
 {
  float finalprice;
  if (price > 200)
  {
   cout<<"original price: ";
   cout<<price<<endl;
   cout<<"Final price is: ";
   finalprice = price*0.8;
   cout<<finalprice;
   
  }  
  if (price < 200)
  {
   cout <<"final price is: "<<price<<endl;
  }
 }
