
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*,size_t,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_0) {
  for (;;) {
    size_t VAR_1;
    const char *VAR_2 = FUNC_6(VAR_0, 1, &VAR_1);
    int VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_1, "=stdin");
    if (!FUNC_0(VAR_0, VAR_3) || !FUNC_7(VAR_0, 0)) {
      FUNC_5(VAR_0, VAR_2);
      return VAR_3;
    }
    FUNC_4(VAR_0, "\n");
    FUNC_3(VAR_0, -2);
    FUNC_2(VAR_0, 3);
  }
}
