class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(int i = 0; i < strs.size(); i++ ) {
            encoded_string += to_string(strs[i].size()) + "#" + strs[i];
        }   
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_trs;
        int pos = 0;
        while(pos < s.size()) {
            int h_index = s.find('#', pos);
            string word = s.substr(pos, h_index-pos);
            int len =stoi(word);
            string decodedword = s.substr(h_index+1,len);
            decoded_trs.push_back(decodedword);
            pos = h_index + 1 + len;
        }
    return decoded_trs;
   }
};
