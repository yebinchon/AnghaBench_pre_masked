
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int
FUNC_6(int VAR_5, char *VAR_6[])
{
 int VAR_7;

 FUNC_3(VAR_5, VAR_6);

 if (VAR_4) {
  VAR_7 = FUNC_2(VAR_2, VAR_1|VAR_0, 0666);
  if (VAR_7 < 0) {
   FUNC_4("open");
   return (1);
  }
  if (FUNC_1(VAR_7, VAR_3) < 0) {
   FUNC_4("ftruncate");
   return (1);
  }
  if (FUNC_0(VAR_7)) {
   FUNC_4("close");
   return (1);
  }
 } else {
  if (FUNC_5(VAR_2, VAR_3) < 0) {
   FUNC_4("truncate");
   return (1);
  }
 }
 return (0);
}
