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
int interval_set[2][2] = {{1,5},{5,90}};		//����Ȩ�ط�Χ����Ӧ�ڼ��� 
float weight_set[2] = {0.999,0.001};			//����Ȩ�ر� �ܺͱ���Ϊ1.0
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
	printf("��������Ҫ�����Ŀγ̣���������̣����ݿ⣬�ӿڼ�����ͼ��ѧ��������)\n");
	for(int j=0;j<5;j++){
	cin>>course;
	if(course=="�������"){
		fstream ofs("C:/Users/lenovo/�������.csv", ios::in);
		string line,number;
		double count=0,sum=0;//��Ч������������������� 
		//��CSV�ļ�������һ���ж���ṹ��
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
		sort(stu+1,stu+91,cmp);//��Ȩ��ֵ����Ȩ�ش���ǰ�� 
		//����
		int x;
		for(int i=1;i<=20;i++){//�ÿγ̵ĵ�i�ο� 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//����c����  
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
	if(course=="���ݿ�"){
		fstream ofs("C:/Users/lenovo/���ݿ�.csv", ios::in);
		string line,number;
		double count=0,sum=0;//��Ч������������������� 
		//��CSV�ļ�������һ���ж���ṹ��
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
		sort(stu+1,stu+91,cmp);//��Ȩ��ֵ����Ȩ�ش���ǰ�� 
		//����
		int x;
		for(int i=1;i<=20;i++){//�ÿγ̵ĵ�i�ο� 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//����c����  
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
	if(course=="�ӿڼ���"){
		fstream ofs("C:/Users/lenovo/�ӿڼ���.csv", ios::in);
		string line,number;
		double count=0,sum=0;//��Ч������������������� 
		//��CSV�ļ�������һ���ж���ṹ��
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
		sort(stu+1,stu+91,cmp);//��Ȩ��ֵ����Ȩ�ش���ǰ�� 
		//����
		int x;
		for(int i=1;i<=20;i++){//�ÿγ̵ĵ�i�ο� 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//����c����  
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
	if(course=="ͼ��ѧ"){
		fstream ofs("C:/Users/lenovo/ͼ��ѧ.csv", ios::in);
		string line,number;
		double count=0,sum=0;//��Ч������������������� 
		//��CSV�ļ�������һ���ж���ṹ��
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
		sort(stu+1,stu+91,cmp);//��Ȩ��ֵ����Ȩ�ش���ǰ�� 
		//����
		int x;
		for(int i=1;i<=20;i++){//�ÿγ̵ĵ�i�ο� 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//����c����  
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
	if(course=="������"){
		fstream ofs("C:/Users/lenovo/������.csv", ios::in);
		string line,number;
		double count=0,sum=0;//��Ч������������������� 
		//��CSV�ļ�������һ���ж���ṹ��
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
		sort(stu+1,stu+91,cmp);//��Ȩ��ֵ����Ȩ�ش���ǰ�� 
		//����
		int x;
		for(int i=1;i<=20;i++){//�ÿγ̵ĵ�i�ο� 
			//x=(rand()%(91-1+1))+1;
			for(int c=1;c<=20;c++){//����c����  
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
	Rand_0_1 = (float)rand()/(RAND_MAX+1.0); 					//��0 ~ 1.0֮�����ȡֵ
	for(size_t Num = 0; Num < IntervalNum; Num++)
	{
		WeightTran = WeightTran - weight[Num];					//��Ȩ��ת��Ϊ0-1.0���ȡֵ��Χ
		if(Rand_0_1 >= WeightTran)								//�жϸ�������Ƿ���ȡֵ��Χ��
		{
			if(interval[Num][1] - interval[Num][0] != 0)		//�жϸ���������Ƿ�Ϊ{x,x}
			return ((interval[Num][0] < interval[Num][1]) ? \
			interval[Num][0] : interval[Num][1]) + rand() % \
			(abs(interval[Num][1] - interval[Num][0])+1);		//�����������ȡ�����
			else
			return interval[Num][0];
		}
	}
	return ret;
}
