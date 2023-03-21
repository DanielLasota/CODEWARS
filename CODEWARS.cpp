
https://www.codewars.com/kata/5acc79efc6fde7838a0000a0

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;
};

bool search(int n, Node* root) {
    if (root == nullptr) {
        // Base case: reached the end of a subtree without finding n
        return false;
    }
    if (root->val == n) {
        // Base case: found n
        return true;
    }
    // Recursively search left and right subtrees
    return search(n, root->left) || search(n, root->right);


}







https://www.codewars.com/kata/563e320cee5dddcf77000158
#include <vector>
#include <cmath>

using namespace std;
int get_average(std::vector <int> marks)
{
    int sum = 0;
    for (int i = 0; i < marks.size(); i++) {
        sum += marks[i];
    }
    return floor(sum / marks.size());
}








https://www.codewars.com/kata/63ebadc7879f2500315fa07e
#include <vector>
#include <algorithm>

std::vector<int> cleaned_counts(const std::vector<int>& data) {

    std::vector<int> aux = data;
    for (int i = 0; i < data.size() - 1; i++) {
        if (aux[i + 1] < aux[i])
            aux[i + 1] = aux[i];
    }

    return aux;
}





https://www.codewars.com/kata/54edbc7200b811e956000556
#include <vector>
using namespace std;

int count_sheep(vector<bool> arr)
{
    int aux = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == true)
            aux++;
    }

    return aux;
}





https://www.codewars.com/kata/55f2b110f61eb01779000053
int get_sum(int a, int b)
{
    return (a < b) ? 0.5 * (a + b) * (b - a + 1) : 0.5 * (a + b) * (a - b + 1);
}





https://www.codewars.com/kata/55f9bca8ecaa9eac7100004a
int past(int h, int m, int s) {
    return 1000 * (h * 3600 + m * 60 + s);
}






https://www.codewars.com/kata/55685cd7ad70877c23000102
int makeNegative(int num)
{
    return (num >= 0) ? -num : num;
}




https://www.codewars.com/kata/53da3dbb4a5168369a0000fe
#include <string>

std::string even_or_odd(int n)
{
    return(n % 2) ? "Odd" : "Even";
}






https://www.codewars.com/kata/530e15517bc88ac656000716
#include <string>

using namespace std;

string rot13(string msg)
{
    int s; //aux variable for shiftin'

    for (int i = 0; i < msg.length(); i++)
    {
        s = static_cast<int>(msg[i]); //convert input string "msg" into ascii int
        if (((s >= 65 && s <= 90) || (s >= 97 && s <= 122))) // check if letter
        {
            s += 13;
            if ((s > 122) || (s > 90 && s < 104)) //check if letter went beyond z/Z
            {
                s -= 26;
            }
            msg[i] = (int)(s);
        }

    }


    return msg;
}








https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd
int paperwork(int n, int m) {
    return(m > 0 && n > 0) ? m * n : 0;
}











https://www.codewars.com/kata/520b9d2ad5c005041100000f
#include <iostream>
#include <string>
using namespace std;

string pig_it(string str)
{
    int heh = 0; //auxiliary variable for returning converted ascii value of every char
    int heh2 = 0; //2nd aux var for returning converted ascii value
    string help; //auxiliary string for temporary cutting first letter of every word
    int i = 0; //iterator fow main while loop

    //Im cutting first letter of first word:
    help = str[0];
    str.erase(0, 1);

    while (i < str.length())
    {
        heh = static_cast<int>(str[i]);

        if (heh == 32)//check if theres a space char
        {
            heh2 = static_cast<int>(help[0]);


            if (!((heh2 >= 65 && heh2 <= 90) || (heh2 >= 97 && heh2 <= 122)))//check ascii if letter or no
            {
                str.insert(i, help); //dont add "ay" if not a letter
                i++;
            }
            else if (((heh2 >= 65 && heh2 <= 90) || (heh2 >= 97 && heh2 <= 122)))
            {
                str.insert(i, help + "ay");//add "ay if letter"
                i = i + 3;
            }
            if (i >= str.length()) //break loop when reached last word, then ..:
                break;

            help = str[i + 1];
            heh = static_cast<int>(str[i + 1]);
            str.erase(i + 1, 1);//erase first char of a word, then eventually return it if not a letter
            i++;
        }
        else
        {
            i++; //MAIN ITERATOR
        }
    }
    if ((heh >= 65 && heh <= 90) || (heh >= 97 && heh <= 122)) //...: then here check last char ascii, add "ay" if a letter
        str.insert(str.length(), help + "ay");
    else // don't add "ay" if not a letter
        str.insert(str.length(), help);
    return str;
}





