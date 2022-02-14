
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ mcode; } ;
struct TYPE_5__ {TYPE_1__ cb; } ;
typedef scalar_t__ MSize ;
typedef TYPE_2__ CTState ;


 uintptr_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

MSize FUNC_2(CTState *VAR_1, void *VAR_2)
{
  uintptr_t VAR_3 = (uintptr_t)((uint8_t *)VAR_2 -(uint8_t *)VAR_1->cb.mcode);
  if (VAR_3 < VAR_0) {
    MSize VAR_4 = FUNC_0((MSize)VAR_3);
    if (FUNC_1(VAR_4) == (MSize)VAR_3)
      return VAR_4;
  }
  return ~0u;
}
