
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_18__ {TYPE_12__* bl; int pc; int lasttarget; } ;
struct TYPE_17__ {char tok; TYPE_1__* vstack; TYPE_3__* fs; } ;
struct TYPE_16__ {int slot; } ;
struct TYPE_15__ {int nactvar; int flags; } ;
typedef size_t MSize ;
typedef TYPE_2__ LexState ;
typedef int GCstr ;
typedef TYPE_3__ FuncState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 size_t FUNC_1 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_12__*,size_t) ;
 int FUNC_3 (TYPE_2__*,char) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(LexState *VAR_6)
{
  FuncState *VAR_7 = VAR_6->fs;
  GCstr *VAR_8;
  MSize VAR_9;
  VAR_7->lasttarget = VAR_7->pc;
  VAR_7->bl->flags |= VAR_0;
  FUNC_6(VAR_6);
  VAR_8 = FUNC_4(VAR_6);
  if (FUNC_0(VAR_6, VAR_8))
    FUNC_5(VAR_6, 0, VAR_2, FUNC_8(VAR_8));
  VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_5, VAR_7->pc);
  FUNC_3(VAR_6, VAR_3);

  for (;;) {
    if (VAR_6->tok == VAR_3) {
      FUNC_9(VAR_6);
      FUNC_11(VAR_6);
      FUNC_10(VAR_6);
    } else if (VAR_1 && VAR_6->tok == ';') {
      FUNC_6(VAR_6);
    } else {
      break;
    }
  }

  if (FUNC_7(VAR_6->tok) && VAR_6->tok != VAR_4)
    VAR_6->vstack[VAR_9].slot = VAR_7->bl->nactvar;
  FUNC_2(VAR_6, VAR_7->bl, VAR_9);
}
