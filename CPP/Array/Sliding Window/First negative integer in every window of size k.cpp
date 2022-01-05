vector<long long> printFirstNegativeInteger(long long int arr[], long long int N, long long int k) {
       vector<long long> ans;
       list<long long int> l;
       int i=0,j=0;
       while(j<N){
           if(arr[j]<0) l.push_back(arr[j]);
           if(j-i+1<k) j++;
           else if(j-i+1==k){
               if(l.size()==0) ans.push_back(0);
               else {
                   ans.push_back(l.front());
                   if(arr[i]==l.front()) l.pop_front();
               }
               i++;
               j++;
           }
       }
       return ans;
 }
