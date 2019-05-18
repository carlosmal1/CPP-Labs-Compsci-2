#include <iostream>
#include<string.h>
#include <vector>

using namespace std;

int main (){
int i;
int array[];


cout << "Values Before the sort:";
for(i = 0; i < array.length; i++)

quick_srt(array,0,array.length-1);

cout <<"Values after the sort:";
for(i = 0; i <array.length; i++)

}

static void quick_srt(int array[],int low, int n){

int lo = low;
int hi = n;
if (lo >= n) {
return 0;
}
int mid = array[(lo + hi) / 2];
while (lo < hi) {

while (lo<hi && array[lo] < mid) {
lo++;
}

while (lo<hi && array[hi] > mid) {
hi--;
}
if (lo < hi) {
int T = array[lo];
array[lo] = array[hi];
array[hi] = T;
}
}
if (hi < lo) {
int T = hi;
hi = lo;
lo = T;
}
quick_srt(array, low, lo);
quick_srt(array, lo == low | lo+1 : lo, n);
}
}