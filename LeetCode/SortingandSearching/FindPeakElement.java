package LeetCode.SortingandSearching;

public class FindPeakElement {

    public int findPeakElement(int[] nums) {
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]>nums[i+1]) return i;
        }
        return nums.length-1;
    }

    public int best(int[] nums){
        int l=0,r=nums.length-1;
        while (l<r){
            int mid=(l+r)/2;
            if(nums[mid]>nums[mid+1]){
                r=mid;
            }else {
                l=mid+1;
            }
        }
        return l;
    }

    public static void main(String[] args) {
        int[] ara={1,2,3,2,1};
        int out=(new FindPeakElement()).best(ara);
        System.out.print(out);
    }
}
