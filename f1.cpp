double func()
{
    double n;
    cin>>n;
    
    double eps=1e-6;
    // eps=the decimal value till which the value will be correct.
    
    // 1e-6 will give us a accuracy till 5 decimal places.
    // 1e-2 will give us a accuracy till 1 decimal places.
    
    // decimal places=values after '.'(decimal point).
    
    double l=1,r=n;
    while((r-l)>eps)
    {
        double mid=l+(r-l)/2;
        if(mid*mid<n)
        l=mid;
        else
        r=mid;
    }
    
    cout<<l<<endl;
}
