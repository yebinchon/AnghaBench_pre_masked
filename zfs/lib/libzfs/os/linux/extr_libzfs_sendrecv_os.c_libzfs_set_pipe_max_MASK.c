
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 long FUNC_1 (int,int ,...) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int *,char*,unsigned long*) ;

void
FUNC_4(int VAR_2)
{
 FILE *VAR_3 = FUNC_2("/proc/sys/fs/pipe-max-size", "r");

 if (VAR_3 != ((void*)0)) {
  unsigned long VAR_4;
  long VAR_5;
  if (FUNC_3(VAR_3, "%lu", &VAR_4) > 0) {
   VAR_5 = FUNC_1(VAR_2, VAR_0);
   if (VAR_5 > 0 &&
       VAR_4 > (unsigned long) VAR_5)
    FUNC_1(VAR_2, VAR_1,
        VAR_4);
  }
  FUNC_0(VAR_3);
 }
}
