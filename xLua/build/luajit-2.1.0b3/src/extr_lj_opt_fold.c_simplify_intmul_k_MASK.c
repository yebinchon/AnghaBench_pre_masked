
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int jit_State ;
typedef int int32_t ;
struct TYPE_2__ {int op2; int o; } ;
typedef int TRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static TRef FUNC_2(jit_State *VAR_6, int32_t VAR_7)
{




  if (VAR_7 == 0) {
    return VAR_4;
  } else if (VAR_7 == 1) {
    return VAR_1;
  } else if ((VAR_7 & (VAR_7-1)) == 0) {
    VAR_5->o = VAR_0;
    VAR_5->op2 = FUNC_1(VAR_6, FUNC_0((uint32_t)VAR_7));
    return VAR_3;
  }
  return VAR_2;
}
