
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_9__ {scalar_t__ np; } ;
struct TYPE_8__ {TYPE_1__* fs; } ;
struct TYPE_7__ {TYPE_3__* prev; } ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_3 (LexState *VAR_2, expdesc *VAR_3) {
  FuncState *VAR_4 = VAR_2->fs->prev;
  FUNC_0(VAR_3, VAR_1, FUNC_1(VAR_4, VAR_0, 0, VAR_4->np - 1));
  FUNC_2(VAR_4, VAR_3);
}
