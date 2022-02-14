
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int traceno; } ;
struct TYPE_7__ {scalar_t__ parent; scalar_t__ exitno; scalar_t__ pc; scalar_t__ startpc; scalar_t__ framedepth; scalar_t__ retdepth; TYPE_1__ cur; scalar_t__ instunroll; } ;
typedef TYPE_2__ jit_State ;
typedef int TraceNo ;
typedef scalar_t__ LoopEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(jit_State *VAR_4, TraceNo VAR_5, LoopEvent VAR_6)
{
  if (VAR_4->parent == 0 && VAR_4->exitno == 0) {

    FUNC_1(VAR_4, VAR_0);
  } else if (VAR_6 != VAR_3) {
    VAR_4->instunroll = 0;
    if (VAR_4->pc == VAR_4->startpc && VAR_4->framedepth + VAR_4->retdepth == 0)
      FUNC_0(VAR_4, VAR_1, VAR_4->cur.traceno);
    else
      FUNC_0(VAR_4, VAR_2, VAR_5);
  }
}
