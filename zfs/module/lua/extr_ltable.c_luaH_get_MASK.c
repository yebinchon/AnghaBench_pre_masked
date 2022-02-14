
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int Table ;
typedef int TValue ;
typedef int Node ;





 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int const* FUNC_3 (int *) ;
 int const* FUNC_4 (int *,int) ;
 int const* FUNC_5 (int *,int ) ;
 int const* VAR_0 ;
 int FUNC_6 (int ,int const*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (int *,int const*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;

const TValue *FUNC_13 (Table *VAR_1, const TValue *VAR_2) {
  switch (FUNC_12(VAR_2)) {
    case 128: return FUNC_5(VAR_1, FUNC_11(VAR_2));
    case 130: return VAR_0;
    case 129: {
      int VAR_3;
      lua_Number VAR_4 = FUNC_10(VAR_2);
      FUNC_7(VAR_3, VAR_4);
      if (FUNC_8(FUNC_0(VAR_3), VAR_4))
        return FUNC_4(VAR_1, VAR_3);

    }

    default: {
      Node *VAR_5 = FUNC_9(VAR_1, VAR_2);
      do {
        if (FUNC_6(FUNC_1(VAR_5), VAR_2))
          return FUNC_3(VAR_5);
        else VAR_5 = FUNC_2(VAR_5);
      } while (VAR_5);
      return VAR_0;
    }
  }
}
