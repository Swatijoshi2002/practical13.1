#include <iostream>
#include<string>
using namespace std;
class base{
    public:
  virtual int  add(int a,int b)//due to virtual keyword complier will ignore it during compile time
   {
       return a+b;
   }
  virtual int multi(int a,int b)=0;//due to abstraction complier will not bind this function at compile time during runtime it will bind
};
class child:public base {
    public:
    int add(int a,int b)//hence during runtime this definition will be followed
    {
        return a+b+1;
    }
    int multi(int a,int b)
    {
    	return a*b;
	}
};
int main()
{
   base *p;
   child c;
    p=&c;
    cout<<p->multi(3,7)<<" ";
    cout<<p->add(1,2);
}

      
