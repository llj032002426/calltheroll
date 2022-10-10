#include <iostream>
#include <time.h>
#include "generateName.h"
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	fstream ofs;
	ofs.open("C:/Users/lenovo/软件工程.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "姓名" << "," << "学号" <<","<<"绩点"
//		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
//		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
//		<<endl;
	ofs << "姓名" << "," << "学号" <<","<<"绩点"
		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
		<<","<<"权重"<<endl;
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
	ofs.open("C:/Users/lenovo/数据库.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "姓名" << "," << "学号" <<","<<"绩点"
//		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
//		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
//		<<endl;
	ofs << "姓名" << "," << "学号" <<","<<"绩点"
		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
		<<","<<"权重"<<endl;
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
	ofs.open("C:/Users/lenovo/图形学.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "姓名" << "," << "学号" <<","<<"绩点"
//		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
//		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
//		<<endl;
	ofs << "姓名" << "," << "学号" <<","<<"绩点"
		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
		<<","<<"权重"<<endl;
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
	ofs.open("C:/Users/lenovo/接口技术.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "姓名" << "," << "学号" <<","<<"绩点"
//		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
//		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
//		<<endl;
	ofs << "姓名" << "," << "学号" <<","<<"绩点"
		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
		<<","<<"权重"<<endl;
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
	ofs.open("C:/Users/lenovo/概率论.csv", ios::out|ios::trunc);
	srand(time(0));
//	cout << "姓名" << "," << "学号" <<","<<"绩点"
//		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
//		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
//		<<endl;
	ofs << "姓名" << "," << "学号" <<","<<"绩点"
		<<","<<"出勤1"<<","<<"出勤2"<<","<<"出勤3"<<","<<"出勤4"<<","<<"出勤5"<<","<<"出勤6"<<","<<"出勤7"<<","<<"出勤8"<<","<<"出勤9"<<","<<"出勤10"
		<<","<<"出勤11"<<","<<"出勤12"<<","<<"出勤13"<<","<<"出勤14"<<","<<"出勤15"<<","<<"出勤16"<<","<<"出勤17"<<","<<"出勤18"<<","<<"出勤19"<<","<<"出勤20"
		<<","<<"权重"<<endl;
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

 

