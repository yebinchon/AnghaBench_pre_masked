
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nins; int traceno; } ;
struct TYPE_8__ {scalar_t__ parent; scalar_t__ exitno; scalar_t__ framedepth; scalar_t__ retdepth; int loopref; scalar_t__ loopunroll; TYPE_1__ cur; int const* startpc; } ;
typedef TYPE_2__ jit_State ;
typedef scalar_t__ LoopEvent ;
typedef int BCIns ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (TYPE_2__*,int const*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(jit_State *VAR_6, const BCIns *VAR_7, LoopEvent VAR_8)
{
  if (VAR_6->parent == 0 && VAR_6->exitno == 0) {
    if (VAR_7 == VAR_6->startpc && VAR_6->framedepth + VAR_6->retdepth == 0) {

      if (VAR_8 == VAR_5)
 FUNC_3(VAR_6, VAR_1);
      FUNC_2(VAR_6, VAR_3, VAR_6->cur.traceno);
    } else if (VAR_8 != VAR_5) {






      if (FUNC_0(*VAR_7) != -1 && !FUNC_1(VAR_6, VAR_7))
 FUNC_3(VAR_6, VAR_0);
      if ((VAR_8 != VAR_4 &&
    VAR_6->loopref && VAR_6->cur.nins - VAR_6->loopref > 24) || --VAR_6->loopunroll < 0)
 FUNC_3(VAR_6, VAR_2);
      VAR_6->loopref = VAR_6->cur.nins;
    }
  } else if (VAR_8 != VAR_5) {
    VAR_6->loopref = VAR_6->cur.nins;
    if (--VAR_6->loopunroll < 0)
      FUNC_3(VAR_6, VAR_2);
  }
}
