
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; scalar_t__ base; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_8__ {int env; } ;
struct TYPE_10__ {TYPE_1__ c; } ;
typedef int GCtab ;
typedef TYPE_3__ GCfunc ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int * FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1, int VAR_2, int VAR_3)
{
  if (VAR_2 == VAR_0) {
    if (FUNC_6(VAR_1->base+VAR_3-1)) {
      GCfunc *VAR_4 = FUNC_0(VAR_1->top-1);
      GCtab *VAR_5 = FUNC_5(VAR_1->base+VAR_3-1);
      FUNC_3(VAR_4->c.env, FUNC_2(VAR_5));
      FUNC_1(VAR_1, VAR_4, VAR_5);
    }
    return 1;
  } else {
    FUNC_4(VAR_1->top-2);
    return 2;
  }
}
