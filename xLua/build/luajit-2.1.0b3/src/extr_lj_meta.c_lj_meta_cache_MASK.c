
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cTValue ;
struct TYPE_4__ {int nomm; } ;
typedef unsigned int MMS ;
typedef TYPE_1__ GCtab ;
typedef int GCstr ;


 unsigned int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;

cTValue *FUNC_3(GCtab *VAR_1, MMS VAR_2, GCstr *VAR_3)
{
  cTValue *VAR_4 = FUNC_0(VAR_1, VAR_3);
  FUNC_1(VAR_2 <= VAR_0);
  if (!VAR_4 || FUNC_2(VAR_4)) {
    VAR_1->nomm |= (uint8_t)(1u<<VAR_2);
    return ((void*)0);
  }
  return VAR_4;
}
