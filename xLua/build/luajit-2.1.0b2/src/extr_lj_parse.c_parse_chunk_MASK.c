
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* fs; int tok; } ;
struct TYPE_8__ {scalar_t__ framesize; scalar_t__ freereg; scalar_t__ nactvar; } ;
typedef TYPE_2__ LexState ;


 int FUNC_0 (TYPE_2__*,char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(LexState *VAR_0)
{
  int VAR_1 = 0;
  FUNC_4(VAR_0);
  while (!VAR_1 && !FUNC_2(VAR_0->tok)) {
    VAR_1 = FUNC_3(VAR_0);
    FUNC_0(VAR_0, ';');
    FUNC_1(VAR_0->fs->framesize >= VAR_0->fs->freereg &&
        VAR_0->fs->freereg >= VAR_0->fs->nactvar);
    VAR_0->fs->freereg = VAR_0->fs->nactvar;
  }
  FUNC_5(VAR_0);
}
