package LeetCode.Array;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ThreeSum {

    public List<List<Integer>> threeSum(int[] nums) {
        int l=nums.length;
        Arrays.sort(nums);
        List<List<Integer>> out=new ArrayList<>();
        for(int i=0;i<l-2&& nums[i]<=0;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1,k=l-1;
            while (j<k){
                if(k<l-1 && nums[k]==nums[k+1]) {k--;continue;}
                if(nums[i]+nums[j]+nums[k]==0){
                    out.add(new ArrayList<>(Arrays.asList(nums[i],nums[j],nums[k])));
                    j++;k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0) j++;
                else k--;
            }
        }
        return out;
    }

    public static void main(String[] args){
        int[] array={-2,0,0,2,2};
        List<List<Integer>> k=(new ThreeSum()).threeSum(array);
        for (List<Integer> m:k){
            System.out.println(m.toString());
        }
    }
}
