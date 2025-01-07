class Solution {
public:
 unordered_map<int, string> dict = {{0, "Zero"},
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"},
        {10, "Ten"},
        {11, "Eleven"},
        {12, "Twelve"},
        {13, "Thirteen"},
        {14, "Fourteen"},
        {15, "Fifteen"},
        {16, "Sixteen"},
        {17, "Seventeen"},
        {18, "Eighteen"},
        {19, "Nineteen"},
        {20, "Twenty"},
        {30, "Thirty"},
        {40, "Forty"},
        {50, "Fifty"},
        {60, "Sixty"},
        {70, "Seventy"},
        {80, "Eighty"},
        {90, "Ninety"},
        {100, "Hundred"},
        {1000, "Thousand"},
        {1000000, "Million"},
        {1000000000, "Billion"}
        };
    string numberToWords(int num) {
       
        string result = "";
        if (num == 0) {
            return dict[0];
        }
        if (num / 1000000000 >= 1) {
            result += chunkConvert(num / 1000000000) + dict[1000000000] + " ";
        }
        num %= 1000000000;
        if (num / 1000000 >= 1) {
            result += chunkConvert(num / 1000000) +  dict[1000000] + " ";
        }
        num %= 1000000;
        if (num / 1000 >= 1) {
            result += chunkConvert(num / 1000) + dict[1000] + " ";
        }
        result += chunkConvert(num % 1000);
        result.pop_back();
        return result;

    }
    string chunkConvert(int num) {
        string chunk = "";
        if (num / 100 >= 1) {
            chunk += (dict[num/100] + " " + dict[100] + " ");
        }
        int tens = num % 100;
        if (tens > 0) {
            if (tens / 10 < 2 || tens % 10 == 0) {
                chunk += (dict[tens] + " ");
            }
            else {
                chunk += (dict[(tens/10)*10] + " " + dict[tens%10] + " ");
            }
        }
        return chunk;
    }
};