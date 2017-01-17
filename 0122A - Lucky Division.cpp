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

int digits[2] = {4, 7};
int luckyNums[5];
void generateLuckyNums(int n, int cnt, vector<int> &result){
	if(n==cnt){
		int sum=0;
		for(int i=0;i<cnt;i++)
			sum = sum*10+luckyNums[i];
		result.push_back(sum);
		return;
	}
	for(int i=0;i<2;i++){
		luckyNums[n] = digits[i];
		generateLuckyNums(n+1, cnt, result);
	}
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif
	
	int n, i=1, isLucky=0;
	vector<int> result;
	
	cin>>n;
	do{
		generateLuckyNums(0, i, result);
		i++;
	}while(result.back()<n);

	for(int i=0;i<result.size();i++){
		if(n%result[i]==0){
			isLucky = 1;
			break;
		}
	}
	cout<<(isLucky?"YES":"NO");
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
