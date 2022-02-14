
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Smain {char** argv; int status; int argc; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char**,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char**,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,char*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 char* VAR_8 ;
 int FUNC_14 (int *,char**,int) ;
 struct Smain VAR_9 ;

__attribute__((used)) static int FUNC_15(lua_State *VAR_10)
{
  struct Smain *VAR_11 = &VAR_9;
  char **VAR_12 = VAR_11->argv;
  int VAR_13;
  int VAR_14 = 0;
  VAR_7 = VAR_10;
  if (VAR_12[0] && VAR_12[0][0]) VAR_8 = VAR_12[0];
  FUNC_0();
  VAR_13 = FUNC_1(VAR_12, &VAR_14);
  if (VAR_13 < 0) {
    FUNC_12();
    VAR_11->status = 1;
    return 0;
  }
  if ((VAR_14 & VAR_2)) {
    FUNC_8(VAR_10, 1);
    FUNC_9(VAR_10, VAR_6, "LUA_NOENV");
  }
  FUNC_7(VAR_10, VAR_5, 0);
  FUNC_6(VAR_10);
  FUNC_7(VAR_10, VAR_4, -1);
  if (!(VAR_14 & VAR_2)) {
    VAR_11->status = FUNC_4(VAR_10);
    if (VAR_11->status != 0) return 0;
  }
  if ((VAR_14 & VAR_3)) FUNC_13();
  VAR_11->status = FUNC_14(VAR_10, VAR_12, (VAR_13 > 0) ? VAR_13 : VAR_11->argc);
  if (VAR_11->status != 0) return 0;
  if (VAR_13) {
    VAR_11->status = FUNC_5(VAR_10, VAR_12, VAR_13);
    if (VAR_11->status != 0) return 0;
  }
  if ((VAR_14 & VAR_1)) {
    FUNC_11(VAR_10);
    FUNC_3(VAR_10);
  } else if (VAR_13 == 0 && !(VAR_14 & (VAR_0|VAR_3))) {
    if (FUNC_10()) {
      FUNC_13();
      FUNC_11(VAR_10);
      FUNC_3(VAR_10);
    } else {
      FUNC_2(VAR_10, ((void*)0));
    }
  }
  return 0;
}
