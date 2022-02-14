
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_5, int VAR_6)
{
 int VAR_7;

 switch (FUNC_5()) {
 case -1:
  return (-1);
 case 0:
  break;
 default:
  FUNC_0(0);
 }

 if (FUNC_7() == -1)
  return (-1);

 if (!VAR_5)
  (void)FUNC_1("/");

 if (!VAR_6 && (VAR_7 = FUNC_6(VAR_4, VAR_0, 0)) != -1) {
  (void)FUNC_4(VAR_7, VAR_2);
  (void)FUNC_4(VAR_7, VAR_3);
  (void)FUNC_4(VAR_7, VAR_1);
  if (VAR_7 > 2)
   (void)FUNC_2 (VAR_7);
 }




 return (0);
}
