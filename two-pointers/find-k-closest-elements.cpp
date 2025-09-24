class Solution {
public:
   int findIdx(vector<int>& arr, int x, int l, int r) {
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid;
    }
    // l == r, closest to where x should be inserted
    if (l > 0 && abs(arr[l] - x) >= abs(arr[l-1] - x))
        return l-1;
    return l;
}


    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> arr1;
        int idx = findIdx(arr, x, 0, arr.size() - 1);

        int count = 1;
        int i = idx - 1;
        int j = idx + 1;
        arr1.push_back(arr[idx]);

        while (count < k && i >= 0 && j < arr.size()) {
            if (abs(arr[i] - x) <= abs(arr[j] - x)) {
                arr1.push_back(arr[i]);
                i--;
            } else {
                arr1.push_back(arr[j]);
                j++;
            }
            count++;
        }

        if (count < k) {
            if (i >= 0) {
                while (count < k && i >= 0) {
                    arr1.push_back(arr[i]);
                    i--;
                    count++;
                }
            } else {
                while (count < k && j < arr.size()) {
                    arr1.push_back(arr[j]);
                    j++;
                    count++;
                }
            }
        }

        sort(arr1.begin(), arr1.end());
        return arr1;
    }
};