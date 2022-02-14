
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_3)
{
 char VAR_4[256];
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_4(VAR_2) + 5;

 for (;;) {
  VAR_5 = FUNC_1();
  (void) FUNC_3(VAR_4, VAR_6, "%s.%03d", VAR_2, VAR_5);
  VAR_7 = FUNC_2(VAR_2, VAR_4);
  if (VAR_7 < 0 && VAR_1 != VAR_0)
   (void) FUNC_0("renaming file");
 }

 return (((void*)0));
}
