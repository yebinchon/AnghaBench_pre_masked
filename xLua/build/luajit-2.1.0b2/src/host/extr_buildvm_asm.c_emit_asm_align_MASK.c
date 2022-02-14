
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int fp; } ;
typedef TYPE_1__ BuildCtx ;





 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(BuildCtx *VAR_0, int VAR_1)
{
  switch (VAR_0->mode) {
  case 129:
  case 130:
    FUNC_0(VAR_0->fp, "\t.p2align %d\n", VAR_1);
    break;
  case 128:
    FUNC_0(VAR_0->fp, "\t.align %d\n", VAR_1);
    break;
  default:
    break;
  }
}
