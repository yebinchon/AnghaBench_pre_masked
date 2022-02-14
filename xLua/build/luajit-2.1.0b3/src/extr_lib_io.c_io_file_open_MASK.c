
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int * fp; } ;
typedef TYPE_1__ IOFileUD ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char const*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,char const*,int ) ;
 int FUNC_4 (int *,int,int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static IOFileUD *FUNC_7(lua_State *VAR_1, const char *VAR_2)
{
  const char *VAR_3 = FUNC_5(FUNC_2(VAR_1, 1));
  IOFileUD *VAR_4 = FUNC_1(VAR_1);
  VAR_4->fp = FUNC_0(VAR_3, VAR_2);
  if (VAR_4->fp == ((void*)0))
    FUNC_4(VAR_1, 1, FUNC_3(VAR_1, "%s: %s", VAR_3, FUNC_6(VAR_0)));
  return VAR_4;
}
