#include <bits/stdc++.h>
using namespace std;
int main() {

  int t, a, b, c, n, result, temp;
  cin>>t;
  while(t>0){
    t--;
    cin>>a>>b>>c>>n;
    temp = max(a, max(b, c));
    result = a+ b+ c+ n;
    if(result%3==0 && result/3 >= temp) cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}
