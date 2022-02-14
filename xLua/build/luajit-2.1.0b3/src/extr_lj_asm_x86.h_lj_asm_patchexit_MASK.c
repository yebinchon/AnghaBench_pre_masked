
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int jit_State ;
typedef int int32_t ;
struct TYPE_7__ {int vmstate; } ;
struct TYPE_6__ {int vmstate; } ;
struct TYPE_5__ {int* mcode; int szmcode; } ;
typedef int MSize ;
typedef int MCode ;
typedef TYPE_1__ GCtrace ;
typedef int ExitNo ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*) ;
 int VAR_4 ;
 int* FUNC_3 (int *,int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 (int*,int*) ;
 int* FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *) ;

void FUNC_9(jit_State *VAR_6, GCtrace *VAR_7, ExitNo VAR_8, MCode *VAR_9)
{
  MCode *VAR_10 = VAR_7->mcode;
  MCode *VAR_11 = FUNC_5(VAR_6, VAR_10, 0);
  MSize VAR_12 = VAR_7->szmcode;
  MCode *VAR_13 = FUNC_3(VAR_6, VAR_8) - 6;
  MCode *VAR_14 = VAR_10+VAR_12-6;



  uint32_t VAR_15 = FUNC_8(&FUNC_1(VAR_6)->vmstate);

  if (VAR_12 > 5 && VAR_10[VAR_12-5] == VAR_2 && VAR_10+VAR_12-6 + *(int32_t *)(VAR_10+VAR_12-4) == VAR_13)
    *(int32_t *)(VAR_10+VAR_12-4) = FUNC_4(VAR_10+VAR_12, VAR_9);

  for (; VAR_10 < VAR_14; VAR_10 += FUNC_2(VAR_10)) {
    intptr_t VAR_16 = VAR_1 ? (VAR_10[0] & 0xf0) == 0x40 : VAR_0;
    if (*(uint32_t *)(VAR_10+2+VAR_16) == VAR_15 && VAR_10[VAR_16+VAR_1-VAR_0] == VAR_3)
      break;
  }
  FUNC_7(VAR_10 < VAR_14);
  for (; VAR_10 < VAR_14; VAR_10 += FUNC_2(VAR_10))
    if ((*(uint16_t *)VAR_10 & 0xf0ff) == 0x800f && VAR_10 + *(int32_t *)(VAR_10+2) == VAR_13)
      *(int32_t *)(VAR_10+2) = FUNC_4(VAR_10+6, VAR_9);
  FUNC_6(VAR_7->mcode, VAR_7->mcode + VAR_7->szmcode);
  FUNC_5(VAR_6, VAR_11, 1);
}
