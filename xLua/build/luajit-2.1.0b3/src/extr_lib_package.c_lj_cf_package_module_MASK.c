
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ base; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 char* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_1)
{
  const char *VAR_2 = FUNC_1(VAR_1, 1);
  int VAR_3 = (int)(VAR_1->top - VAR_1->base);
  FUNC_2(VAR_1, VAR_2, 1);
  FUNC_3(VAR_1, -1, "_NAME");
  if (!FUNC_4(VAR_1, -1)) {
    FUNC_5(VAR_1, 1);
  } else {
    FUNC_5(VAR_1, 1);
    FUNC_7(VAR_1, VAR_2);
  }
  FUNC_6(VAR_1, -1);
  FUNC_8(VAR_1);
  FUNC_0(VAR_1, VAR_3);
  return VAR_0;
}
