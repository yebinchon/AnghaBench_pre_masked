
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int ) ;
 char* FUNC_5 (char*,char*) ;
 char** VAR_2 ;

__attribute__((used)) static int
FUNC_6(char *VAR_3, int *VAR_4)
{
 int VAR_5 = 0, VAR_6 = VAR_1;
 char *VAR_7, *VAR_8, *VAR_9;

 VAR_8 = FUNC_1("ZPOOL_IMPORT_PATH");
 if (VAR_8) {
  VAR_9 = FUNC_2(VAR_8);
  VAR_7 = FUNC_5(VAR_9, ":");
  while (VAR_7) {
   if (FUNC_4(VAR_3, VAR_7, FUNC_3(VAR_7)) == 0) {
    *VAR_4 = VAR_5;
    VAR_6 = 0;
    break;
   }
   VAR_7 = FUNC_5(((void*)0), ":");
   VAR_5++;
  }
  FUNC_0(VAR_9);
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (FUNC_4(VAR_3, VAR_2[VAR_5],
       FUNC_3(VAR_2[VAR_5])) == 0) {
    *VAR_4 = VAR_5;
    VAR_6 = 0;
    break;
   }
  }
 }

 return (VAR_6);
}
