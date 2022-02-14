
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * base; scalar_t__ baseslot; } ;
typedef TYPE_1__ jit_State ;
typedef size_t int32_t ;
typedef int TRef ;
typedef int IRType ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,size_t,int) ;

__attribute__((used)) static TRef FUNC_2(jit_State *VAR_1, int32_t VAR_2, IRType VAR_3, int VAR_4)
{

  TRef VAR_5 = FUNC_1(FUNC_0(VAR_0, VAR_3), (int32_t)VAR_1->baseslot+VAR_2, VAR_4);
  VAR_1->base[VAR_2] = VAR_5;
  return VAR_5;
}
