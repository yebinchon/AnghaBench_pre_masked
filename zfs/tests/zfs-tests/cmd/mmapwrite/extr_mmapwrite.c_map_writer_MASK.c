
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_8 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (int *,int,int,int ,int,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int,int) ;

__attribute__((used)) static void *
FUNC_9(void *VAR_9)
{
 int VAR_10 = -1;
 int VAR_11 = 0;
 char *VAR_12 = ((void*)0);
 int VAR_13 = FUNC_4();
 int VAR_14 = 0;
 char *VAR_15 = VAR_9;

 while (1) {
  VAR_11 = FUNC_0(VAR_15, VAR_1);
  if (VAR_11) {
   VAR_14 = VAR_8;
   if (VAR_14 == VAR_0) {
    VAR_10 = FUNC_8(VAR_15, VAR_5 | VAR_4, 0777);
    if (VAR_10 == -1) {
     FUNC_2(1, "open file failed");
    }

    VAR_11 = FUNC_3(VAR_10, VAR_13);
    if (VAR_11 == -1) {
     FUNC_2(1, "truncate file failed");
    }
   } else {
    FUNC_2(1, "access file failed!");
   }
  } else {
   VAR_10 = FUNC_8(VAR_15, VAR_5, 0777);
   if (VAR_10 == -1) {
    FUNC_2(1, "open file failed");
   }
  }

  if ((VAR_12 = FUNC_6(((void*)0), VAR_13, VAR_6 | VAR_7,
      VAR_3, VAR_10, 0)) == VAR_2) {
   FUNC_2(1, "map file failed");
  }

  if (VAR_10 != -1)
   FUNC_1(VAR_10);

  char VAR_16[10] = {0, };
  FUNC_5(VAR_12, VAR_16, 10);
  VAR_11 = FUNC_7(VAR_12, VAR_13);
  if (VAR_11 != 0) {
   FUNC_2(1, "unmap file failed");
  }
 }
}
