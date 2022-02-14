
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ ngpr; scalar_t__ nfpr; TYPE_1__* fpr; void** gpr; } ;
struct TYPE_4__ {void** l; } ;
typedef scalar_t__ MSize ;
typedef void* GPRArg ;
typedef TYPE_2__ CCallState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(CCallState *VAR_5, GPRArg *VAR_6, int *VAR_7)
{
  MSize VAR_8 = VAR_5->ngpr, VAR_9 = VAR_5->nfpr;
  uint32_t VAR_10;
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
    FUNC_0(!(VAR_7[VAR_10] & VAR_3));
    if ((VAR_7[VAR_10] & VAR_2)) {
      if (VAR_8 >= VAR_1) return 1;
      VAR_5->gpr[VAR_8++] = VAR_6[VAR_10];
    } else if ((VAR_7[VAR_10] & VAR_4)) {
      if (VAR_9 >= VAR_0) return 1;
      VAR_5->fpr[VAR_9++].l[0] = VAR_6[VAR_10];
    }
  }
  VAR_5->ngpr = VAR_8; VAR_5->nfpr = VAR_9;
  return 0;
}
