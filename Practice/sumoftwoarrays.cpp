vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    vector<int> temp;
    int i = n-1;
    int j = m-1;
    int carry = 0;
    while(i>=0 && j>=0){
        int sum = a[i] + b[j] + carry;
        temp.push_back(sum%10);
        carry = sum/10;
        i--;
        j--;
    }
    
    while(i>=0){
        int sum = a[i] + carry;
        temp.push_back(sum%10);
        carry = sum/10;
        i--;
    }
    
    while(j>=0){
        int sum = b[j] + carry;
        temp.push_back(sum%10);
        carry = sum/10;
        j--;      
    }
    
    while(carry!=0){
        temp.push_back(carry%10);
        carry = carry/10;
    }
    reverse(temp.begin(),temp.end());
    return temp;
}