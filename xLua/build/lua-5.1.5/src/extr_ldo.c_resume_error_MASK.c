
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int top; TYPE_1__* ci; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_8__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1, const char *VAR_2) {
  VAR_1->top = VAR_1->ci->base;
  FUNC_3(VAR_1, VAR_1->top, FUNC_1(VAR_1, VAR_2));
  FUNC_0(VAR_1);
  FUNC_2(VAR_1);
  return VAR_0;
}
