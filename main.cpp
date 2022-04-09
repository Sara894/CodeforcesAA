#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin>>n;
  int t = n+1;
  const int a = t;
  string arr[a];
  char buf[80]; // буфер для ввода строк
  int i = 0;
  while(t){
    cin.getline(buf,80);
    arr[i] = buf;
    i++;
    t--;
  }
  int inp;
  string str1 = arr[1];
  char comp = str1[1];
  int ostrov = 1;
  for(int i = 1; i < n+1; i++)
    {
      string str = arr[i];
      char rew = str[1];
      inp = static_cast<int>(rew)-48;
      ostrov+=(rew != comp);
      comp = (comp == rew) ? comp : rew;
    }
  cout<<ostrov<<endl;
}