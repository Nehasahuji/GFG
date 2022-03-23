 1. Naive Pattern Search
/*Time Complexity O((n-m)*m);
Space complexity O(1)
*/
 bool search(string pat, string txt) 
    { 
        int m=pat.size(),n=txt.size();
    	for(int i=0;i<=n-m;i++){
    	    int j;
    	    for(j=0;j<m;j++){
    	        if(txt[i+j]!=pat[j]){
    	            break;
    	        }
    	    }
    	    
    	    if(j==m){
    	        return true;
    	    }
    	}
    	
    	return false;
    }