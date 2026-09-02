// 150. Evaluate Reverse Polish Notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> temp;
        for(string c : tokens ){
            if ( c != "+" &&  c != "-" &&  c != "*" &&  c != "/" ){
                int num = stoi(c);
                temp.push(num);
            }
            else {
                int n1 = temp.top();
                temp.pop();
                int n2 = temp.top();
                temp.pop();
                int result ;
                if(c == "+"){
                    result = n1 + n2 ;
                }
                else if(c == "-"){
                    result = n2-n1 ;
                }
                else if(c == "*"){
                    result = n1 * n2 ;
                }
                else{
                    result = n2/n1 ;
                }
                temp.push(result);
                result =0;
            }
        }
        return temp.top();
    }
};
