class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {

        int Truecount = 0;
        int Falsecount = 0;
        int left = 0;
        int ans = 0;

        for (int right = 0; right < answerKey.length(); right++) {

            if (answerKey[right] == 'T')
                Truecount++;
            else
                Falsecount++;

            while (min(Truecount, Falsecount) > k) {

                if (answerKey[left] == 'T')
                    Truecount--;
                else
                    Falsecount--;

                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};