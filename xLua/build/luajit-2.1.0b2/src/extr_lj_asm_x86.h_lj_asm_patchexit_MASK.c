
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int jit_State ;
typedef int int32_t ;
struct TYPE_5__ {int vmstate; } ;
struct TYPE_4__ {int szmcode; scalar_t__* mcode; } ;
typedef int MSize ;
typedef scalar_t__ MCode ;
typedef TYPE_1__ GCtrace ;
typedef int ExitNo ;


 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_3 (int *,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(jit_State *VAR_3, GCtrace *VAR_4, ExitNo VAR_5, MCode *VAR_6)
{
  MCode *VAR_7 = VAR_4->mcode;
  MCode *VAR_8 = FUNC_3(VAR_3, VAR_7, 0);
  MSize VAR_9 = VAR_4->szmcode;
  MCode *VAR_10 = FUNC_1(VAR_3, VAR_5) - 6;
  MCode *VAR_11 = VAR_7+VAR_9-6;
  uint32_t VAR_12 = FUNC_6(&FUNC_0(VAR_3)->vmstate);
  if (VAR_9 > 5 && VAR_7[VAR_9-5] == VAR_1 && VAR_7+VAR_9-6 + *(int32_t *)(VAR_7+VAR_9-4) == VAR_10)
    *(int32_t *)(VAR_7+VAR_9-4) = FUNC_2(VAR_7+VAR_9, VAR_6);

  for (; VAR_7 < VAR_11; VAR_7++)
    if (*(uint32_t *)(VAR_7+(VAR_0 ? 3 : 2)) == VAR_12 && VAR_7[0] == VAR_2) {
      VAR_7 += VAR_0 ? 11 : 10;
      break;
    }
  FUNC_5(VAR_7 < VAR_11);
  for (; VAR_7 < VAR_11; VAR_7++) {
    if ((*(uint16_t *)VAR_7 & 0xf0ff) == 0x800f && VAR_7 + *(int32_t *)(VAR_7+2) == VAR_10) {
      *(int32_t *)(VAR_7+2) = FUNC_2(VAR_7+6, VAR_6);
      VAR_7 += 5;
    }
  }
  FUNC_4(VAR_4->mcode, VAR_4->mcode + VAR_4->szmcode);
  FUNC_3(VAR_3, VAR_8, 1);
}
