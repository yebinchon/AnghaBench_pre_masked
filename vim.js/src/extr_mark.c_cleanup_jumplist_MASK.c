
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int w_jumplistlen; int w_jumplistidx; TYPE_3__* w_jumplist; } ;
struct TYPE_5__ {scalar_t__ lnum; } ;
struct TYPE_6__ {scalar_t__ fnum; TYPE_1__ mark; } ;
struct TYPE_7__ {int fname; TYPE_2__ fmark; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1()
{
    int VAR_1;
    int VAR_2, VAR_3;

    VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_0->w_jumplistlen; ++VAR_2)
    {
 if (VAR_0->w_jumplistidx == VAR_2)
     VAR_0->w_jumplistidx = VAR_3;
 for (VAR_1 = VAR_2 + 1; VAR_1 < VAR_0->w_jumplistlen; ++VAR_1)
     if (VAR_0->w_jumplist[VAR_1].fmark.fnum
     == VAR_0->w_jumplist[VAR_2].fmark.fnum
      && VAR_0->w_jumplist[VAR_2].fmark.fnum != 0
      && VAR_0->w_jumplist[VAR_1].fmark.mark.lnum
      == VAR_0->w_jumplist[VAR_2].fmark.mark.lnum)
  break;
 if (VAR_1 >= VAR_0->w_jumplistlen)
     VAR_0->w_jumplist[VAR_3++] = VAR_0->w_jumplist[VAR_2];
 else
     FUNC_0(VAR_0->w_jumplist[VAR_2].fname);
    }
    if (VAR_0->w_jumplistidx == VAR_0->w_jumplistlen)
 VAR_0->w_jumplistidx = VAR_3;
    VAR_0->w_jumplistlen = VAR_3;
}
