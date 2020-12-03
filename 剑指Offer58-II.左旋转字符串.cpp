#include <iostream>
#include <string>
using namespace std;        //使用std命名空间

// 定义Solution类
class Solution {
public:
    // 定义reverseLeftWords函数，参数s为输入字符串，n为左旋转的位数
    string reverseLeftWords(string s, int n) {
        cout << s << endl;
        // s.length() 获取字符串s的长度
        int length = s.length();

        // 调用reverse_string函数
        reverse_string(s, 0, length-1);
        reverse_string(s, 0, length-n-1);
        reverse_string(s, length-n, length-1);
        
        return s;
    }
    // 定义reverse_string函数，参数s为输入字符串指针，start为
    int reverse_string(string& s, int start, int end) {
        // 输入s="abcdefg", start = 0, end = 6
        // i = 0, i<= (0 + 6) / 2 = 3  --> i = [0, 3]
        for (int i = start; i <= (start + end) / 2; i++) {
            // i == 0, temp = 'a'
            char temp = s[i];
            // s[i] = s[0 + 6 - 0] = s[6] = 'f'
            s[i] = s[start+end-i];
            // s[6] = 'a'
            s[start+end-i] = temp;
            cout << s << endl;
        }
        cout << "reverse over" << endl;
        return 0;
    }
};

int main(){
    Solution sol;
    cout << sol.reverseLeftWords("lrloseumgh",6) << endl;
}