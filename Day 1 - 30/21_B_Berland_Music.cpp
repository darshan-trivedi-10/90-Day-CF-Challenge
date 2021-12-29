/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||

*/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define endl '\n'

#define ha cout << "YES \n";
#define na cout << "NO\n";
#define all(z) z.begin(), z.end()
#define pt(s) cout << s << endl;
#define ff first
#define ss second
#define um unordered_map
#define us unordered_set
#define nline cout << "\n";
#define pb emplace_back

/*Keep learning
Keep doing
keep upsolving*/
template <typename T>
void input(T a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

template <typename O>
void output(O a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    nline
}

void ans()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]] = i;
    }
    string s;
    cin >> s;
    set<ll> l, dl;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            dl.insert(arr[i]);
        }
        else
        {
            l.insert(arr[i]);
        }
    }
    vector<int> ans(n);
    int sz = dl.size();
    for (int i = 1; i <= sz; i++)
    {
        auto it = dl.begin();
        ans[mpp[*it]] = i;
        dl.erase(it);
    }

    for (int i = sz + 1; i <= n; i++)
    {
        auto it = l.begin();
        ans[mpp[*it]] = i;
        l.erase(it);
    }

    output(ans, ans.size());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}