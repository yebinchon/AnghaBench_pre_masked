
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_1)
{
 int VAR_2, VAR_3 = 0, VAR_4 = *(int *)VAR_1;
 char VAR_5[8192] = {0};
 (void) FUNC_0(VAR_5, VAR_4, sizeof (VAR_5));

 for (VAR_3 = 0; VAR_3 < 80; VAR_3++) {
  VAR_2 = FUNC_2(VAR_0, VAR_5, sizeof (VAR_5));
  if (VAR_2 != sizeof (VAR_5))
   FUNC_1("write");
 }
 return (((void*)0));
}
