
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int IdxT ;


 int VAR_0 ;
 int FUNC_0 (int,int,unsigned int) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 scalar_t__ FUNC_7 (int *,int,int) ;

__attribute__((used)) static void FUNC_8 (lua_State *VAR_1, IdxT VAR_2, IdxT VAR_3,
                                   unsigned int VAR_4) {
  while (VAR_2 < VAR_3) {
    IdxT VAR_5;
    IdxT VAR_6;

    FUNC_2(VAR_1, 1, VAR_2);
    FUNC_2(VAR_1, 1, VAR_3);
    if (FUNC_7(VAR_1, -1, -2))
      FUNC_6(VAR_1, VAR_2, VAR_3);
    else
      FUNC_3(VAR_1, 2);
    if (VAR_3 - VAR_2 == 1)
      return;
    if (VAR_3 - VAR_2 < VAR_0 || VAR_4 == 0)
      VAR_5 = (VAR_2 + VAR_3)/2;
    else
      VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
    FUNC_2(VAR_1, 1, VAR_5);
    FUNC_2(VAR_1, 1, VAR_2);
    if (FUNC_7(VAR_1, -2, -1))
      FUNC_6(VAR_1, VAR_5, VAR_2);
    else {
      FUNC_3(VAR_1, 1);
      FUNC_2(VAR_1, 1, VAR_3);
      if (FUNC_7(VAR_1, -1, -2))
        FUNC_6(VAR_1, VAR_5, VAR_3);
      else
        FUNC_3(VAR_1, 2);
    }
    if (VAR_3 - VAR_2 == 2)
      return;
    FUNC_2(VAR_1, 1, VAR_5);
    FUNC_4(VAR_1, -1);
    FUNC_2(VAR_1, 1, VAR_3 - 1);
    FUNC_6(VAR_1, VAR_5, VAR_3 - 1);
    VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3);

    if (VAR_5 - VAR_2 < VAR_3 - VAR_5) {
      FUNC_8(VAR_1, VAR_2, VAR_5 - 1, VAR_4);
      VAR_6 = VAR_5 - VAR_2;
      VAR_2 = VAR_5 + 1;
    }
    else {
      FUNC_8(VAR_1, VAR_5 + 1, VAR_3, VAR_4);
      VAR_6 = VAR_3 - VAR_5;
      VAR_3 = VAR_5 - 1;
    }
    if ((VAR_3 - VAR_2) / 128 > VAR_6)
      VAR_4 = FUNC_1();
  }
}
