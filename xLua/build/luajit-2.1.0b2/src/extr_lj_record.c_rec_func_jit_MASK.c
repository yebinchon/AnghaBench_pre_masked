
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int traceno; } ;
struct TYPE_11__ {scalar_t__ framedepth; scalar_t__ retdepth; TYPE_1__ cur; int * startpc; int * pc; scalar_t__ instunroll; int * patchpc; int patchins; } ;
typedef TYPE_2__ jit_State ;
typedef int TraceNo ;
struct TYPE_12__ {scalar_t__ linktype; int startins; } ;
typedef TYPE_3__ GCtrace ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(jit_State *VAR_3, TraceNo VAR_4)
{
  GCtrace *VAR_5;
  FUNC_2(VAR_3);
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  if (VAR_5->linktype == VAR_0) {
    FUNC_0(VAR_3, VAR_4);

    VAR_3->patchins = *VAR_3->pc;
    VAR_3->patchpc = (BCIns *)VAR_3->pc;
    *VAR_3->patchpc = VAR_5->startins;
    return;
  }
  VAR_3->instunroll = 0;
  if (VAR_3->pc == VAR_3->startpc && VAR_3->framedepth + VAR_3->retdepth == 0)
    FUNC_1(VAR_3, VAR_2, VAR_3->cur.traceno);
  else
    FUNC_1(VAR_3, VAR_1, VAR_4);
}
