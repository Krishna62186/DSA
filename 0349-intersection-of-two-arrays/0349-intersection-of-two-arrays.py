class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        ans =[]
        st=set()
        for i in range (0, len(nums1)):
            st.add(nums1[i])

        for i in range (0, len(nums2)):
            if nums2[i] in st:
                ans.append(nums2[i])
                st.remove(nums2[i])

        return ans;       
