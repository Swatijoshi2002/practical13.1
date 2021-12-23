#include <iostream>
#include<string>
using namespace std;
class base{
    public:
  virtual int  add(int a,int b)
   {
       return a+b;
   }
  int multi(int a,int b)
  {
  	return a*b;
  }
  base()
  {
  		cout<<"BC"<<endl;
  }
 virtual ~base()
  {
  	cout<<"BD"<<endl;
  }
};
class child:public base {
    public:
    int add(int a,int b)
    {
        return a+b+1;
    }
    child()
    {
   	cout<<"CC"<<endl;	
	}
	~child()
	{
		cout<<"CD"<<endl;	
	}
};
int main()
{
   base *p;
   child c;
    p=&c;
    delete p;
}

