
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int info; } ;
struct TYPE_16__ {TYPE_1__ u; int k; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_17__ {int freereg; } ;
typedef TYPE_3__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ,int,int,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int) ;

void FUNC_5 (FuncState *VAR_2, expdesc *VAR_3, expdesc *VAR_4) {
  int VAR_5;
  FUNC_3(VAR_2, VAR_3);
  VAR_5 = VAR_3->u.info;
  FUNC_0(VAR_2, VAR_3);
  VAR_3->u.info = VAR_2->freereg;
  VAR_3->k = VAR_1;
  FUNC_4(VAR_2, 2);
  FUNC_1(VAR_2, VAR_0, VAR_3->u.info, VAR_5, FUNC_2(VAR_2, VAR_4));
  FUNC_0(VAR_2, VAR_4);
}
