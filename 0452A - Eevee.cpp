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

	int n, match;
	vector<int> idx;
	string names[] = {"vaporeon", "jolteon", \
					  "flareon",  "espeon", \
					  "umbreon",  "leafeon", \
					  "glaceon",  "sylveon"};
	string input;
	cin>>n>>input;
	switch(n){
		case 8:
			match = 0;
			break;
		case 6:
			match = 3;
			break;
		default:
			for(int i=0;i<input.length();i++){
				if(input[i]!='.')
					idx.push_back(i);
			}
			for(int i=0;i<8;i++){
				if(i==0 || i==3)
					continue;
				
				int cnt=0;
				for(int j=0;j<idx.size();j++){
					if(names[i][idx[j]]==input[idx[j]])
						cnt++;
				}
				if(cnt==idx.size()){
					match = i;
					break;
				}
			}
			break;
	}
	cout<<names[match]<<endl;
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
