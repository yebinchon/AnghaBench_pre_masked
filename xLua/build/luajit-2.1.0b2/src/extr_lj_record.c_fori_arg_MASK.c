
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* base; } ;
typedef TYPE_1__ jit_State ;
typedef scalar_t__ TRef ;
typedef int IRType ;
typedef size_t BCReg ;
typedef int BCIns ;


 scalar_t__ FUNC_0 (TYPE_1__*,int const*,size_t,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t,int ,int) ;

__attribute__((used)) static TRef FUNC_2(jit_State *VAR_0, const BCIns *VAR_1, BCReg VAR_2,
       IRType VAR_3, int VAR_4)
{
  TRef VAR_5 = VAR_0->base[VAR_2];
  if (!VAR_5) {
    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (!VAR_5)
      VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
  }
  return VAR_5;
}
