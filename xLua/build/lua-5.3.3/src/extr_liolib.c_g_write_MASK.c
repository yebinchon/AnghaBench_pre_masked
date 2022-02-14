
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 size_t FUNC_1 (char const*,int,size_t,int *) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_3, FILE *VAR_4, int VAR_5) {
  int VAR_6 = FUNC_4(VAR_3) - VAR_5;
  int VAR_7 = 1;
  for (; VAR_6--; VAR_5++) {
    if (FUNC_8(VAR_3, VAR_5) == VAR_2) {

      int VAR_8 = FUNC_5(VAR_3, VAR_5)
                ? FUNC_0(VAR_4, VAR_0, FUNC_6(VAR_3, VAR_5))
                : FUNC_0(VAR_4, VAR_1, FUNC_7(VAR_3, VAR_5));
      VAR_7 = VAR_7 && (VAR_8 > 0);
    }
    else {
      size_t VAR_9;
      const char *VAR_10 = FUNC_2(VAR_3, VAR_5, &VAR_9);
      VAR_7 = VAR_7 && (FUNC_1(VAR_10, sizeof(char), VAR_9, VAR_4) == VAR_9);
    }
  }
  if (VAR_7) return 1;
  else return FUNC_3(VAR_3, VAR_7, ((void*)0));
}
