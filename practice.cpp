#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
    int n;
    int m;
    int flag, count=0;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cin >> arr[i][j];
      }
    }
    for(int i=0; i<n; i++){
      flag=0;
      for(int j=0; j<m; j++){
        if(arr[i][j]==1) flag=1;
      }
      if(flag==1) count++;
    }
    if((n-count)%2==0) cout << "Vivek" << endl;
    else cout << "Ashish" << endl;
  }
  return 0;
}