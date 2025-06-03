from collections import defaultdict
class Solution:
    
    def count_less(self ,s , k):
        
        frq=defaultdict(int)
        
        lf = 0
        
        rg = 0
        
        cnt = 0
        
        n = len(s)
        
        while(rg < n):
            frq[s[rg]]+=1
            
            # remove elements until unique characters less than k
            while(lf<=rg and len(frq) >=k):
                frq[s[lf]]-=1
                
                if frq[s[lf]]==0:
                    frq.pop(s[lf])
                
                lf+=1
            
            cnt += (rg-lf+1)
            rg+=1
            
        return cnt
        
    
    def count_more(self , s , k):
        
        lf = 0
        rg = 0
        frq = defaultdict(int)
        
        n = len(s)
        
        cnt = 0
        
        while(rg < n):
            frq[s[rg]]+=1
            
            while(lf <=rg and len(frq) > k):
                cnt += n- rg;
                frq[s[lf]]-=1
                if frq[s[lf]]==0:
                    frq.pop(s[lf])
                lf+=1
            rg+=1
        
        return cnt
        
    def countSubstr (self, s, k):
        # Code here
        
        n = len(s)
        
        tot = (n*(n+1))//2
        
       #coutn strings less than k unique eletns 
        less = self.count_less(s , k)
       
       #count string with greater than k unique elemnts
        more = self.count_more(s , k)
        
        return tot - (less+more)
        
        
        