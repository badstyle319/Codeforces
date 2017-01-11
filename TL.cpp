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
	int v = -1, n, m, num;
	vector<int> correct, wrong;
	
	cin>>n>>m;
	while(n-->0){
		cin>>num;
		correct.push_back(num);
	}
	while(m-->0){
		cin>>num;
		wrong.push_back(num);
	}
	sort(correct.begin(), correct.end());
	sort(wrong.begin(), wrong.end());
	for(int i=correct.back();i<wrong.front();i++){
		if(correct.front()*2<=i){
			v = i;
			break;
		}
	}
	cout<<v;
	return 0;
}
