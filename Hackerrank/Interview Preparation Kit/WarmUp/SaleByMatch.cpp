int sockMerchant(int n, vector<int> ar) {
    int sum = 0;
    int arr[101] = {0};
    for (int i = 0; i < ar.size(); i++){
        arr[ar[i]]++;
    }
    for (int i = 0 ; i <101 ;i++){
        sum += (arr[i] / 2);
    }
    return sum;
}