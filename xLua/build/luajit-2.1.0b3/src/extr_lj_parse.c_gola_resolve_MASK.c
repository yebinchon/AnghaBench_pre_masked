
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ slot; size_t startpc; int name; } ;
typedef TYPE_2__ VarInfo ;
struct TYPE_20__ {TYPE_1__* bcbase; } ;
struct TYPE_19__ {int name; } ;
struct TYPE_18__ {int vstart; } ;
struct TYPE_17__ {TYPE_7__* fs; int linenumber; TYPE_2__* vstack; } ;
struct TYPE_15__ {int line; } ;
typedef int MSize ;
typedef TYPE_3__ LexState ;
typedef int GCstr ;
typedef TYPE_4__ FuncScope ;


 int VAR_0 ;
 int * VAR_1 ;
 uintptr_t VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 TYPE_5__ FUNC_7 (TYPE_3__*,TYPE_7__*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(LexState *VAR_3, FuncScope *VAR_4, MSize VAR_5)
{
  VarInfo *VAR_6 = VAR_3->vstack + VAR_4->vstart;
  VarInfo *VAR_7 = VAR_3->vstack + VAR_5;
  for (; VAR_6 < VAR_7; VAR_6++)
    if (FUNC_0(VAR_6->name, VAR_7->name) && FUNC_1(VAR_6)) {
      if (VAR_6->slot < VAR_7->slot) {
 GCstr *VAR_8 = FUNC_6(FUNC_7(VAR_3, VAR_3->fs, VAR_6->slot).name);
 FUNC_4((uintptr_t)VAR_8 >= VAR_2);
 VAR_3->linenumber = VAR_3->fs->bcbase[VAR_6->startpc].line;
 FUNC_4(FUNC_6(VAR_6->name) != VAR_1);
 FUNC_3(VAR_3, 0, VAR_0,
       FUNC_5(FUNC_6(VAR_6->name)), FUNC_5(VAR_8));
      }
      FUNC_2(VAR_3, VAR_6, VAR_7);
    }
}
