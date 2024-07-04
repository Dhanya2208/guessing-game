#include<iostream>
using namespace std;
int main()
{
    int N=100,a,t;
    cout<<"!!!NUMBER GUESS GAME!!!"<<endl;
    srand(time(0));
    do{
    int r=rand()%100;
 cout<<"guess any number upto 100"<<endl;
    cin>>a;
   while(a!=r)
    {
        if(a>(r+10))
        {
   cout<<"too high Don't give up try again"<<endl;
        }
        else if(a<(r-10))
        {
    
 cout<<"too small Don't give up try again"<<endl;
        }
        else
        {
cout<<"very close-keep trying"<<endl;
        }
        cin>>a;
    }
    if(a==r)
    {
  cout<<"!!! CONGRATULATIONS YOU FOUND OUT!!!";
    }
    cout<<endl<<"---REPLAY---(PRESS 1)";
    cin>>t;
    }while(t==1);
    cout<<endl<<"--GAME END--";
    return 0;
}
