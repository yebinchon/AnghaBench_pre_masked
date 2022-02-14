
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* L; } ;
typedef TYPE_2__ jit_State ;
typedef int int32_t ;
struct TYPE_5__ {int * base; } ;
typedef int TRef ;
typedef scalar_t__ IRType ;
typedef size_t BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static TRef FUNC_2(jit_State *VAR_4, BCReg VAR_5, IRType VAR_6, int VAR_7)
{
  int VAR_8 = (FUNC_1(&VAR_4->L->base[VAR_5]) != (VAR_6==VAR_3)) ? VAR_0 : 0;
  return FUNC_0(VAR_4, (int32_t)VAR_5,
  VAR_6 + (((VAR_7 & VAR_1) ||
        (VAR_8 && VAR_6 == VAR_3 && !(VAR_7 >> 16))) ?
       VAR_2 : 0),
  VAR_7 + VAR_8);
}
