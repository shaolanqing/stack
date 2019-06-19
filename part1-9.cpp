/*设计一个堆栈的类模板Stack，在模板中用类型参数T表示栈中存放的数据，
用非类型参数MAXSIZE代表栈的大小。*/
#include<iostream>
#include<string>
using namespace std;

template<typename T,int MAXSIZE> //定义一个类模板 
class Stack
{
  private:
	  int  pos;//栈顶隐式指针
	  T elements[MAXSIZE];//T类型的指针
  public:
	  Stack()
	  {
		  pos=0;
	  }
	  /*Stack(int p)
	  {
		  pos=p;
	  }*/
	  bool isFull()  //如果栈为满
	  {
          return  pos>=MAXSIZE;  
	  } 
	  void push(T ele)  //将ele  push进栈
	  {
		  if(isFull())  //判断栈是否为满
			  return  ;
		  else
			  elements[pos]=ele;
		  pos++;         //栈顶指针不断向上移
	  }
	  bool isEmpty()
	  {
		  
		  return  pos<=0;
	  }
	   T  pop()  //退栈
	  {
	      T m;	  
		  if(isEmpty())//判断栈是否为空
			  return  m;
		  //else
			  T elempt=elements[pos-1]; //定义elempt参数来获取它出栈的值
		  pos--;
		  return elempt;
	  }
      T getTop() //得到栈顶的数值
	  {
		  int m;
		  if(isEmpty())
		     return m;
		  else
			  return elements[pos-1];//栈顶指针-1得到栈顶的数值
	  }
	  T getStaticSize()//得到栈的大小
	  {
           return pos;
	  }
};
int main()
{
	Stack<int,3>  s1;
	s1.push(20);      //输入数据
	s1.push(30);
	s1.push(50);
	int i;
	for(i=0;i<3;i++)
     	cout<<s1.pop()<<endl; //得到数据
	Stack<string,3>  s2;
	s2.push("qing");
	s2.push("lan");
	s2.push("shao");
	for( i=0;i<3;i++)
		cout<<s2.pop()<<endl;

	return 0;
}








