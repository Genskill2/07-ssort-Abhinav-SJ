int swap_max(int a[], int l, int n)
{
  int max,i,loc,t;
  max = a[n];
  for(i=n;i<l;i++)
  {
    if(a[i]>max)
      max=a[i];
      loc=i;
  }
  t=a[n];
  a[n]=a[loc];
  a[loc]=t;
}
