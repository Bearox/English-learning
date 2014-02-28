#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <cstring>


using namespace std;
bool flag[99999];
int n, tmp;
string str1[5], str2[5], str3[5];


void get(int m)
{
	static int c = 0;
	while(flag[m])
	{
		++m;
		if(m == n) m = 0;
	}
	ifstream fin("fin");
	ifstream gin("gin");
	flag[m] = 1;
	for(int i = 0; i <= m; ++i){
		getline(fin, str1[c]);
		getline(gin, str2[c]);
	}
	++c;
	if(c == 5) c = 0;
}

int main(){
	srand((unsigned)time(NULL));
    ifstream fff("fin");
	n = 0;
	while(getline(fff, str1[0]))
		++n;
	tmp = n;
	memset(flag, 0, sizeof(flag));
	system("reset");
	while(1){
		if(tmp < 5)
			return 0;
		tmp -= 5;
		for(int i = 0; i < 5; ++i){
			int m = (int)rand();
			m = m % n;
			get(m);
		}
		cout << "请翻译下面的句子" << endl;
		for(int i = 0; i < 5; ++i){
			cout << i + 1 << ':' << str1[i] << endl << endl;
		}
		cout << "Press Enter to show the answer!" << endl << endl;
		getchar();
		for(int i = 0; i < 5; ++i){
			cout << i + 1 << ':' << str2[i] << endl << endl;
		}
		cout << "按回车键进行下一组的句子翻译" << endl;
		getchar();
		system("clear");
	}
	return 0;
}
