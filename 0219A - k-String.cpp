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

	int k, legal = 1;
	string input;
	map<char, int> mp;
	map<char, int>::iterator it;
	
	cin>>k>>input;
	if(input.length()%k)
		legal = 0;
	else{
		for(int i=0;i<input.length();i++){
			mp[input[i]]++;
		}
		
		for(it=mp.begin();it!=mp.end();it++){
			if(it->second%k){
				legal = 0;
				break;
			}
		}
	}
	if(legal){
		string temp;
		for(it=mp.begin();it!=mp.end();it++){
			for(int i=0;i<it->second/k;i++)
				temp+=it->first;
		}
		for(int i=0;i<k;i++)
			cout<<temp;
		cout<<endl;
	}else
		cout<<-1<<endl;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
