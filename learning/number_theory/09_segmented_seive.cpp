const int n = 1e+6;
bool arr[n + 1];

void createseive(long long int r){
    for(int i=2;i<n;i++)arr[i]=1;
    for (int i = 2; i<n; i++){
        if (arr[i]==1){
            for (int j = i*2; j * j <= r; j += i)arr[j]=0;
        }   
    }
}

void segmented_seive(long long int l, long long int r){
    long long int ar[r - l + 1];
    int temp = 0;
    for (int i = l; i <= r; i++){
        ar[temp++] = i;
    }
    for (int j = 2; j * j <= r; j++){
        if (arr[j] == 0)continue;
        int mult = (ar[0] /j) * j;
        if (mult < l)mult+=j;
        mult -= l;
        for (int k = mult; k < r - l + 1; k += j)ar[k]=0;
    }
    for (int i = 0; i < r - l + 1; i++)
    {
        if (ar[i] != 0)cout << ar[i] << " ";
    }
}
// cin >> l >> r;
// createseive(r);
// for(int i=100000;i*i<=r;i++){
//     if(arr[i]==1){
//         cout<<i<<" ";
//     }
// }
// // cout<<r-l;
// segmented_seive(l, r);