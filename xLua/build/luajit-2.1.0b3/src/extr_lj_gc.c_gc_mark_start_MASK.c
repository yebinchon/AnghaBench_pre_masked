
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int state; int weak; int grayagain; int gray; } ;
struct TYPE_12__ {TYPE_1__ gc; int registrytv; } ;
typedef TYPE_2__ global_State ;
struct TYPE_13__ {int env; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(global_State *VAR_1)
{
  FUNC_4(VAR_1->gc.gray);
  FUNC_4(VAR_1->gc.grayagain);
  FUNC_4(VAR_1->gc.weak);
  FUNC_1(VAR_1, FUNC_3(VAR_1));
  FUNC_1(VAR_1, FUNC_5(FUNC_3(VAR_1)->env));
  FUNC_2(VAR_1, &VAR_1->registrytv);
  FUNC_0(VAR_1);
  VAR_1->gc.state = VAR_0;
}
