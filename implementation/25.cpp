
#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      string s;
      cin >> s;
      int check = -1, res = 0;

      for (int i = 0; i < s.size (); i++)
	{
	  if (s[i] == '1')
	    {
	      if (check != -1)
		res += (i - check - 1);
	      check = i;

	    }
	}
      std::cout << res << std::endl;
    }

  return 0;
}
