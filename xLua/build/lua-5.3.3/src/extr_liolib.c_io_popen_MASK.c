
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * f; int * closef; } ;
typedef TYPE_1__ LStream ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*,char const*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char const*) ;
 char* FUNC_4 (int *,int,char*) ;
 TYPE_1__* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_1) {



  const char *VAR_2 = FUNC_1(VAR_1, 1);
  const char *VAR_3 = FUNC_4(VAR_1, 2, "r");
  LStream *VAR_4 = FUNC_5(VAR_1);
  VAR_4->f = FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_4->closef = &VAR_0;
  return (VAR_4->f == ((void*)0)) ? FUNC_3(VAR_1, 0, VAR_2) : 1;

}
