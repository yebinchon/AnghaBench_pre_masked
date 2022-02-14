
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int32_t ;
typedef int global_State ;
struct TYPE_4__ {int * hotcount; } ;
struct TYPE_3__ {int* param; } ;
typedef int HotCount ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

void FUNC_2(global_State *VAR_3)
{
  int32_t VAR_4 = FUNC_1(VAR_3)->param[VAR_2];
  HotCount VAR_5 = (HotCount)(VAR_4*VAR_0 - 1);
  HotCount *VAR_6 = FUNC_0(VAR_3)->hotcount;
  uint32_t VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
    VAR_6[VAR_7] = VAR_5;
}
