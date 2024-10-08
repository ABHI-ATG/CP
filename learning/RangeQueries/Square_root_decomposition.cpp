int n = 100005;
int Sq = 500;
vector<int> v(Sq);

void update(vector<int> &arr, int n, int i, int val)
{
    int sq = sqrt(n);
    v[i / sq] -= arr[i] + val;
    arr[i] = val;
}
int sum(vector<int> &arr, int n, int l, int r)
{
    int ans = 0;
    int sq = sqrt(n);

    int left = l - (l % sq);
    int right = r - (r % sq);

    int bl = left / sq;
    int br = right / sq;

    for (int i = bl; i < br; i++)
    {
        ans += v[i];
    }

    while (left < l)
    {
        ans -= arr[left++];
    }

    while (right <= r)
    {
        ans += arr[right++];
    }

    return ans;
}
void pre(vector<int> &arr, int n)
{

    int sq = sqrt(n);
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (i % sq == 0)
        {
            ind++;
        }
        v[ind] += arr[i];
    }
}