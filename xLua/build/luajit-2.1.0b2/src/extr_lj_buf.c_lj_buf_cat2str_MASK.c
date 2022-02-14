
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int len; } ;
typedef int MSize ;
typedef TYPE_1__ GCstr ;


 char* FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

GCstr *FUNC_4(lua_State *VAR_0, GCstr *VAR_1, GCstr *VAR_2)
{
  MSize VAR_3 = VAR_1->len, VAR_4 = VAR_2->len;
  char *VAR_5 = FUNC_0(VAR_0, VAR_3 + VAR_4);
  FUNC_2(VAR_5, FUNC_3(VAR_1), VAR_3);
  FUNC_2(VAR_5+VAR_3, FUNC_3(VAR_2), VAR_4);
  return FUNC_1(VAR_0, VAR_5, VAR_3 + VAR_4);
}
