// problem-statement:https://www.codechef.com/DSAMONDAY007/problems/WINGAME

bool canWin(int a, int b, int w) {
  if ((a + b) >= w) {
    return true;
  } else {
    return false;
  }
}
