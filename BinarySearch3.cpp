long long int chk(long long int mid,vector<int> &c)
{
    int cnt=1;long long int sum=0;
    for(long long i=0;i<c.size();i++)
    {
        if(sum+c[i]>mid)
        {
            cnt++;
            sum=c[i];
            if(sum>mid)return 1e18;
        }
        else sum+=c[i];
    }
    return cnt;
}






int Solution::paint(int A, int B, vector<int> &c) {
    long long int n=c.size(),a=A,b=B;long long ans;
  
    long long int l=1e18,r=0;
    for(long long i=0;i<n;i++)
    {
        l = min(l,(long long int )c[i]);
        r+=c[i];
        }
    while(l<=r)
    {
        long long int mid = l + (r-l)/2;
        if(chk(mid,c)<=a)
        {
            ans=mid,r=mid-1;
            
        }
        else
        l=mid+1;
    }
    return (ans*b)%10000003;
    
    
    
}

