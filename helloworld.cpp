#include <iostream>
using namespace std;
#include<math.h>
//"1——输出一个乘法表"
void circulate()
{
int a=15;
	int b=15;
	for(a=15;a<105;a+=10)
	{
		for(b=15;b<=a;b+=10)
		{
			cout<<b<<"*"<<a<<"="<<b*a<<"\t";

		}	
		cout<<endl;
	}
	system("pause");
	return ;
}
//"2——输出学生的学号"
void student()
{
char c;
 while (1)
 {
 cout<<endl;
 cout<<"输入0可以退出！输入1则继续！"<<endl;
 cin>>c;
 if (c == '0')
  {
   return ;
  }
 cout << "请输入一个0-255之间的数：" << endl;
  unsigned char a;
  scanf("%d", &a);
  int ch[8], i, s = 0;
  for (i = 0; i < 8; i++)
  {
   ch[i] = a % 2;
   a /= 2;
  }
  cout << "其二进制数为：" << endl;
  for (i = 7; i >= 0; i--)
   cout << ch[i];
  cout << endl;
  if (ch[7] == 1)
   cout << "性别为女！" << endl;
  else
   cout << "性别为男！" << endl;
  for (i = 0; i < 7; i++)
  {
   s = s + ch[i] * pow(2, i);
  }
  cout << "该学生的学号为：" << s << endl;
 }
return ;
}
//"3——输入十个数后逆输出"
void number()
{
int a[10];
cout<<"请输入十个数："<<endl;
for(int i=0;i<10;i++)
{

cin>>a[i];
}
cout<<"输出的十个数："<<endl;
for(int i=9;i>=0;i--)
{
cout<<a[i]<<",";
}
cout<<endl;
//system("pause");
return ;
}
void menu()
{
cout<<"1——输出一个乘法表"<<endl;
cout<<"2——输出学生的学号"<<endl;
cout<<"3——输入十个数后逆输出"<<endl;
cout<<"0——结束本次使用"<<endl;

}

int main()
{
int select =0;
while(true)
{
menu();
cin>>select;
switch(select)
{
case 1:circulate();
break;
case 2:student();
break;
case 3:number();
break;
case 0:cout<<""<<endl;
system("pause");
return 0;
break;
default:
break;
}
}
system("pause");
return 0;
}


