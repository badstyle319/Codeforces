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

	int n;
	string input;
	vector<string> names;
	map<string,int> mp;
	map<string,int>::iterator it;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>input;
		if(!mp.count(input)){
			names.push_back(input);
		}
		mp[input]+=1;
	}
	
	if(mp.size()==1){
		cout<<names[0]<<endl;
	}else{
		cout<<(mp[names[0]]>mp[names[1]]?names[0]:names[1])<<endl;
	}
	
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
