#include <fstream>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

ofstream fout("fin", ios::app);
ofstream gout("gin", ios::app);

int main(){
	string str;
	char ttr[150];
	int m;
	cout << "你要输入几组翻译：" << endl;
	cin >> m;
	for(int i = 0; i < m; ++i)
	{
		while(1){
			cout << "请输入对应的中文" << endl;
			cin >> str;
			cout << "请输入对应的英文" << endl;
			getchar();
		    gets(ttr);

			cout << endl << "你输入的翻译如下， 确认按1， 否则按2重新输入" << endl
				 << str << endl << ttr << endl;
			int n;
			cin >> n;
			if(n == 1)
				break;
		}
		cout << endl << "Succeed!" << endl << endl;
		fout << str << endl;
	  	gout << ttr << endl;
	}
	return 0;
}
