
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * base; scalar_t__ baseslot; TYPE_1__* L; } ;
typedef TYPE_2__ jit_State ;
typedef size_t int32_t ;
struct TYPE_4__ {int * base; } ;
typedef int TRef ;
typedef int IRType ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static TRef FUNC_5(jit_State *VAR_2, int32_t VAR_3)
{
  IRType VAR_4 = FUNC_4(&VAR_2->L->base[VAR_3]);
  TRef VAR_5 = FUNC_2(FUNC_0(VAR_1, VAR_4), (int32_t)VAR_2->baseslot+VAR_3,
   VAR_0);
  if (FUNC_3(VAR_4)) VAR_5 = FUNC_1(VAR_4);
  VAR_2->base[VAR_3] = VAR_5;
  return VAR_5;
}
