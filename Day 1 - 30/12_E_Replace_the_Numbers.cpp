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
const ll N = 500001;

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
}

void ans()
{
    vector<int> cc(N);
    for (int i = 0; i < N; i++)
    {
        cc[i] = i;
    }

    int n;
    cin >> n;
    vector<pair<int, vector<int>>> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            int x;
            cin >> x;
            arr.push_back({num, {x}});
        }
        else
        {
            int x, y;
            cin >> x >> y;
            arr.push_back({num, {x, y}});
        }
    }
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i].second.size() == 1)
        {
            ans.push_back(cc[arr[i].second[0]]);
        }
        else
        {
            cc[arr[i].second[0]] = cc[arr[i].second[1]];
        }
    }

    reverse(all(ans));
    output(ans, ans.size());
    nline
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}
