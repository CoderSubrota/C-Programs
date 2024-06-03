#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Array of names
  string names;
  getline(cin, names);
  // Name to search for
  string searchName = "Jessica";
  string lowerSearchName;

  // Convert searchName to lowercase for case-insensitive comparison
  for (char c : searchName)
  {
    if (c >= 65 && c <= 90)
    {
      c = c + 32;
    }
    lowerSearchName += c;
  }

  // Flag to indicate if the name is found
  bool found = false;

  // Loop through the array of names
  stringstream ss;
  ss << names;
  string word;

  while (ss >> word)
  {
    string lowerWord;
    for (char c : word)
    {
      if (c >= 65 && c <= 90)
      {
        c = c + 32;
      }
      lowerWord += c;
    }
    if (lowerWord == lowerSearchName)
    {
      found = true;
      break;
    }
  }

  // Print the result
  if (found)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
