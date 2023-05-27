class Solution {
    public int minExtraChar(String s, String[] dictionary) {
        Set<String> d_temp=new HashSet<>();
        for(String w1:dictionary)
        {
            d_temp.add(w1);
        }
        int l=s.length();
        int[] memo=new int[l+1];
        for(int zz=1;zz<=l;zz++)
        {
            memo[zz]=memo[zz-1]+1;
            for(int ll=zz;ll>=1;ll--)
            {
                String stt=s.substring(ll-1,zz);
                if(d_temp.contains(stt))
                {
                    memo[zz]=Math.min(memo[zz],memo[ll-1]);
                }
            }
        }
        return memo[l];
    }
}