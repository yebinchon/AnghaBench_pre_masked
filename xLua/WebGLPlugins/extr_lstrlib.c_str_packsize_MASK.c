
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;
typedef int KOption ;
typedef int Header ;




 int VAR_0 ;
 int FUNC_0 (int *,size_t,char const**,int*,int*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int,char*) ;
 int FUNC_3 (int *,int,char*) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_1) {
  Header VAR_2;
  const char *VAR_3 = FUNC_4(VAR_1, 1);
  size_t VAR_4 = 0;
  FUNC_1(VAR_1, &VAR_2);
  while (*VAR_3 != '\0') {
    int VAR_5, VAR_6;
    KOption VAR_7 = FUNC_0(&VAR_2, VAR_4, &VAR_3, &VAR_5, &VAR_6);
    VAR_5 += VAR_6;
    FUNC_2(VAR_1, VAR_4 <= VAR_0 - VAR_5, 1,
                     "format result too large");
    VAR_4 += VAR_5;
    switch (VAR_7) {
      case 129:
      case 128:
        FUNC_3(VAR_1, 1, "variable-length format");

      default: break;
    }
  }
  FUNC_5(VAR_1, (lua_Integer)VAR_4);
  return 1;
}
