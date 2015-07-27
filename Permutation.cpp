void permut(int &a, int &b) {
int c =a;
a =b;
b= c;
}

int main() {
  int i=5;
  int j=6;
  permu(i,j);
  return 0;
  }
