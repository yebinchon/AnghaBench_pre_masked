
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (int *,int,int,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int,size_t*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int*) ;
 int FUNC_10 (char const*,int ) ;
 char FUNC_11 (unsigned char) ;

__attribute__((used)) static int FUNC_12 (lua_State *VAR_1) {
  if (FUNC_6(VAR_1, 2)) {
    int VAR_2;
    lua_Number VAR_3 = FUNC_9(VAR_1, 1, &VAR_2);
    if (VAR_2) {
      FUNC_8(VAR_1, VAR_3);
      return 1;
    }
    FUNC_3(VAR_1, 1);
  }
  else {
    size_t VAR_4;
    const char *VAR_5 = FUNC_5(VAR_1, 1, &VAR_4);
    const char *VAR_6 = VAR_5 + VAR_4;
    int VAR_7 = FUNC_4(VAR_1, 2);
    int VAR_8 = 0;
    FUNC_2(VAR_1, 2 <= VAR_7 && VAR_7 <= 36, 2, "base out of range");
    VAR_5 += FUNC_10(VAR_5, VAR_0);
    if (*VAR_5 == '-') { VAR_5++; VAR_8 = 1; }
    else if (*VAR_5 == '+') VAR_5++;
    if (FUNC_0((unsigned char)*VAR_5)) {
      lua_Number VAR_9 = 0;
      do {
        int VAR_10 = (FUNC_1((unsigned char)*VAR_5)) ? *VAR_5 - '0'
                       : FUNC_11((unsigned char)*VAR_5) - 'A' + 10;
        if (VAR_10 >= VAR_7) break;
        VAR_9 = VAR_9 * (lua_Number)VAR_7 + (lua_Number)VAR_10;
        VAR_5++;
      } while (FUNC_0((unsigned char)*VAR_5));
      VAR_5 += FUNC_10(VAR_5, VAR_0);
      if (VAR_5 == VAR_6) {
        FUNC_8(VAR_1, (VAR_8) ? -VAR_9 : VAR_9);
        return 1;
      }
    }
  }
  FUNC_7(VAR_1);
  return 1;
}
