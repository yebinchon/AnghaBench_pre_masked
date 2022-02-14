
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (char*) ;

int
FUNC_7(int VAR_5, char *VAR_6[])
{
 int VAR_7 = 0;
 int VAR_8 = -1;

 FUNC_5(VAR_5, VAR_6);

 VAR_8 = FUNC_4(VAR_4, VAR_1|VAR_0|VAR_2, 0666);
 if (VAR_8 < 0) {
  FUNC_6("open");
  FUNC_3(3);
 }

 for (VAR_7 = 0; VAR_3 == 0 || VAR_7 < VAR_3; VAR_7++) {
  (void) FUNC_2(VAR_8);
  (void) FUNC_1(VAR_8);
 }

 (void) FUNC_0(VAR_8);
 return (0);
}
