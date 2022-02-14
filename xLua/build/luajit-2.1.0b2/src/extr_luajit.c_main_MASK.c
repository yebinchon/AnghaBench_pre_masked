
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int argc; char** argv; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *,int) ;
 TYPE_1__ VAR_3 ;

int FUNC_5(int VAR_4, char **VAR_5)
{
  int VAR_6;
  lua_State *VAR_7 = FUNC_3();
  if (VAR_7 == ((void*)0)) {
    FUNC_0(VAR_5[0], "cannot create state: not enough memory");
    return VAR_0;
  }
  VAR_3.argc = VAR_4;
  VAR_3.argv = VAR_5;
  VAR_6 = FUNC_2(VAR_7, VAR_2, ((void*)0));
  FUNC_4(VAR_7, VAR_6);
  FUNC_1(VAR_7);
  return (VAR_6 || VAR_3.status) ? VAR_0 : VAR_1;
}
