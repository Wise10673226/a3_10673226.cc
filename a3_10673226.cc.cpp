#include <iostream>

using namespace std;

int main()
{
    double x;
    cout<<"Enter your exam score: ";
    cin>>x;

    if((x>=80) && (x<=100))
    {
    cout<<"you had an A. ";

    }

    else if((x>=75) && (x<=79))
       {
           cout<<"you had a B+. ";

       }

  else if((x>=70) && (x<=74))
  {cout<<"you had a B. ";
  }
 else if((x>=65) && (x<=69))
 {
     cout<<"you had a C+ ";

 }
else if((x>=60) && (x<=64))
{
   cout<<"you had a C ";
}

else if((x>=55) && (x<=59))
{
    cout<<"you had a D+ ";
}

else if((x>=50) && (x<=54))
{
    cout<<"you had a D ";
}
else if((x>=45) && (x<=49))
{
    cout<<"you had an E";
}
 else if((x>=0) && (x<=44))
 {
     cout<<"you had an F ";
 }























    return 0;
}
