
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int loopinv; int orignins; TYPE_1__* T; int stopins; int curins; scalar_t__* realign; scalar_t__* mcp; scalar_t__* mctop; } ;
struct TYPE_4__ {int nins; } ;
typedef scalar_t__ MCode ;
typedef TYPE_2__ ASMState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(ASMState *VAR_2)
{
  MCode *VAR_3 = VAR_2->mctop;
  MCode *VAR_4 = VAR_2->mcp;
  if (VAR_2->realign) {
    VAR_2->realign = ((void*)0);
    FUNC_0(((intptr_t)VAR_4 & 15) == 0);
    if (VAR_2->loopinv) {
      VAR_3 -= 5;
      VAR_3[0] = VAR_0;
      FUNC_0(VAR_4 - VAR_3 >= -128);
      VAR_3[-1] = (MCode)(VAR_4 - VAR_3);
      if (VAR_2->loopinv == 2)
 VAR_3[-3] = (MCode)(VAR_4 - VAR_3 + 2);
    } else {
      FUNC_0(VAR_4 - VAR_3 >= -128);
      VAR_3[-1] = (MCode)(int8_t)(VAR_4 - VAR_3);
      VAR_3[-2] = VAR_1;
    }
  } else {
    MCode *VAR_5;
    VAR_3[-5] = VAR_0;
    if (VAR_2->loopinv) {

      VAR_3 -= 5;
      VAR_5 = VAR_4+4;
      *(int32_t *)(VAR_3-4) = (int32_t)(VAR_4 - VAR_3);
      if (VAR_2->loopinv == 2) {
 *(int32_t *)(VAR_3-10) = (int32_t)(VAR_4 - VAR_3 + 6);
 VAR_5 = VAR_4+8;
      }
    } else {
      *(int32_t *)(VAR_3-4) = (int32_t)(VAR_4 - VAR_3);
      VAR_5 = VAR_4+3;
    }

    if (VAR_5 >= VAR_3 - 128) {
      VAR_2->realign = VAR_5;
      VAR_2->curins = VAR_2->stopins;
      VAR_2->T->nins = VAR_2->orignins;
    }
  }
}
