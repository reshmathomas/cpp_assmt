#include <iostream>
#include<string.h>
using namespace std;
 
class Date
{
   private:
      int day;
	  char month[4];             
      int year;           
   public:
      
      Date()
	  {
         day=1;
         strcpy(month,"Jan");
		 year=1970;
      }
   
      friend ostream &operator<<(ostream &out,const Date &d );
     

      friend istream &operator>>( istream  &in, Date &d );
      
};
ostream &operator<<(ostream &out,const Date &d )
 { 
         out<< "Date : "<< d.day<<" " <<d.month<<" " <<d.year;
         return out;               
 }
istream &operator>>( istream  &in, Date &d )
{ 
         in>>d.day>>d.month>>d.year;
         return in;
                     
 }
int main()
{
   Date date,today;
	
   cout << "Enter the date :\n ";
   cin >> today;
   cout <<today<<"\n";
   cout<<date<<"\n";

   return 0;
}
