
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

bool
FUNC_2(void)
{

 if (VAR_2)
  return 0;

 if (128 == VAR_1 || 129 == VAR_1)
 {

  FUNC_1();
 }

 switch (VAR_1)
 {
  case 131:
   return 1;
  case 130:
  case 128:
  case 129:






   return 0;
  default:
   FUNC_0(VAR_0, "unknown state: %d", VAR_1);
   return 0;
 }
}
