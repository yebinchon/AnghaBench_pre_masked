
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * closef; int * f; } ;
typedef TYPE_1__ LStream ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,char const*) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_2, FILE *VAR_3, const char *VAR_4,
                           const char *VAR_5) {
  LStream *VAR_6 = FUNC_2(VAR_2);
  VAR_6->f = VAR_3;
  VAR_6->closef = &VAR_1;
  if (VAR_4 != ((void*)0)) {
    FUNC_0(VAR_2, -1);
    FUNC_1(VAR_2, VAR_0, VAR_4);
  }
  FUNC_1(VAR_2, -2, VAR_5);
}
