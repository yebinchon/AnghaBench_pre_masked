
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int top; } ;
typedef TYPE_4__ lua_State ;
typedef int Table ;
struct TYPE_13__ {TYPE_1__* p; } ;
struct TYPE_14__ {scalar_t__ isC; } ;
struct TYPE_16__ {TYPE_2__ l; TYPE_3__ c; } ;
struct TYPE_12__ {int* lineinfo; int sizelineinfo; } ;
typedef TYPE_5__ Closure ;


 int FUNC_0 (TYPE_4__*) ;
 int * FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int *,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_4__*,int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_0, Closure *VAR_1) {
  if (VAR_1 == ((void*)0) || VAR_1->c.isC) {
    FUNC_5(VAR_0->top);
  }
  else {
    Table *VAR_2 = FUNC_1(VAR_0, 0, 0);
    int *VAR_3 = VAR_1->l.p->lineinfo;
    int VAR_4;
    for (VAR_4=0; VAR_4<VAR_1->l.p->sizelineinfo; VAR_4++)
      FUNC_3(FUNC_2(VAR_0, VAR_2, VAR_3[VAR_4]), 1);
    FUNC_4(VAR_0, VAR_0->top, VAR_2);
  }
  FUNC_0(VAR_0);
}
