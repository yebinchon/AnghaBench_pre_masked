
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zil_create_t ;
typedef int vsecattr_t ;
struct TYPE_3__ {int va_mask; } ;
typedef TYPE_1__ vattr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




int
FUNC_1(zil_create_t VAR_11, vsecattr_t *VAR_12, vattr_t *VAR_13)
{
 int VAR_14 = (VAR_13->va_mask & VAR_0);
 switch (VAR_11) {
 case 129:
  if (VAR_12 == ((void*)0) && !VAR_14)
   return (VAR_1);
  if (VAR_12 && VAR_14)
   return (VAR_3);
  if (VAR_12)
   return (VAR_2);
  else
   return (VAR_4);

 case 130:
  if (VAR_12 == ((void*)0) && !VAR_14)
   return (VAR_6);
  if (VAR_12 && VAR_14)
   return (VAR_8);
  if (VAR_12)
   return (VAR_7);
  else
   return (VAR_9);
 case 128:
  return (VAR_10);
 }
 FUNC_0(0);
 return (VAR_5);
}
