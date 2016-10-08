#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string baseString(const string &s)
{
    string bs(s);
    bs.erase(remove(bs.begin(), bs.end(), ' '), bs.end());
    sort(bs.begin(), bs.end());
    return bs;
}

int main()
{
    size_t T;
    cin >> T;
    cin.ignore();
    cin.ignore();
    while ( T-- )
    {
        string s;
        vector<string> words;
        while (getline(cin, s) && s != "")
            words.push_back(s);

        sort(words.begin(), words.end());
        for (size_t i = 0; i < words.size(); ++i)
            for (size_t j = i + 1; j < words.size(); ++j)
                if (baseString(words[i])==baseString(words[j]))
                    cout<<words[i]<<" = "<< words[j]<< endl;

        if (T)
            cout<<endl;
    }
    return 0;
}
