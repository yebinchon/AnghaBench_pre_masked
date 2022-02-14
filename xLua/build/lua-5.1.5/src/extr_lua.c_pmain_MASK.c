
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Smain {char** argv; int status; int argc; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int*,int*,int*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char**,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 char* VAR_3 ;
 int FUNC_11 (int *,char**,int) ;

__attribute__((used)) static int FUNC_12 (lua_State *VAR_4) {
  struct Smain *VAR_5 = (struct Smain *)FUNC_8(VAR_4, 1);
  char **VAR_6 = VAR_5->argv;
  int VAR_7;
  int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
  VAR_2 = VAR_4;
  if (VAR_6[0] && VAR_6[0][0]) VAR_3 = VAR_6[0];
  FUNC_6(VAR_4, VAR_1, 0);
  FUNC_5(VAR_4);
  FUNC_6(VAR_4, VAR_0, 0);
  VAR_5->status = FUNC_3(VAR_4);
  if (VAR_5->status != 0) return 0;
  VAR_7 = FUNC_0(VAR_6, &VAR_8, &VAR_9, &VAR_10);
  if (VAR_7 < 0) {
    FUNC_9();
    VAR_5->status = 1;
    return 0;
  }
  if (VAR_9) FUNC_10();
  VAR_5->status = FUNC_11(VAR_4, VAR_6, (VAR_7 > 0) ? VAR_7 : VAR_5->argc);
  if (VAR_5->status != 0) return 0;
  if (VAR_7)
    VAR_5->status = FUNC_4(VAR_4, VAR_6, VAR_7);
  if (VAR_5->status != 0) return 0;
  if (VAR_8)
    FUNC_2(VAR_4);
  else if (VAR_7 == 0 && !VAR_10 && !VAR_9) {
    if (FUNC_7()) {
      FUNC_10();
      FUNC_2(VAR_4);
    }
    else FUNC_1(VAR_4, ((void*)0));
  }
  return 0;
}
