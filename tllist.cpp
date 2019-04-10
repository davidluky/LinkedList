#include <sstream>
#include <iostream>
using namespace std;

#include "LList.h"
using namespace egre246;

string nts(int n) {
  string s="";
  if(n<10) s+=" ";
  return s+=(std::to_string(n)+": ");
}

string tabs(int x) {
  string s="";
  for(int i=1; i<=x; i++) s += "\t";
  return s;
}

string report(int count,int num) {
  return ("<== #" + to_string(count) +
    " incorrect (error #" + to_string(num) + ")");
}

void pause() {
  cin.clear();
  cout << endl << "<press any key to continue>";
  cin.ignore();
}

////////////////////////////////////////
int main(void) {
  
  LList l1;

  int count=0,wrong=0,t;
  bool b;
  string s;
  cout << "Shows expected values as '<-- (expected)'." << endl;
  cout << "Incorrect answers are marked." << endl;
  
  count++;
  cout << nts(count);
#ifndef TEST1
  s=l1.toString();
  cout << (t=s.length());
  cout << " <-- 0";
  if (t!=0) cout << tabs(2) << report(count,++wrong);
#else
  cout << " <-- 0";
  cout << tabs(2) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;
  
  count++;
  cout << nts(count);
#ifndef TEST2
  cout << (t=l1.getSize());
  cout << " <-- 0";
  if (t!=0) cout << tabs(2) << report(count,++wrong);
#else
  cout << " <-- 0";
  cout << tabs(2) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST3
  cout << ((b=l1.isEmpty())?"true":"false");
  cout << " <-- true";
  if (!b) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- true";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  std::stringstream buff;
  
  count++;
  cout << nts(count);
#ifndef TEST4
  buff << l1;
  s = buff.str();
  cout << l1;
  cout << " <-- []";
  if (s!="[]") cout <<  tabs(2) << report(count,++wrong);
#else
  cout << " <-- []";
  cout <<  tabs(2) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
  l1.add(10); l1.add(20); l1.add(30);
#ifndef TEST5
  buff.str("");
  buff << l1;
  s = buff.str();
  cout << l1;
  cout << " <-- [10,20,30]";
  if (s!="[10,20,30]") cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- [10,20,30]";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST6
  cout << (s=l1.toString());
  cout << " <-- 10,20,30";
  if (s!="10,20,30") cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10,20,30";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  LList l4;
  count++;
  cout << nts(count);
#ifndef TEST7
  cout << (t=l4.toString().length());
  cout << " <-- 0";
  if (t!=0) cout << tabs(3) << report(count,++wrong);
#else
  cout << " <-- 0";
  cout << tabs(3) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;
  
  count++;
  cout << nts(count);
#ifndef TEST8
  cout << (t=l1.getSize());
  cout << " <-- 3";
  if (t!=3) cout << tabs(2) << report(count,++wrong);
#else
  cout << " <-- 3";
  cout << tabs(2) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST9
  cout << ((b=l1.isEmpty())?"true":"false");
  cout << " <-- false";
  if (b) cout << tabs(2) << report(count,++wrong);
#else
  cout << " <-- false";
  cout << tabs(2) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST10
  cout << (t=l1.find(20));
  cout << " <-- 1";
  if (t!=1) cout << tabs(2) << report(count,++wrong);
#else
  cout << " <-- 1";
  cout << tabs(2) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST11
  cout << (t=l1.find(9999));
  cout << " <-- -1";
  if (t!=-1) cout << tabs(2) << report(count,++wrong);
#else
  cout << " <-- -1";
  cout << tabs(2) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST12
  l1.remove(0);
  buff.str("");
  buff << l1;
  s = buff.str();
  cout << l1;
  cout << " <-- [20,30]";
  if (s!="[20,30]") cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- [20,30]";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST13
  l1.remove(1);
  buff.str("");
  buff << l1;
  s = buff.str();
  cout << l1;
  cout << " <-- [20]";
  if (s!="[20]") cout << tabs(2) << report(count,++wrong);
#else
  cout << " <-- [20]";
  cout << tabs(2) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST14
  l1.remove(0);
  buff.str("");
  buff << l1;
  s = buff.str();
  cout << l1;
  cout << " <-- []";
  if (s!="[]") cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- []";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  LList l2;
  count++;
  cout << nts(count);
  for (int i=1; i <= 10000; i++) l2.add(i);
#ifndef TEST15
  l2.remove(-8888);
  cout << (t=l2.getSize());
  cout << " <-- 10000";
  if (t!=10000) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10000";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST16
  cout << (t=l2.get(9999));
  cout << " <-- 10000";
  if (t!=10000) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10000";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST17
  cout << (t=l2[9999]);
  cout << " <-- 10000";
  if (t!=10000) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10000";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST18
  l2[500] = 10000;
  cout << (t=l2[500]);
  cout << " <-- 10000";
  if (t!=10000) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10000";
  if (t!=10000) cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  LList l3(l2);
  count++;
  cout << nts(count);
#ifndef TEST19
  cout << (t=l3[500]);
  cout << " <-- 10000";
  if (t!=10000) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10000";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  LList l2a;
  count++;
  cout << nts(count);
#ifndef TEST20
  l2a = l2;
  cout << (t=l2a[500]);
  cout << " <-- 10000";
  if (t!=10000) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10000";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST21
  l2[500] = 0;
  cout << (t=l3[500]);
  cout << " <-- 10000";
  if (t!=10000) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10000";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST22
  cout << (s=egre246::toString(10000));
  cout << " <-- 10000";
  if (s!="10000") cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- 10000";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;
  
  count++;
  cout << nts(count);
#ifndef TEST23
  l1.clear(); l2.clear();
  cout << ((b=(l2==l1))?"true":"false");
  cout << " <-- true";
  if (!b) cout << tabs(1) << report(count,++wrong);
#else
  cout << " <-- true";
  cout << tabs(1) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST24
  l1.add(10); l2.add(20);
  cout << ((b=(l2==l1))?"true":"false");
  cout << " <-- false";
  if (b) cout << tabs(3) << report(count,++wrong);
#else
  cout << " <-- false";
  cout << tabs(3) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  count++;
  cout << nts(count);
#ifndef TEST25
  l2.clear();
  l2.add(10); l2.add(10);
  cout << ((b=(l2==l1))?"true":"false");
  cout << " <-- false";
  if (b) cout << tabs(3) << report(count,++wrong);
#else
  cout << " <-- false";
  cout << tabs(3) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

  LList l5, l6;
  count++;
  cout << nts(count);
#ifndef TEST26
  l5.add(20); l6.add(10);
  l5.add(10); l6.add(20);
  cout << ((b=(l5==l6))?"true":"false");
  cout << " <-- false";
  if (b) cout << tabs(3) << report(count,++wrong);
#else
  cout << " <-- false";
  cout << tabs(3) << report(count,++wrong);
  cout << " (test blew up! Was removed from compilation)";
#endif
  cout << endl;

#ifndef NO_XCREDIT
  pause();
  cout << endl << "======= extra credit tests =======" << endl;

  LList l7,l8;
  count++;
  cout << nts(count);
  l7.insertAfter(2);
  cout << (t=l7.get(0));
  cout << " <-- 2";
  if (t!=2) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  cout << (t=l7.get());
  cout << " <-- 2";
  if (t!=2) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.insertBefore(2);
  cout << (t=l8.get(0));
  cout << " <-- 2";
  if (t!=2) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8[0] = 1000;
  cout << (t=l8.get());
  cout << " <-- 1000";
  if (t!=1000) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.add(2000);
  cout << ((b=l8.isOnList())?"true":"false");
  cout << " <-- false";
  if (b) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.begin();
  cout << (t=l8.get());
  cout << " <-- 1000";
  if (t!=1000) cout << tabs(2) << report(count,++wrong);
  cout << endl;
  
  count++;
  cout << nts(count);
  l8.advance();
  cout << (t=l8.get());
  cout << " <-- 2000";
  if (t!=2000) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.insertAfter(3000);
  l8.advance();
  cout << (t=l8.get());
  cout << " <-- 3000";
  if (t!=3000) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.begin();
  l8.insertBefore(-1000);
  cout << (t=l8.get(0));
  cout << " <-- -1000";
  if (t!=-1000) cout << tabs(1) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.remove(0);
  cout << ((b=l8.isOnList())?"true":"false");
  cout << " <-- false";
  if (b) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  cout << (t=l8.getSize());
  cout << " <-- 3";
  if (t!=3) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  for(l8.begin();l8.isOnList(); l8.advance()) ;
  l8.insertAfter(10000);
  cout << (t=l8.getSize());
  cout << " <-- 3";
  if (t!=3) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.insertBefore(10000);
  cout << (t=l8.getSize());
  cout << " <-- 3";
  if (t!=3) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.begin();
  while(l8.isOnList()) l8.remove();
  cout << (t=l8.getSize());
  cout << " <-- 0";
  if (t!=0) cout << tabs(2) << report(count,++wrong);
  cout << endl;
  
  count++;
  cout << nts(count);
  cout << (t=l8.toString().length());
  cout << " <-- 0";
  if (t!=0) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  for (int i=1; i<=100; i++) l8.insertBefore(i);

  count++;
  cout << nts(count);
  l8.begin();
  cout << (t=l8.getSize());
  cout << " <-- 100";
  if (t!=100) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  count++;
  cout << nts(count);
  l8.begin();
  cout << (t=l8.get());
  cout << " <-- 100";
  if (t!=100) cout << tabs(2) << report(count,++wrong);
  cout << endl;

  l8.begin();
  for (int i=1; i<=500; i++) l8.remove();

  count++;
  cout << nts(count);
  cout << (t=l8.getSize());
  cout << " <-- 0";
  if (t!=0) cout << tabs(2) << report(count,++wrong);
  cout << endl; 
#endif    

}
