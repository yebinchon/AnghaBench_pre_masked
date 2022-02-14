
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ slot; size_t startpc; int name; } ;
typedef TYPE_4__ VarInfo ;
struct TYPE_22__ {int vstart; int flags; scalar_t__ nactvar; TYPE_1__* prev; } ;
struct TYPE_21__ {int vtop; TYPE_3__* fs; int linenumber; TYPE_4__* vstack; } ;
struct TYPE_19__ {TYPE_2__* bcbase; } ;
struct TYPE_18__ {int line; } ;
struct TYPE_17__ {int flags; } ;
typedef TYPE_5__ LexState ;
typedef int GCstr ;
typedef TYPE_6__ FuncScope ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,int ,int ,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(LexState *VAR_6, FuncScope *VAR_7)
{
  VarInfo *VAR_8 = VAR_6->vstack + VAR_7->vstart;
  VarInfo *VAR_9 = VAR_6->vstack + VAR_6->vtop;
  for (; VAR_8 < VAR_9; VAR_8++) {
    GCstr *VAR_10 = FUNC_7(VAR_8->name);
    if (VAR_10 != ((void*)0)) {
      if (FUNC_2(VAR_8)) {
 VarInfo *VAR_11;
 FUNC_5(VAR_8->name);
 for (VAR_11 = VAR_8+1; VAR_11 < VAR_9; VAR_11++)
   if (FUNC_7(VAR_11->name) == VAR_10 && FUNC_1(VAR_11)) {
     if ((VAR_7->flags&VAR_2) && VAR_11->slot > VAR_8->slot)
       FUNC_0(VAR_6, VAR_11);
     FUNC_3(VAR_6, VAR_11, VAR_8);
   }
      } else if (FUNC_1(VAR_8)) {
 if (VAR_7->prev) {
   VAR_7->prev->flags |= VAR_10 == VAR_5 ? VAR_0 : VAR_1;
   VAR_8->slot = VAR_7->nactvar;
   if ((VAR_7->flags & VAR_2))
     FUNC_0(VAR_6, VAR_8);
 } else {
   VAR_6->linenumber = VAR_6->fs->bcbase[VAR_8->startpc].line;
   if (VAR_10 == VAR_5)
     FUNC_4(VAR_6, 0, VAR_3);
   else
     FUNC_4(VAR_6, 0, VAR_4, FUNC_6(VAR_10));
 }
      }
    }
  }
}
