#include "bits/stdc++.h"
using namespace std;

struct node
{
	int hr,min,sec;
	node &operator+=(const node &x){
		if((sec+=x.sec)>=60){
			sec%=60,min++;
		}
		if((min+=x.min)>=60){
			min%=60,hr++;
		}
		hr+=x.hr;
		return *this;
	}
};


int main(){
	ifstream ifs("学时统计.txt");
	ofstream ofs("统计结果.txt");
	string s;
	node tot={};
	while(getline(ifs, s)){
		if(isdigit(s[0])){
			int x=0, p=s.find(':');
			int min=stoi(s.substr(0,p)),sec=stoi(s.substr(p+1,s.length()-p-1));
			tot+={0,min,sec};
			ofs<<tot.hr<<":"<<tot.min<<":"<<tot.sec<<endl;
		}else ofs<<s<<"   ";
	}
	
	return 0;
}