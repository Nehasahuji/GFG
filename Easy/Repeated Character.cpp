Repeated Character 
/*Time Complexity: O(N^2) 
Auxiliary Space: O(1)
*/
 char firstRep (string s)
    {
        for(int itr=0;itr<s.length();itr++){
            for(int jtr=itr+1;jtr<s.length();jtr++){
                if(s[itr]==s[jtr]){
                    return s[itr];
                }
            }
        }
        return  '#';
    }
	
 
/*Time Complexity: O(N) 
Auxiliary Space: O(1)
*/
	
 char firstRep (string s)
    {
        const int CHAR=256;
        int visited[CHAR]={0};
        
        for(int itr=0;itr<s.length();itr++){
            visited[s[itr]]++;
        }
        
        
        for(int itr=0;itr<s.length();itr++){
            if(visited[s[itr]]>1)
               return s[itr];
        }
        
        return '#';
    }
	
 
/*Time Complexity: O(N) 
Auxiliary Space: O(1)
*/
	
    char firstRep (string s)
    {
        const int CHAR=256;
        int visited[CHAR];
       
        fill(visited,visited+CHAR,false);
        
        char res='#';
        for(int itr=s.length()-1;itr>=0;itr--){
            if(visited[s[itr]])
                res=s[itr];
            else
               visited[s[itr]]=true;
        }
        
        return res;
    }