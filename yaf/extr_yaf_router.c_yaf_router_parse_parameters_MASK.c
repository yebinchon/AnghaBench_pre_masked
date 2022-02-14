
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ uint ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ,char**) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,scalar_t__,int *) ;

void FUNC_9(char *VAR_1, zval *VAR_2) {
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 zval VAR_7;
 uint VAR_8;

 FUNC_3(VAR_2);

 VAR_5 = FUNC_5(VAR_1);
 VAR_3 = FUNC_6(VAR_5, VAR_0, &VAR_4);
 while (VAR_3) {
  VAR_8 = FUNC_7(VAR_3);
  if (VAR_8) {
   VAR_6 = FUNC_6(((void*)0), VAR_0, &VAR_4);
   if (VAR_6 && FUNC_7(VAR_6)) {
    FUNC_1(&VAR_7, VAR_6);
   } else {
    FUNC_0(&VAR_7);
   }
   FUNC_8(FUNC_2(VAR_2), VAR_3, VAR_8, &VAR_7);
  }

  VAR_3 = FUNC_6(((void*)0), VAR_0, &VAR_4);
 }

 FUNC_4(VAR_5);
}
