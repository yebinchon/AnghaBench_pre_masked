
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int slot; } ;
typedef TYPE_2__ VarInfo ;
struct TYPE_15__ {TYPE_1__* bl; } ;
struct TYPE_14__ {TYPE_4__* fs; } ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_3__ LexState ;
typedef int GCstr ;
typedef TYPE_4__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *,int ,int ) ;
 int * FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(LexState *VAR_3)
{
  FuncState *VAR_4 = VAR_3->fs;
  GCstr *VAR_5 = FUNC_4(VAR_3);
  VarInfo *VAR_6 = FUNC_2(VAR_3, VAR_5);
  if (VAR_6)
    FUNC_0(VAR_4, VAR_0, VAR_6->slot, -1);
  VAR_4->bl->flags |= VAR_1;
  FUNC_3(VAR_3, VAR_5, VAR_2, FUNC_1(VAR_4));
}
