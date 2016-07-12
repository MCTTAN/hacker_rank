#include <iostream>
#include <string>
using namespace std;
int replace(string gene_code, int gene_length){
  int length_of_substring = 0;
  int A = 0, C = 0, G = 0, T = 0;
  for(int i = 0; i < gene_code.length(); ++i){
    if(gene_code.at(i) == 'A')
      ++A;
    else if(gene_code.at(i) == 'C')
      ++C;
    else if(gene_code.at(i) == 'G')
      ++G;
    else if(gene_code.at(i) == 'T')
      ++T;
  }
  int letter_count = gene_length / 4;
  if(A != letter_count || C != letter_count || G != letter_count || T != letter_count){
    length_of_substring = gene_length + 1;
    for(int r = 0, l = 0; r < gene_length; ++r){
      if(gene_code.at(r) == 'A')
        --A;
      else if(gene_code.at(r) == 'C')
        --C;
      else if(gene_code.at(r) == 'G')
        --G;
      else if(gene_code.at(r) == 'T')
        --T;
      while(A <= letter_count && C <= letter_count && G <= letter_count && T <= letter_count && l <= r){
        length_of_substring = min(length_of_substring, r - l + 1);
        if(gene_code.at(l) == 'A')
          ++A;
        else if(gene_code.at(l) == 'C')
          ++C;
        else if(gene_code.at(l) == 'G')
          ++G;
        else if(gene_code.at(l) == 'T')
          ++T;
        ++l;
      }
    }
  }
  return length_of_substring;
}
int main(){
  string gene_code;
  int gene_length;
  cin >> gene_length >> gene_code;
  cout << replace(gene_code, gene_length) << endl;
  return 0;
}
