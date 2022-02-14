
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;

void
FUNC_3(const char *VAR_1)
{
 if (VAR_0 == 0) {
  VAR_0 = 1;
  FUNC_2(VAR_1);
  FUNC_1("log opened");
 } else {
  FUNC_1("log closed");
  VAR_0 = 0;
  FUNC_0();
 }
}