https://www.codewars.com/kata/5262119038c0985a5b00029f
bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}






https://www.codewars.com/kata/514b92a657cdc65150000006
int solution(int number)
{
    int x = 0;
    for (int i = 1; i < number; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            x += i;
        }
    }
    return x;
}






https://www.codewars.com/kata/542c0f198e077084c0000c2e
int divisors(int n) {
    float h;
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        h = static_cast<float>(n) / i;
        if (h == n / i)
            j++;
    }
    return j;
}








https://www.codewars.com/kata/55fd2d567d94ac3bc9000064
unsigned long long rowSumOddNumbers(unsigned n)
{
    unsigned long long x[20000];
    x[0] = 1;
    for (int i = 1; i < 20000; i++)
    {
        x[i] = x[i - 1] + 2;
    }
    unsigned int p[20000];
    p[0] = 1;
    for (int i = 1; i < 20000; i++)
    {
        p[i] = p[i - 1] + i;
    }
    unsigned long long h;
    h = x[p[n - 1] - 1];
    unsigned long long s;
    s = h + (n - 1) * 2;
    return (s + h) * n / 2;
}







https://www.codewars.com/kata/56606694ec01347ce800001b
namespace Triangle
{
    bool isTriangle(unsigned int a, unsigned int b, unsigned int c)
    {
        return(a + b > c && a + c > b && b + c > a) ? true : false;
    }
}










https://www.codewars.com/kata/56269eb78ad2e4ced1000013
#include <cmath>

long int findNextSquare(long int sq)
{
    return(int(sqrt(sq)) - sqrt(sq) == 0) ? ((sqrt(sq) + 1) * (sqrt(sq) + 1)) : -1;
}








https://www.codewars.com/kata/54c27a33fb7da0db0100040e
#include<cmath>

bool is_square(int n)
{
    return(sqrt(n) - int(sqrt(n)) == 0) ? true : false;
}











https://www.codewars.com/kata/54ff3102c1bad923760001f3
#include <string>

using namespace std;

int getCount(const string& inputStr) {
    int num_vowels = 0;
    for (int i = 0; i < inputStr.length(); i++)
    {
        if (inputStr[i] == 'a' || inputStr[i] == 'e' || inputStr[i] == 'i' || inputStr[i] == 'a' || inputStr[i] == 'o' || inputStr[i] == 'u')
            num_vowels++;
    }
    return num_vowels;
}









https://www.codewars.com/kata/55d24f55d7dd296eb9000030
int summation(int num) {
    int x = 0;
    while (num > 0)
    {
        x += num;
        num--;
    }
    return x;
}








https://www.codewars.com/kata/57a0e5c372292dd76d000d7e
#include <string>

std::string repeat_str(int repeat, const std::string str) {
    std::string mstr;
    for (int i = 1; i <= repeat; i++)mstr += str;
    return mstr;
}





https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
#include <string>

using namespace std;

string sliceString(string str)
{
    str.erase(0, 1);
    str.erase(str.length() - 1, 1);
    return str;
}





https://www.codewars.com/kata/5265326f5fda8eb1160004c8
#include <string>

std::string number_to_string(int num) {
    return std::to_string(num);
}





https://www.codewars.com/kata/53369039d7ab3ac506000467
#include <string>

std::string bool_to_word(bool value)
{
    return (value == true) ? "Yes" : "No";
}








https://www.codewars.com/kata/56dec885c54a926dcd001095
int opposite(int number)
{
    return -number;
}






https://www.codewars.com/kata/5168bb5dfe9a00b126000018
#include <string>
using namespace std;

string reverseString(string str)
{
    string rstr;
    for (int i = str.length() - 1; i >= 0; i--)rstr += str[i];
    return rstr;
}




https://www.codewars.com/kata/50654ddff44f800200000004
int multiply(int a, int b)
{
    return (a * b);
}