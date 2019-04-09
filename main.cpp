#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

void selectionSort(vector<int> &v);
void insertionSort(vector<int> &v);
void bubbleSort(vector<int> &v);
void shellSortGap3N(vector<int> &v);
void shellSortGapHalf(vector<int> &v);

int main (){
  srand(time(NULL));  // Intialize srand seed
  vector<int> origV;
  for(int i=0; i<10000; i++){
    origV.push_back(rand() % 10000);
  }

  vector<int> v1, v2, v3, v4, v5;
  vector<double> t1, t2, t3, t4, t5;

  for(int i=0; i<10000; i++){
    for(int j=0; j<=i; j++){
      v1.push_back(origV[j]);
      v2.push_back(origV[j]);
      v3.push_back(origV[j]);
      v4.push_back(origV[j]);
      v5.push_back(origV[j]);
    }

    clock_t t = clock();
    selectionSort(v1);
    t = clock() - t;
    t1.push_back((double)t/CLOCKS_PER_SEC);

    t = clock();
    insertionSort(v2);
    t = clock() - t;
    t2.push_back((double)t/CLOCKS_PER_SEC);

    t = clock();
    bubbleSort(v3);
    t = clock() - t;
    t3.push_back((double)t/CLOCKS_PER_SEC);

    t = clock();
    shellSortGap3N(v4);
    t = clock() - t;
    t4.push_back((double)t/CLOCKS_PER_SEC);

    t = clock();
    shellSortGapHalf(v5);
    t = clock() - t;
    t5.push_back((double)t/CLOCKS_PER_SEC);

    v1.clear();
    v2.clear();
    v3.clear();
    v4.clear();
    v5.clear();
  }

	ofstream o1("selectionSort");
	for(auto it: t1){
		o1 << it << " ";
	}

	ofstream o2("insertionSort");
	for(auto it: t2){
		o2 << it << " ";
	}

	ofstream o3("bubbleSort");
	for(auto it: t3){
		o3 << it << " ";
	}

	ofstream o4("shellSortGap3N");
	for(auto it: t4){
		o4 << it << " ";
	}

	ofstream o5("shellSortGapHalf");
	for(auto it: t5){
		o5 << it << " ";
	}

  return 0;
}

void selectionSort(vector<int> &v){
  int index_min;
  int aux;

  for(int i = 0; i < v.size(); i++){
    index_min = i;
    for(int j = i + 1; j < v.size(); j++){
      if(v[j] < v[index_min]){
        index_min = j;
      }
    }
    if(index_min != i){
      aux = v[index_min];
      v[index_min] = v[i];
      v[i] = aux;
    }
  }
}

void insertionSort(vector<int> &v){
  int i, j, aux;
  for(i=1; i<v.size(); i++){
    j=i;
    while((j != 0) && (v[j] < v[j-1])){
      aux = v[j];
      v[j] = v[j-1];
      v[j-1] = aux;
      j--;
    }
  }
}

void bubbleSort(vector<int> &v){
   int i, j;
   for (i = 0; i < v.size()-1; i++)
       for (j = 0; j < v.size()-i-1; j++)
           if (v[j] > v[j+1])
              swap(v[j], v[j+1]);
}

void shellSortGap3N(vector<int> &v){
    int gap = 1;
    int i, j;
    while (gap < v.size()) {
        gap = gap*3+1;
    }
    while (gap > 1) {
        gap /= 3;
        for (i = gap; i < v.size(); i++) {
            int aux = v[i];
            j = i;
            while (j >= gap && aux < v[j-gap]) {
                v[j] = v[j-gap];
                j -= gap;
            }
            v[j] = aux;
        }
    }
}

void shellSortGapHalf(vector<int> &v){
  int n = v.size();
  int h = n/2;
  int c,j;
  while(h > 0){
    for(int i = h; i < n; i++){
      c = v[i];
      j = i;
      while(j >= h && v[j-h] > c){
        v[j] = v[j-h];
        j = j - h;
      }
      v[j] = c;
    }
    h = h/2;
  }
}
