#include<iostream.h>
#include<conio.h>
void main()
{
   int a[10][10],b[10][10],c[10][10],choice;
   cout<<"1. Matrix Addition";
   cout<<"2. Matrix Substraction";
   cout<<" Enter Choice";
   cin>>choice;
   switch(choice)
   {	
      case 1 : cout<<"Enter elements of A";
               for(i=0;i<10;i++)
                for(j=0;j<10;j++)
                  cin>>a[i][j];
               cout<<"Enter elements of b";
               for(i=0;i<10;i++)
                for(j=0;j<10;j++)
                  cin>>b[i][j];
               cout<<"Sum"
               for(i=0;i<10;i++)
                for(j=0;j<10;j++)
                  c[i][j] = a[i][j] + b[i][j];
                cout<<"The sum is";
                for(i=0;i<10;i++)
                 for(j=0;j<10;j++)
                  cout<<c[i][j];
                break;
   }
   getch();
}
               