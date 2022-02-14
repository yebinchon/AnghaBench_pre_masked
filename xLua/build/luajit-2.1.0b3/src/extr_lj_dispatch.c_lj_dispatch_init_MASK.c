
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {void* bc_cfunc_int; void* bc_cfunc_ext; } ;
struct TYPE_5__ {int got; void** bcff; TYPE_1__ g; int * dispatch; } ;
typedef TYPE_2__ GG_State ;
typedef int ASMFunction ;


 void* FUNC_0 (scalar_t__,int ,int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(GG_State *VAR_19)
{
  uint32_t VAR_20;
  ASMFunction *VAR_21 = VAR_19->dispatch;
  for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++)
    VAR_21[VAR_12+VAR_20] = VAR_21[VAR_20] = FUNC_1(VAR_18[VAR_20]);
  for (VAR_20 = VAR_13; VAR_20 < VAR_12; VAR_20++)
    VAR_21[VAR_20] = FUNC_1(VAR_18[VAR_20]);

  VAR_21[VAR_0] = VAR_21[VAR_4];
  VAR_21[VAR_9] = VAR_21[VAR_7];
  VAR_21[VAR_10] = VAR_21[VAR_8];
  VAR_21[VAR_2] = VAR_21[VAR_5];
  VAR_21[VAR_3] = VAR_21[VAR_6];
  VAR_19->g.bc_cfunc_ext = VAR_19->g.bc_cfunc_int = FUNC_0(VAR_1, VAR_16, 0);
  for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++)
    VAR_19->bcff[VAR_20] = FUNC_0(VAR_11+VAR_20, 0, 0);



}
