
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pc; TYPE_1__* bcbase; } ;
struct TYPE_11__ {char tok; TYPE_3__* fs; } ;
struct TYPE_10__ {int line; } ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ FuncState ;
typedef int ExpDesc ;
typedef int BCLine ;


 int FUNC_0 (TYPE_3__*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_5(LexState *VAR_0, BCLine VAR_1)
{
  FuncState *VAR_2;
  ExpDesc VAR_3, VAR_4;
  int VAR_5 = 0;
  FUNC_2(VAR_0);

  FUNC_4(VAR_0, &VAR_3);
  while (VAR_0->tok == '.')
    FUNC_1(VAR_0, &VAR_3);
  if (VAR_0->tok == ':') {
    VAR_5 = 1;
    FUNC_1(VAR_0, &VAR_3);
  }
  FUNC_3(VAR_0, &VAR_4, VAR_5, VAR_1);
  VAR_2 = VAR_0->fs;
  FUNC_0(VAR_2, &VAR_3, &VAR_4);
  VAR_2->bcbase[VAR_2->pc - 1].line = VAR_1;
}
