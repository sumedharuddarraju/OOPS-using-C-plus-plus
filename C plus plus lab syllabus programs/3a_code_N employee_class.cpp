/******************************************************************************
5.  Write a C++ program to read the data of N employee and compute Net salary of each employee 
(DA=52% of Basic and Income Tax (IT) =30% of the gross salary).
*******************************************************************************/
#include<iostream>
using namespace std;
class Employee
{
	public:
		int emp_no;
		string name;
		float emp_basic;
		float DA;
		float IT;
		float net_salary;
		
};
int main()
{
	int n,i;
	cout<<"Enter the number of employees"<<endl;
	cin>>n;
	Employee e[n];
	for(i=0;i<n;i++)
	{
	cout<<"Enter employee number"<<endl;
	cin>>e[i].emp_no;
	cout<<endl;
	
	cout<<"Enter employee name"<<endl;
	cin>>e[i].name;
	cout<<endl;
	
	cout<<"Enter employee basic salary"<<endl;
	cin>>e[i].emp_basic;
	cout<<endl;
}
	for(i=0;i<n;i++)
	{
	e[i].DA=0.52*e[i].emp_basic;
	
	e[i].IT=0.3*e[i].emp_basic;
	
	e[i].net_salary=e[i].emp_basic+e[i].DA-e[i].IT;
	
	cout<<"Details of          :"<<e[i].name<<endl;
	cout<<endl;
	cout<<"Employee number     :"<<e[i].emp_no<<endl;
	cout<<"Basic salary        :"<<e[i].emp_basic<<endl;
	cout<<"Employee DA         :"<<e[i].DA<<endl;
	cout<<"Income Tax          :"<<e[i].IT<<endl;
	cout<<"Net salary          :"<<e[i].net_salary<<endl;
	cout<<endl;
    }
	
	
}

