class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count = 0;
        //Counting the number of characters in string chars
        vector<int> charCount(26,0);
        for(char &ch: chars){
            charCount[ch-'a']++;
        }
        
        for(string &word: words){
            vector<int> wordCount(26,0);
            for(char &ch: word){
                wordCount[ch-'a']++;  //Counting the number of characters in each word 
            }
            
            bool ok = true;
            for(int i = 0; i < 26; i++){
                if(wordCount[i] > charCount[i]){
                    ok = false;
                    break;
                }
            }
            
            if(ok){
                count += word.size();
            }
        }
        return count;
    }
};