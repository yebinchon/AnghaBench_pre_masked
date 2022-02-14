
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int name; } ;
typedef TYPE_3__ VarInfo ;
struct TYPE_11__ {int vtop; TYPE_3__* vstack; TYPE_2__* fs; } ;
struct TYPE_9__ {TYPE_1__* bl; } ;
struct TYPE_8__ {int vstart; } ;
typedef TYPE_4__ LexState ;
typedef int GCstr ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static VarInfo *FUNC_2(LexState *VAR_0, GCstr *VAR_1)
{
  VarInfo *VAR_2 = VAR_0->vstack + VAR_0->fs->bl->vstart;
  VarInfo *VAR_3 = VAR_0->vstack + VAR_0->vtop;
  for (; VAR_2 < VAR_3; VAR_2++)
    if (FUNC_1(VAR_2->name) == VAR_1 && FUNC_0(VAR_2))
      return VAR_2;
  return ((void*)0);
}
