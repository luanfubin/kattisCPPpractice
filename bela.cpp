#include <iostream>
#include <map>
using namespace std;

int main() {
  map<char, int> card_dom;
  card_dom.insert(pair<char,int>('A',11));
  card_dom.insert(pair<char,int>('K',4));
  card_dom.insert(pair<char,int>('Q',3));
  card_dom.insert(pair<char,int>('J',20));
  card_dom.insert(pair<char,int>('T',10));
  card_dom.insert(pair<char,int>('9',14));
  card_dom.insert(pair<char,int>('8',0));
  card_dom.insert(pair<char,int>('7',0));

  map<char, int> card_Ndom;
  card_Ndom.insert(pair<char,int>('A',11));
  card_Ndom.insert(pair<char,int>('K',4));
  card_Ndom.insert(pair<char,int>('Q',3));
  card_Ndom.insert(pair<char,int>('J',2));
  card_Ndom.insert(pair<char,int>('T',10));
  card_Ndom.insert(pair<char,int>('9',0));
  card_Ndom.insert(pair<char,int>('8',0));
  card_Ndom.insert(pair<char,int>('7',0));
    
  char dom, key, kdom;
  int number, count;
  std::map<char,int>::iterator cur;
  
  count = 0;
  cin >> number;
  cin >> dom;
  number *= 4;

  while(number > 0){
    cin>> key;
    cin>> kdom;
    if(kdom == dom){
      cur = card_dom.find(key);
      count+= (*cur).second;
    }else{
      cur = card_Ndom.find(key);
      count+= (*cur).second;
    }
    number --;
  }
  cout << count;
}