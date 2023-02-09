class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        for (int i = 0; i < 26; i++) {
            char letter = 'a' + i;
            int rep = INT_MAX;
            for (int j = 0; j < (int) words.size(); j++) {
                int cnt = 0;
                for (int k = 0; k < (int) words[j].size(); k++) {
                    if (words[j][k] == letter) {
                        cnt++;
                    }
                }
                rep = min(rep, cnt);
            }
            for (int i = 0; i < rep; i++) {
                ans.push_back(string(1, letter));
            }
        }
        return ans;
    }
};
