#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>

#define LL long long
#define ULL unsigned long long
#define PI 3.14159265

using namespace std;

static int dx[] = {-1,-1,-1,0,0,1,1,1};
static int dy[] = {-1,0,1,-1,1,-1,0,1};

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif

	string s, t;
	map<char,int> mp;
	map<char,int>::iterator it;
	int flag = 0;
	
	cin>>s>>t;
	for(int i=0;i<s.length();i++)
		mp[s[i]]++;
	for(int i=0;i<t.length();i++)
		mp[t[i]]--;

	for(it=mp.begin();it!=mp.end();it++){
		if(it->second<0){
			flag |= 1;
			break;
		}else if(it->second>0){
			flag |= 2;
		}
	}

	if(flag%2){
		cout<<"need tree"<<endl;
	}else{
		size_t idx = 0;
		for(int i=0;i<t.length();i++){
			size_t found = s.find(t[i], idx);
			if(found!=string::npos){
				idx = found+1;
			}
			else{
				flag |= 4;
				break;
			}
		}
		
		switch(flag){
			case 2:
				cout<<"automaton"<<endl;
				break;
			case 4:
				cout<<"array"<<endl;
				break;
			case 6:
				cout<<"both"<<endl;
				break;
		}
	}
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
