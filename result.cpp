#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string.h>
#include <string>
#include "generateName.h"
using namespace std;
int interval_set[2][2] = {{1,5},{5,90}};		//设置权重范围，对应第几行 
float weight_set[2] = {0.999,0.001};			//设置权重表 总和必须为1.0
struct student{
		string sname,snum,sgrade;
		int svalue;
		string sattend[20];
}stu[91];
int Weight_rand(int interval[][2],float *weight,size_t IntervalNum); 
bool cmp(student a,student b){
	return a.svalue>b.svalue;
}
int main(){
	double E1,E2,E3,E4,E5;
	string course;
	printf("请输入想要点名的课程：（软件工程，数据库，接口技术，图形学，概率论)\n");
	for(int j=0;j<5;j++){
	cin>>course;
	if(course=="软件工程"){
		fstream ofs("C:/Users/lenovo/软件工程.csv", ios::in);
		string line,number;
		double count=0,sum=0;//有效点名次数，总请求次数 
		//将CSV文件的数据一行行读入结构体
		for(int i=0;i<=90;i++){
			std::getline(ofs,line);
			istringstream is(line);
			std::getline(is,number,',');
			stu[i].sname=number;
			std::getline(is,number,',');
			stu[i].snum=number;
			std::getline(is,number,',');
			stu[i].sgrade=number;
			for(int k=0;k<20;k++)
			{
				std::getline(is,number,',');
				stu[i].sattend[k]=number;
			}
			std::getline(is,number,',');
			stu[i].svalue=atoi(number.c_str());
		}
		sort(stu+1,stu+91,cmp);//按权重值排序，权重大排前面 
		//点名
		int x;
		for(int i=1;i<=20;i++){//该课程的第i次课 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//抽点第c个人  
				x = Weight_rand(interval_set, weight_set, 2);
				sum++;
				if(stu[x].sattend[i]=="0"){
					count++;
				}
			} 
		} 
		E1=count/sum;
		cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<E1<<endl;
	}
	if(course=="数据库"){
		fstream ofs("C:/Users/lenovo/数据库.csv", ios::in);
		string line,number;
		double count=0,sum=0;//有效点名次数，总请求次数 
		//将CSV文件的数据一行行读入结构体
		for(int i=0;i<=90;i++){
			std::getline(ofs,line);
			istringstream is(line);
			std::getline(is,number,',');
			stu[i].sname=number;
			std::getline(is,number,',');
			stu[i].snum=number;
			std::getline(is,number,',');
			stu[i].sgrade=number;
			for(int k=0;k<20;k++)
			{
				std::getline(is,number,',');
				stu[i].sattend[k]=number;
			}
			std::getline(is,number,',');
			stu[i].svalue=atoi(number.c_str());
		}
		sort(stu+1,stu+91,cmp);//按权重值排序，权重大排前面 
		//点名
		int x;
		for(int i=1;i<=20;i++){//该课程的第i次课 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//抽点第c个人  
				x = Weight_rand(interval_set, weight_set, 2);
				sum++;
				if(stu[x].sattend[i]=="0"){
					count++;
				}
			} 
		} 
		E2=count/sum;
		cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<E2<<endl;
	}
	if(course=="接口技术"){
		fstream ofs("C:/Users/lenovo/接口技术.csv", ios::in);
		string line,number;
		double count=0,sum=0;//有效点名次数，总请求次数 
		//将CSV文件的数据一行行读入结构体
		for(int i=0;i<=90;i++){
			std::getline(ofs,line);
			istringstream is(line);
			std::getline(is,number,',');
			stu[i].sname=number;
			std::getline(is,number,',');
			stu[i].snum=number;
			std::getline(is,number,',');
			stu[i].sgrade=number;
			for(int k=0;k<20;k++)
			{
				std::getline(is,number,',');
				stu[i].sattend[k]=number;
			}
			std::getline(is,number,',');
			stu[i].svalue=atoi(number.c_str());
		}
		sort(stu+1,stu+91,cmp);//按权重值排序，权重大排前面 
		//点名
		int x;
		for(int i=1;i<=20;i++){//该课程的第i次课 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//抽点第c个人  
				x = Weight_rand(interval_set, weight_set, 2);
				sum++;
				if(stu[x].sattend[i]=="0"){
					count++;
				}
			} 
		} 
		E3=count/sum;
		cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<E3<<endl;
	}
	if(course=="图形学"){
		fstream ofs("C:/Users/lenovo/图形学.csv", ios::in);
		string line,number;
		double count=0,sum=0;//有效点名次数，总请求次数 
		//将CSV文件的数据一行行读入结构体
		for(int i=0;i<=90;i++){
			std::getline(ofs,line);
			istringstream is(line);
			std::getline(is,number,',');
			stu[i].sname=number;
			std::getline(is,number,',');
			stu[i].snum=number;
			std::getline(is,number,',');
			stu[i].sgrade=number;
			for(int k=0;k<20;k++)
			{
				std::getline(is,number,',');
				stu[i].sattend[k]=number;
			}
			std::getline(is,number,',');
			stu[i].svalue=atoi(number.c_str());
		}
		sort(stu+1,stu+91,cmp);//按权重值排序，权重大排前面 
		//点名
		int x;
		for(int i=1;i<=20;i++){//该课程的第i次课 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//抽点第c个人  
				x = Weight_rand(interval_set, weight_set, 2);
				sum++;
				if(stu[x].sattend[i]=="0"){
					count++;
				}
			} 
		} 
		E4=count/sum;
		cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<E4<<endl;
	}
	if(course=="概率论"){
		fstream ofs("C:/Users/lenovo/概率论.csv", ios::in);
		string line,number;
		double count=0,sum=0;//有效点名次数，总请求次数 
		//将CSV文件的数据一行行读入结构体
		for(int i=0;i<=90;i++){
			std::getline(ofs,line);
			istringstream is(line);
			std::getline(is,number,',');
			stu[i].sname=number;
			std::getline(is,number,',');
			stu[i].snum=number;
			std::getline(is,number,',');
			stu[i].sgrade=number;
			for(int k=0;k<20;k++)
			{
				std::getline(is,number,',');
				stu[i].sattend[k]=number;
			}
			std::getline(is,number,',');
			stu[i].svalue=atoi(number.c_str());
		}
		sort(stu+1,stu+91,cmp);//按权重值排序，权重大排前面 
		//点名
		int x;
		for(int i=1;i<=20;i++){//该课程的第i次课 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//抽点第c个人  
				x = Weight_rand(interval_set, weight_set, 2);
				sum++;
				if(stu[x].sattend[i]=="0"){
					count++;
				}
			} 
		} 
		E5=count/sum;
		cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<E5<<endl;
	}
	}
	double avg=(E1+E2+E3+E4+E5)/5;
	cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<"E="<<avg;
	return 0; 
} 
int Weight_rand(int interval[][2],float *weight,size_t IntervalNum)
{
	float Rand_0_1,WeightTran = 1.0;
	int ret = 0;
	Rand_0_1 = (float)rand()/(RAND_MAX+1.0); 					//在0 ~ 1.0之间随机取值
	for(size_t Num = 0; Num < IntervalNum; Num++)
	{
		WeightTran = WeightTran - weight[Num];					//将权重转置为0-1.0间的取值范围
		if(Rand_0_1 >= WeightTran)								//判断该随机数是否在取值范围中
		{
			if(interval[Num][1] - interval[Num][0] != 0)		//判断该区间表项是否为{x,x}
			return ((interval[Num][0] < interval[Num][1]) ? \
			interval[Num][0] : interval[Num][1]) + rand() % \
			(abs(interval[Num][1] - interval[Num][0])+1);		//在区间表项内取随机数
			else
			return interval[Num][0];
		}
	}
	return ret;
}
