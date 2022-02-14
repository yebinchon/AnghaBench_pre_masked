
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* fpr; int * gpr; } ;
struct TYPE_4__ {int * l; } ;
typedef scalar_t__ MSize ;
typedef int GPRArg ;
typedef int CTSize ;
typedef TYPE_2__ CCallState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(CCallState *VAR_2, int *VAR_3, uint8_t *VAR_4, CTSize VAR_5)
{
  GPRArg VAR_6[2];
  MSize VAR_7 = 0, VAR_8 = 0;
  uint32_t VAR_9;
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
    if ((VAR_3[VAR_9] & VAR_0)) {
      VAR_6[VAR_9] = VAR_2->gpr[VAR_7++];
    } else if ((VAR_3[VAR_9] & VAR_1)) {
      VAR_6[VAR_9] = VAR_2->fpr[VAR_8++].l[0];
    }
  }
  FUNC_0(VAR_4, VAR_6, VAR_5);
}
