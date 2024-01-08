/*The code is asked to be written in Kotlin language

So I have written my logic in c++ language and then converted it into KOTLIN Language
Commented code down below is in Kotlin Language

*/

#include<bits/stdc++.h>
using namespace std;
 
void Username()
{
    int loop;
    cin>>loop;
    for(int j=0;j<loop;j++)
    {
       string s;
       cin>>s;
       int z=0;
       bool flag=true;
       if(s[s.size()-1]!='0')
       for(int i=0;i<s.size()-1;i++)
       {
           cout<<s[i];
       }
       else
       {
       for(int i=s.size()-1;i>=0;i--)
       {
          if(s[i]=='0' && s[i-1]!='0' && flag)
          {
              z=i;
              flag=false;
          }
       }
       for(int i=0;i<z-1;i++)
       {
           cout<<s[i];
       }
       }
       cout<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Username();
    return 0;
}

// import java.util.Scanner
 
// fun username() {
//     val scanner = Scanner(System.`in`)
//     val loop = scanner.nextInt()
 
//     for (j in 0 until loop) {
//         val s = scanner.next()
//         var z = 0
//         var flag = true
 
//         if (s[s.length - 1] != '0') {
//             for (i in 0 until s.length - 1) {
//                 print(s[i])
//             }
//         } else {
//             for (i in s.length - 1 downTo 0) {
//                 if (s[i] == '0' && i > 0 && s[i - 1] != '0' && flag) {
//                     z = i
//                     flag = false
//                 }
//             }
 
//             for (i in 0 until z - 1) {
//                 print(s[i])
//             }
//         }
 
//         println()
//     }
// }
 
// fun main() {
//     username()
// }