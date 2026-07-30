class Solution {
    public int minimumRecolors(String blocks, int k) {
      int operations =0;
      int count  =0;
      for(int i =0; i<k; i++) {
        if(blocks.charAt(i) == 'B'){
            count++;
        }
      }
      int maxcount = count;
      for(int i =k ; i<blocks.length(); i++){
         if(blocks.charAt(i) == 'B'){
            count++;
        } if(blocks.charAt(i-k) == 'B'){
            count--;
        }
        maxcount = Math.max(maxcount , count);
      }
      operations = k- maxcount;
      return operations;
    }
}