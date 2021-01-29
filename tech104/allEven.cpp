#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int num = 1;
  for (int i = 0; i < 100; i++) {
    if (num % 2 == 0) {
      cout << setw(6) << num << endl;

    } else {
      cout << setfill('-') << setw(6);
    }
    num++;
  }
}

// #include <iomanip>
// #include <iostream>
// using namespace std;

// int main() {
//   int num = 2;
//   int count = 1;
//   while (num <= 100) {
//     if (count % 5 == 0) {
//       cout << setw(6) << num << endl;

//     } else {
//       cout << setfill('-') << setw(6) << num;
//     }
//     num += 2;
//     count += 1;
//   }
// }

// -----2-----4-----6-----8----10
// ----12----14----16----18----20
// ----22----24----26----28----30
// ----32----34----36----38----40
// ----42----44----46----48----50
// ----52----54----56----58----60
// ----62----64----66----68----70
// ----72----74----76----78----80
// ----82----84----86----88----90
// ----92----94----96----98---100