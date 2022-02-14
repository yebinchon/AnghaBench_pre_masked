
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef char const* lua_Integer ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 char const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int,char*) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *,int) ;
 char* FUNC_10 (int *,int,size_t*) ;
 char const* FUNC_11 (int *,int) ;
 int FUNC_12 (int *,char*,char const) ;
 char* FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 char* FUNC_15 (int *,int,size_t*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,char*,int,char*,char const*) ;
 int FUNC_19 (int *,int) ;
 char* FUNC_20 (int *,char const*,char*) ;
 int FUNC_21 (char*,char) ;
 size_t FUNC_22 (char const*) ;

__attribute__((used)) static int FUNC_23 (lua_State *VAR_5) {
  int VAR_6 = FUNC_17(VAR_5);
  int VAR_7 = 1;
  size_t VAR_8;
  const char *VAR_9 = FUNC_10(VAR_5, VAR_7, &VAR_8);
  const char *VAR_10 = VAR_9+VAR_8;
  luaL_Buffer VAR_11;
  FUNC_8(VAR_5, &VAR_11);
  while (VAR_9 < VAR_10) {
    if (*VAR_9 != VAR_2)
      FUNC_3(&VAR_11, *VAR_9++);
    else if (*++VAR_9 == VAR_2)
      FUNC_3(&VAR_11, *VAR_9++);
    else {
      char VAR_12[VAR_3];
      char *VAR_13 = FUNC_13(&VAR_11, VAR_4);
      int VAR_14 = 0;
      if (++VAR_7 > VAR_6)
        FUNC_7(VAR_5, VAR_7, "no value");
      VAR_9 = FUNC_20(VAR_5, VAR_9, VAR_12);
      switch (*VAR_9++) {
        case 'c': {
          VAR_14 = FUNC_2(VAR_13, VAR_4, VAR_12, (int)FUNC_9(VAR_5, VAR_7));
          break;
        }
        case 'd': case 'i':
        case 'o': case 'u': case 'x': case 'X': {
          lua_Integer VAR_15 = FUNC_9(VAR_5, VAR_7);
          FUNC_0(VAR_12, VAR_0);
          VAR_14 = FUNC_2(VAR_13, VAR_4, VAR_12, VAR_15);
          break;
        }
        case 'a': case 'A':
          FUNC_0(VAR_12, VAR_1);
          VAR_14 = FUNC_18(VAR_5, VAR_13, VAR_4, VAR_12,
                                  FUNC_11(VAR_5, VAR_7));
          break;
        case 'e': case 'E': case 'f':
        case 'g': case 'G': {
          FUNC_0(VAR_12, VAR_1);
          VAR_14 = FUNC_2(VAR_13, VAR_4, VAR_12, FUNC_11(VAR_5, VAR_7));
          break;
        }
        case 'q': {
          FUNC_1(VAR_5, &VAR_11, VAR_7);
          break;
        }
        case 's': {
          size_t VAR_16;
          const char *VAR_17 = FUNC_15(VAR_5, VAR_7, &VAR_16);
          if (VAR_12[2] == '\0')
            FUNC_5(&VAR_11);
          else {
            FUNC_6(VAR_5, VAR_16 == FUNC_22(VAR_17), VAR_7, "string contains zeros");
            if (!FUNC_21(VAR_12, '.') && VAR_16 >= 100) {

              FUNC_5(&VAR_11);
            }
            else {
              VAR_14 = FUNC_2(VAR_13, VAR_4, VAR_12, VAR_17);
              FUNC_19(VAR_5, 1);
            }
          }
          break;
        }
        default: {
          return FUNC_12(VAR_5, "invalid option '%%%c' to 'format'",
                               *(VAR_9 - 1));
        }
      }
      FUNC_16(VAR_14 < VAR_4);
      FUNC_4(&VAR_11, VAR_14);
    }
  }
  FUNC_14(&VAR_11);
  return 1;
}
