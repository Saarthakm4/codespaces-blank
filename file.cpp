/*program to convert excel char to integer,
for eg 
A -> 1;
B -> 2;
ZZ -> 702;

*/


# include <iostream>

using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char c :columnTitle){
            int chartoint = c-'A'+1;
            ans = ans *26 +chartoint; 
            }
            return ans;
    }   
    
};
int main(){
    Solution x;
    cout << x.titleToNumber("ACD")<<endl;
}