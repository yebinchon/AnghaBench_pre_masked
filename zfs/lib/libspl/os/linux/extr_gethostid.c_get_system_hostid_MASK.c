
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,unsigned long*,int) ;

unsigned long
FUNC_4(void)
{
 unsigned long VAR_2 = FUNC_1();
 if (VAR_2 == 0) {
  int VAR_3, VAR_4;
  unsigned long VAR_5;
  int VAR_6 = 4;

  VAR_3 = FUNC_2("/etc/hostid", VAR_1);
  if (VAR_3 >= 0) {
   VAR_4 = FUNC_3(VAR_3, &VAR_5, VAR_6);
   if (VAR_4 > 0)
    VAR_2 = (VAR_5 & VAR_0);
   FUNC_0(VAR_3);
  }
 }
 return (VAR_2);
}
