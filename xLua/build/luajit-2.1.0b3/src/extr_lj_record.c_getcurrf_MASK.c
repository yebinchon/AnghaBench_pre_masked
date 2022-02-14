
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int baseslot; scalar_t__* base; } ;
typedef TYPE_1__ jit_State ;
typedef scalar_t__ TRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static TRef FUNC_2(jit_State *VAR_3)
{
  if (VAR_3->base[-1-VAR_2])
    return VAR_3->base[-1-VAR_2];
  FUNC_0(VAR_3->baseslot == 1+VAR_2);
  return FUNC_1(VAR_3, -1-VAR_2, VAR_1, VAR_0);
}
