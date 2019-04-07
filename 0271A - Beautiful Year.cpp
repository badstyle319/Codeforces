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

int distinct(int year){
	map<int,int> mp;
	int temp;
	while(year){
		temp = year%10;
		if(mp.count(temp))
			return 0;
		else
			mp[temp]+=1;
		year/=10;
	}
	return 1;
}

int main()
{
	#ifdef CF
		freopen("in.txt", "r", stdin);
	#endif

	int y;
	cin>>y;
	
	do{
		y++;
	}while(!distinct(y));
	cout<<y;
	
	#ifdef CF
		fclose(stdin);
	#endif
	
	return 0;
}
