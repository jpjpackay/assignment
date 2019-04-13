#include <iostream>
using namespace std;

int main() {
   
   float day,year;
   int month;
   
  cout<< "INPUT NUMBERS & VALID DATE ONLY  \n ";
    
   cout<< "Enter Month(1-12):  ";
   cin>> month;

   cout<< "Enter Day(1-31):  ";
   cin>> day;
   
   cout<< "Enter Year: ";
   cin>> year;
   
   switch(month)
   
   	case 1: if (month=1)
{
  	cout<< "JANUARY " << day << "," << year << endl;	
  break;

 
   case 2: if (month=2)
  {   
	cout<< "FEBRUARY " << day << ", " << year << endl;
break;
}
	case 3: if (month=3)
   {
	cout<< "MARCH " << day << ", " << year << endl;
break;
}
	case 4: if (month=4)
 { 
	cout<< "APRIL " << day << ", " << year << endl;
	break;
}
	case 5: if (month=5)
   {
	cout<< "MAY " << day << ", " << year << endl;
break;
}
	case 6: if (month=6)
   {  
	cout<< "JUNE " << day << ", " << year << endl;
break;
}
	case 7: if (month=7)
   {
	cout<< "JULY " << day << ", " << year << endl;
break;
}
	case 8: if (month=8)
   {   
	cout<< "AUGUST " << day << ", " << year << endl;
break;
}
	case 9: if (month=9)
   {
	cout<< "SEPTEMBER " << day << ", " << year << endl;
break;
}
	case 10: if (month=10)
   {
	cout<< "OCTOBER " << day << ", " << year << endl;
break;
}
	case 11: if (month=11)
   { 
	cout<< "NOVEMBER " << day << ", " << year << endl;
break;
}
	case 12: if (month=12)
   {
	cout<< "DECEMBER " << day << ", " << year << endl;
break;
}
default: 

cout<< "INVALID DATE";
}


   return 0;
}