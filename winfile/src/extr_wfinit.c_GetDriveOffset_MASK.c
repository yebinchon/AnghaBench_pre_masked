
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bRemembered; } ;
typedef int INT ;
typedef size_t DRIVE ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

INT
FUNC_4(register DRIVE VAR_2)
{
   if (FUNC_2(VAR_2)) {

      if (VAR_0[VAR_2].bRemembered)
         return VAR_1 * 5;
      else
         return VAR_1 * 4;
   }


   if (FUNC_3(VAR_2))
      return VAR_1 * 1;

   if (FUNC_1(VAR_2))
      return VAR_1 * 3;

   if (FUNC_0(VAR_2))
      return VAR_1 * 0;

   return VAR_1 * 2;
}
