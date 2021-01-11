#include<iostream>
using namespace std;

//declare variables
int a, b, c;
int x=0,y=0;

int steps2(int x,int y);//function declaration

int steps1(int x,int y)
{
    if(x==c||y==c)
            return 0;

    else if(x==0&&y==0)
        {
            x=a;
            cout<<"> ("<<x<<","<<y<<") ";
            steps2(x,y);
        }

        else if((y==b)&&a<b)
        {
            y=0;
            cout<<"> ("<<x<<","<<y<<") ";
            steps2(x,y);
        }

        else if((x==0)&&a<b)
        {
            x=a;
            cout<<"> ("<<x<<","<<y<<") ";
            steps2(x,y);
        }

        else if(x+y<=a)
        {
            x=x+y;
            y=0;
            cout<<"> ("<<x<<","<<y<<") ";
            steps2(x,y);
        }

        else
            {
                y=y+x-a;
                x=a;
                cout<<"> ("<<x<<","<<y<<") ";
                steps2(x,y);
            }
}

int steps2(int x,int y)
{
        if(x==c||y==c)
            return 0;

        else if(x==0&&y==0)
        {
            y=b;
            cout<<"> ("<<x<<","<<y<<") ";
            steps1(x,y);
        }

        else if((x==a)&&a>b)
        {
            x=0;
            cout<<"> ("<<x<<","<<y<<") ";
            steps1(x,y);
        }

        else if((y==0)&&a>b)
        {
            y=b;
            cout<<"> ("<<x<<","<<y<<") ";
            steps1(x,y);
        }

        else if(x+y<=b)
        {
            y=x+y;
            x=0;
            cout<<"> ("<<x<<","<<y<<") ";
            steps1(x,y);
        }

        else
            {
                x=x+y-b;
                y=b;
                cout<<"> ("<<x<<","<<y<<") ";
                steps1(x,y);
            }
    }

int check(int a,int b,int c)  //checking the possibility
{
    int gcf;//great common factor

    for (int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
            gcf=i;
    }
    if(c%gcf!=0)
        cout<<"-1";
    else
        {

            cout<<"("<<x<<","<<y<<") ";
            if (a<b)
                steps1(x,y);
            else
                steps2(x,y);
        }
}

int main()
{
    int s;//temporary variable
    cout<<"Input a b c : ";
    cin>>a>>b>>c;       //get inputs

    //checking entered values
    while((a>40000||b>40000||c>40000))
    {
        cout<<"Enter numbers less than 40000 !!!\n";
        cout<<"Input  a b c : ";
        cin>>a>>b>>c;
    }
    while(c>a&&c>b)
    {
        cout<<"Enter suitable values for a,b,c !!!\n";
        cout<<"Input  a b c : ";
        cin>>a>>b>>c;
    }

    cout<<endl;

            check(a,b,c);

    cout<<endl;
}
