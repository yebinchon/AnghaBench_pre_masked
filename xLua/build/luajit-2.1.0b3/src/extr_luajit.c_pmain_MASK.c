
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
 int VAR_7 ;
 int FUNC_1 (char**,int*) ;
 int FUNC_2 (int *,char**,int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,char*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 char* VAR_9 ;
 int FUNC_15 (int *,char**,int) ;
 struct Smain VAR_10 ;

__attribute__((used)) static int FUNC_16(lua_State *VAR_11)
{
  struct Smain *VAR_12 = &VAR_10;
  char **VAR_13 = VAR_12->argv;
  int VAR_14;
  int VAR_15 = 0;
  VAR_8 = VAR_11;
  if (VAR_13[0] && VAR_13[0][0]) VAR_9 = VAR_13[0];

  FUNC_0();

  VAR_14 = FUNC_1(VAR_13, &VAR_15);
  if (VAR_14 < 0) {
    FUNC_13();
    VAR_12->status = 1;
    return 0;
  }

  if ((VAR_15 & VAR_2)) {
    FUNC_9(VAR_11, 1);
    FUNC_10(VAR_11, VAR_7, "LUA_NOENV");
  }


  FUNC_8(VAR_11, VAR_5, 0);
  FUNC_7(VAR_11);
  FUNC_8(VAR_11, VAR_4, -1);

  FUNC_2(VAR_11, VAR_13, VAR_12->argc, VAR_14);

  if (!(VAR_15 & VAR_2)) {
    VAR_12->status = FUNC_5(VAR_11);
    if (VAR_12->status != VAR_6) return 0;
  }

  if ((VAR_15 & VAR_3)) FUNC_14();

  VAR_12->status = FUNC_15(VAR_11, VAR_13, VAR_14);
  if (VAR_12->status != VAR_6) return 0;

  if (VAR_12->argc > VAR_14) {
    VAR_12->status = FUNC_6(VAR_11, VAR_13 + VAR_14);
    if (VAR_12->status != VAR_6) return 0;
  }

  if ((VAR_15 & VAR_1)) {
    FUNC_12(VAR_11);
    FUNC_4(VAR_11);
  } else if (VAR_12->argc == VAR_14 && !(VAR_15 & (VAR_0|VAR_3))) {
    if (FUNC_11()) {
      FUNC_14();
      FUNC_12(VAR_11);
      FUNC_4(VAR_11);
    } else {
      FUNC_3(VAR_11, ((void*)0));
    }
  }
  return 0;
}
