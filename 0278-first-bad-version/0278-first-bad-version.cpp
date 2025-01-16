// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int first = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isBadVersion(mid)) {
                high = mid - 1;
                if (mid < first) {
                    first = mid;
                }
            }
            if (!isBadVersion(mid)) {
                low = mid + 1;
            }
        }
        return first;
    }
};