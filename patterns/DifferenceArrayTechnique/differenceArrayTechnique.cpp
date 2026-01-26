// use when : 
// we have to apply range updates on an array 
// range modification problems
// we dont need to query the array frequently after updates



// starting index pe add krdo value // ending index ke baad wale index pe subtract krdo value
// [L,R,x] 
// arr[L]+=x
// arr[R+1]-=x // just checl R+1<n // out of bound nahi hona chahiye

for(auto &query:queries){
  int start=query[0];
  int end=query[1];
  int x=query[2];
  
  arr[start]+=x;
  if(end+1<n){
      arr[end+1]-=x;
  }

}

// then take cummulative sum // so we will get to known the effective change on each index 
