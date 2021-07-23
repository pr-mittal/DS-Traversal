// #include	<bits\stdc++.h>
// using namespace std;
// int main(){
// 	int info[]= {116,10,3,100,7,26,55,97,14,255,111,19,255,68,84,255,255,177,81,90,255,255,2,3,4,5,93,255,255,9,9};

// 	int ans = 1e5,tpc;
// 	cin>>tpc;
// 	stack<pair<int,int>> s;
// 	s.push({0,0});
// 	int dist = 0;
// 	while(!s.empty()){
// 		int curr = s.top().first, dist = s.top().second;
// 		s.pop();
// 		cout<<curr<<"\n";
// 		ans = min(ans,info[curr] + dist*tpc);
// 		if(info[curr+1]!=255)
// 			s.push({info[curr+1],dist +1});
// 		if(info[curr+2]!=255)
// 			s.push({info[curr+2],dist +1});	
// 	}
// 	cout<<ans<<"=ans\n";
// 	return 0;
// }


// BFS 255 wla concept
#include	<bits\stdc++.h>
using namespace std;
int main(){
	int info[]= {116,10,3,100,7,26,55,97,14,255,111,19,255,68,84,255,255,177,81,90,255,255,2,3,4,5,93,255,255,9,9};

	int ans = 1e5,tpc;
	cin>>tpc;
	queue<int> q;
	q.push(0);
	q.push(255);
	int dist = 0;
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		if(curr == 255){
			dist++;
			if(!q.empty())
				q.push(255);	
			continue;
		}
		
		cout<<curr<<"= curr\n";
		cout<<dist<<" = its dist \n";
		ans = min(ans,info[curr] + dist*tpc);
		if(info[curr+1]!=255)
			q.push(info[curr+1]);
		if(info[curr+2]!=255)
			q.push(info[curr+2]);	
	}
	cout<<ans<<"=ans\n";
	return 0;
}
