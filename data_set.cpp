#include <iostream>
#include <time.h>
#include "generateName.h"
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	fstream ofs;
	ofs.open("C:/Users/lenovo/�������.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "����" << "," << "ѧ��" <<","<<"����"
//		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
//		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
//		<<endl;
	ofs << "����" << "," << "ѧ��" <<","<<"����"
		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
		<<","<<"Ȩ��"<<endl;
	for (int i = 0; i < 90; i++) {
		string name,num, grade,value;
		string attend[20];
		DataBaseRoll(name,num,grade,attend,value);
		cout << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
		ofs << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
	} 
	ofs.close();
	ofs.clear();
	ofs.open("C:/Users/lenovo/���ݿ�.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "����" << "," << "ѧ��" <<","<<"����"
//		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
//		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
//		<<endl;
	ofs << "����" << "," << "ѧ��" <<","<<"����"
		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
		<<","<<"Ȩ��"<<endl;
	for (int i = 0; i < 90; i++) {
		string name,num, grade,value;
		string attend[20];
		DataBaseRoll(name,num,grade,attend,value);
		cout << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
		ofs << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
	}
	ofs.close();
	ofs.clear();
	ofs.open("C:/Users/lenovo/ͼ��ѧ.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "����" << "," << "ѧ��" <<","<<"����"
//		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
//		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
//		<<endl;
	ofs << "����" << "," << "ѧ��" <<","<<"����"
		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
		<<","<<"Ȩ��"<<endl;
	for (int i = 0; i < 90; i++) {
		string name,num, grade,value;
		string attend[20];
		DataBaseRoll(name,num,grade,attend,value);
		cout << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
		ofs << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
	}
	
	ofs.close();
	ofs.clear();
	ofs.open("C:/Users/lenovo/�ӿڼ���.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "����" << "," << "ѧ��" <<","<<"����"
//		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
//		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
//		<<endl;
	ofs << "����" << "," << "ѧ��" <<","<<"����"
		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
		<<","<<"Ȩ��"<<endl;
	for (int i = 0; i < 90; i++) {
		string name,num, grade,value;
		string attend[20];
		DataBaseRoll(name,num,grade,attend,value);
		cout << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
		ofs << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
	}
	ofs.close();
	ofs.clear(); 
	ofs.open("C:/Users/lenovo/������.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "����" << "," << "ѧ��" <<","<<"����"
//		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
//		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
//		<<endl;
	ofs << "����" << "," << "ѧ��" <<","<<"����"
		<<","<<"����1"<<","<<"����2"<<","<<"����3"<<","<<"����4"<<","<<"����5"<<","<<"����6"<<","<<"����7"<<","<<"����8"<<","<<"����9"<<","<<"����10"
		<<","<<"����11"<<","<<"����12"<<","<<"����13"<<","<<"����14"<<","<<"����15"<<","<<"����16"<<","<<"����17"<<","<<"����18"<<","<<"����19"<<","<<"����20"
		<<","<<"Ȩ��"<<endl;
	for (int i = 0; i < 90; i++) {
		string name,num, grade,value;
		string attend[20];
		DataBaseRoll(name,num,grade,attend,value);
		cout << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
		ofs << name << "," << num <<","<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3)<<grade
		<<","<<attend[0]<<","<<attend[1]<<","<<attend[2]<<","<<attend[3]<<","<<attend[4]<<","<<attend[5]<<","<<attend[6]<<","<<attend[7]<<","<<attend[8]<<","<<attend[9]
		<<","<<attend[10]<<","<<attend[11]<<","<<attend[12]<<","<<attend[13]<<","<<attend[14]<<","<<attend[15]<<","<<attend[16]<<","<<attend[17]<<","<<attend[18]<<","<<attend[19]
		<<","<<value<<endl;
	}
	system("pause");
	return 0;
}

 

