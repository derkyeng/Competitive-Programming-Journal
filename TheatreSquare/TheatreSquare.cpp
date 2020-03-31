#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m ,a;

  cin >> n >> m >> a;

  double h = n/a;
  double w = m/a;

  if(n % a != 0){
    h++;
  }
  if(m % a != 0){
    w++;
  }

  cout << fixed << setprecision(0) << h*w << endl;
}
