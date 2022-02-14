
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_4)
{
 int *VAR_5 = (int *)VAR_4;
 int VAR_6;

 for (;;) {
  if (*VAR_5 != -1)
   (void) FUNC_0 (*VAR_5);

  *VAR_5 = FUNC_1(VAR_3, VAR_0 | VAR_2 | VAR_1, 0644);
  if (*VAR_5 == -1) {
   FUNC_2("fail to open test file, refreshing it");
   continue;
  }

  VAR_6 = FUNC_3(*VAR_5, "test\n", 5);
  if (VAR_6 != 5)
   FUNC_2("writing file");
 }

 return (((void*)0));
}
