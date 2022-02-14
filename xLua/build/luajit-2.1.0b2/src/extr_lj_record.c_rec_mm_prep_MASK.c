
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t maxslot; int* base; int framedepth; int L; } ;
typedef TYPE_1__ jit_State ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {size_t framesize; } ;
typedef int TRef ;
typedef size_t BCReg ;
typedef scalar_t__ ASMFunction ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,void*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static BCReg FUNC_2(jit_State *VAR_3, ASMFunction VAR_4)
{
  BCReg VAR_5, VAR_6 = VAR_4 == VAR_1 ? VAR_3->maxslot : FUNC_0(VAR_3->L)->framesize;



  TRef VAR_7 = FUNC_1(VAR_3, (void *)VAR_4);

  VAR_3->base[VAR_6] = VAR_7 | VAR_0;
  VAR_3->framedepth++;
  for (VAR_5 = VAR_3->maxslot; VAR_5 < VAR_6; VAR_5++)
    VAR_3->base[VAR_5] = 0;
  return VAR_6+1;
}
