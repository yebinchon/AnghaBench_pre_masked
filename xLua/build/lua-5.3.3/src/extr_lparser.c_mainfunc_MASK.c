
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_15__ {TYPE_1__* f; } ;
struct TYPE_14__ {int envn; } ;
struct TYPE_13__ {int is_vararg; } ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ FuncState ;
typedef int BlockCnt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7 (LexState *VAR_2, FuncState *VAR_3) {
  BlockCnt VAR_4;
  expdesc VAR_5;
  FUNC_5(VAR_2, VAR_3, &VAR_4);
  VAR_3->f->is_vararg = 2;
  FUNC_2(&VAR_5, VAR_1, 0);
  FUNC_4(VAR_3, VAR_2->envn, &VAR_5);
  FUNC_3(VAR_2);
  FUNC_6(VAR_2);
  FUNC_0(VAR_2, VAR_0);
  FUNC_1(VAR_2);
}
