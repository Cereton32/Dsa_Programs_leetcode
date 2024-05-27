class Solution {
public:
    bool isAcceptable(vector<int>& position, int m, int mid) {
        int ballCount = 1;
        int ballPosition = position[0];
        for (int i = 1; i < position.size(); i++) {
            if (position[i] - ballPosition >= mid) {
                ballCount++;
               
                ballPosition = position[i];
            }
        }
         if (ballCount >= m) return true;
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int start = 1;
        int end = position.back() - position.front();
        int result = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (isAcceptable(position, m, mid)) {
                start = mid + 1;
                result = mid;
            } else {
                end = mid - 1;
            }
        }

        return result;
    }
};

auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

