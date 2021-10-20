class Solution {
public:
    string reverseWords(string s) {
      //reverse string 
        reverse(s.begin(), s.end());
        
        //reverse words
        for(int i = 0, j = 0;i<s.size();){
            while(i<s.size() && (i < j || s[i]==' ') ) i++;
            while(j<s.size() && (j<i || s[j]!=' ')) j++;
            reverse(s.begin()+i, s.begin()+j);
        }
        
        //remove space
        int i = 0,j = 0;
        while(j<s.size()){
            if(s[j]!=' ' || (s[j]==' ' && i!=0 && j!= s.size()-1 && s[j+1]!= ' '))
                s[i++] = s[j++];
            else if(s[j]==' ')
                j++;
        }
        s.resize(i);
        return s;
    }
    
};
