class Solution:
    def defangIPaddr(self, address: str) -> str:
         i = 0
         ans = ""
         while i < len(address):
            if address[i] == ".":
                ans = ans + "[.]"
            else:
                ans = ans + address[i]    
            i=i+1 
         return ans       