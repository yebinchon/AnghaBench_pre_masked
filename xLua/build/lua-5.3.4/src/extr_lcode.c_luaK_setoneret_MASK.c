
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int info; } ;
struct TYPE_6__ {scalar_t__ k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int) ;

void FUNC_5 (FuncState *VAR_4, expdesc *VAR_5) {
  if (VAR_5->k == VAR_0) {

    FUNC_4(FUNC_1(FUNC_3(VAR_4, VAR_5)) == 2);
    VAR_5->k = VAR_1;
    VAR_5->u.info = FUNC_0(FUNC_3(VAR_4, VAR_5));
  }
  else if (VAR_5->k == VAR_3) {
    FUNC_2(FUNC_3(VAR_4, VAR_5), 2);
    VAR_5->k = VAR_2;
  }
}
