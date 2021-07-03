void swap_max(int arr[], int l, int n)
{
  int max,i,loc,t;
  max = arr[n];
  for(i=n;i<l;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      loc=i;
    }
  }
  t=arr[n];
  arr[n]=arr[loc];
  arr[loc]=t;
}

void ssort(int arr[], int l)
{
  int i;
  for(i=0;i<l;i++)
    swap_max(arr,i,l);
}
