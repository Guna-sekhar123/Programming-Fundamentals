// Find the Duplicate numbers in an given array
/*  make a hash map with HashSet
 *  if duplicates present return true else false
 */
import java.util.HashSet;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> ans = new HashSet<>();
        for (int num : nums) {
            if (ans.contains(num))
                return true;
            ans.add(num);
        }
        return false;
    }
}