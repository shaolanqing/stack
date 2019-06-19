/*���һ����ջ����ģ��Stack����ģ���������Ͳ���T��ʾջ�д�ŵ����ݣ�
�÷����Ͳ���MAXSIZE����ջ�Ĵ�С��*/
#include<iostream>
#include<string>
using namespace std;

template<typename T,int MAXSIZE> //����һ����ģ�� 
class Stack
{
  private:
	  int  pos;//ջ����ʽָ��
	  T elements[MAXSIZE];//T���͵�ָ��
  public:
	  Stack()
	  {
		  pos=0;
	  }
	  /*Stack(int p)
	  {
		  pos=p;
	  }*/
	  bool isFull()  //���ջΪ��
	  {
          return  pos>=MAXSIZE;  
	  } 
	  void push(T ele)  //��ele  push��ջ
	  {
		  if(isFull())  //�ж�ջ�Ƿ�Ϊ��
			  return  ;
		  else
			  elements[pos]=ele;
		  pos++;         //ջ��ָ�벻��������
	  }
	  bool isEmpty()
	  {
		  
		  return  pos<=0;
	  }
	   T  pop()  //��ջ
	  {
	      T m;	  
		  if(isEmpty())//�ж�ջ�Ƿ�Ϊ��
			  return  m;
		  //else
			  T elempt=elements[pos-1]; //����elempt��������ȡ����ջ��ֵ
		  pos--;
		  return elempt;
	  }
      T getTop() //�õ�ջ������ֵ
	  {
		  int m;
		  if(isEmpty())
		     return m;
		  else
			  return elements[pos-1];//ջ��ָ��-1�õ�ջ������ֵ
	  }
	  T getStaticSize()//�õ�ջ�Ĵ�С
	  {
           return pos;
	  }
};
int main()
{
	Stack<int,3>  s1;
	s1.push(20);      //��������
	s1.push(30);
	s1.push(50);
	int i;
	for(i=0;i<3;i++)
     	cout<<s1.pop()<<endl; //�õ�����
	Stack<string,3>  s2;
	s2.push("qing");
	s2.push("lan");
	s2.push("shao");
	for( i=0;i<3;i++)
		cout<<s2.pop()<<endl;

	return 0;
}








