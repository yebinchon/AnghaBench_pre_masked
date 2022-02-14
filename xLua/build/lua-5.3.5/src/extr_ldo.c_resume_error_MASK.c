
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int top; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1, const char *VAR_2, int VAR_3) {
  VAR_1->top -= VAR_3;
  FUNC_3(VAR_1, VAR_1->top, FUNC_1(VAR_1, VAR_2));
  FUNC_0(VAR_1);
  FUNC_2(VAR_1);
  return VAR_0;
}
