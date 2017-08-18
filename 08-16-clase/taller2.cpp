#include <iostream>
void foo(void);//file foo.h
void bar(void);//file bar.h

void foo(void)
{
  std::cout <<"inside foo\n";
}

void bar(void)
{
  std::cout <<"inside bar\n";
}


int main(void)
{
  foo();
  bar();

  return 0;
}
