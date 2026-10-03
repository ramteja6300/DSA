class Solution {
public:
   void generate(int open,int close,int n,vector<string> &possibilities,string &a)
   {
     if(open==n && close==n)
     {
        possibilities.push_back(a);
        return;
     }
     if(open < n)
     {
        a.push_back('(');
        generate(open+1,close,n,possibilities,a);
        a.pop_back();

     }
     if(close<open)
     {
        a.push_back(')');
        generate(open,close+1,n,possibilities,a);
        a.pop_back();
     }

   }
    
    vector<string> generateParenthesis(int n) {
        vector<string> possibilities;
        string a;
        generate(0,0,n,possibilities,a);
        return possibilities;
    }
};