
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t startpc; int slot; int name; } ;
typedef TYPE_2__ VarInfo ;
struct TYPE_12__ {TYPE_1__* bcbase; } ;
struct TYPE_11__ {TYPE_4__* fs; } ;
struct TYPE_9__ {int ins; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;
typedef size_t BCPos ;


 int FUNC_0 (TYPE_4__*,size_t,size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(LexState *VAR_0, VarInfo *VAR_1, VarInfo *VAR_2)
{
  FuncState *VAR_3 = VAR_0->fs;
  BCPos VAR_4 = VAR_1->startpc;
  FUNC_2(VAR_1->name);
  FUNC_1(&VAR_3->bcbase[VAR_4].ins, VAR_2->slot);
  FUNC_0(VAR_3, VAR_4, VAR_2->startpc);
}
