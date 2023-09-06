#include <iostream>
#include <stack>
using namespace std;
int main() 
{
  int n;
  int m;
  bool test;
  int train[1000];
  stack<int> s;

  while (cin >> n) 
  {
    if (n == 0)
      break;

    while (cin >> train[0]) 
	{
      if (train[0] == 0)
        break;

      while (!s.empty())
        s.pop();

      m = 1;
      test = true;

      for (int i = 1; i < n; i++)
        cin >> train[i];
        

      for (int i = 0; i < n; i++) 
	  {
        if (train[i] == m) 
		{
          m++;
          continue;
        } 
        
		else if (train[i] < m) 
		{
          if (s.size() > 0) 
		  {
            if (s.top() == train[i]) 
			{
              s.pop();
              continue;
            }
          }
          
          test = false;
          break;
        } 
        
		else if (train[i] > m) 
		{
          while (train[i] != m) 
		  {
            s.push(m);
            m++;
          }
          
          m++;
          continue;
        }
      }
      
      if (test) 
	  {
        cout << "Yes" << endl;
      } 
      
	  else 
	  {
        cout << "No" << endl;
      }
    }

    cout << endl;
  }

  return 0;
}
