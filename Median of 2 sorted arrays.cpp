class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        v.insert(v.begin(),nums1.begin(),nums1.end());
        v.insert(v.end(),nums2.begin(),nums2.end());
        sort(v.begin(),v.end());
        int n=v.size();
        if (n%2 !=0)
        {
            return v[n/2];
        }
        else 
        {
            float x=(v[n/2]+v[(n/2)-1]);
            cout<<x/2;
            return x/2;
        }
    }
};
