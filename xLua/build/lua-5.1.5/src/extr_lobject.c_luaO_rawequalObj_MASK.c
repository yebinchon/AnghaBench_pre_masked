
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TValue ;






 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;

int FUNC_8 (const TValue *VAR_0, const TValue *VAR_1) {
  if (FUNC_7(VAR_0) != FUNC_7(VAR_1)) return 0;
  else switch (FUNC_7(VAR_0)) {
    case 129:
      return 1;
    case 128:
      return FUNC_4(FUNC_5(VAR_0), FUNC_5(VAR_1));
    case 131:
      return FUNC_0(VAR_0) == FUNC_0(VAR_1);
    case 130:
      return FUNC_6(VAR_0) == FUNC_6(VAR_1);
    default:
      FUNC_3(FUNC_2(VAR_0));
      return FUNC_1(VAR_0) == FUNC_1(VAR_1);
  }
}
