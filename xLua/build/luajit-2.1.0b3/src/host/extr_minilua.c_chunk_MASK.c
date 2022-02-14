
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int token; } ;
struct TYPE_11__ {TYPE_2__* fs; TYPE_1__ t; } ;
struct TYPE_10__ {int nactvar; int freereg; } ;
typedef TYPE_3__ LexState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char) ;

__attribute__((used)) static void FUNC_5(LexState*VAR_0){
int VAR_1=0;
FUNC_1(VAR_0);
while(!VAR_1&&!FUNC_0(VAR_0->t.token)){
VAR_1=FUNC_3(VAR_0);
FUNC_4(VAR_0,';');
VAR_0->fs->freereg=VAR_0->fs->nactvar;
}
FUNC_2(VAR_0);
}
