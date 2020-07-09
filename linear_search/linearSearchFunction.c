int linear_search(int a[] , int n , int x)
 {
    int i;
   
   for(i=0;i<n;i++){
   
      if(a[i]==x){
       return i;
      }
   }
   return -1;
 }
