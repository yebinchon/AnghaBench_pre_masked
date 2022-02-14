
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizek; int * k; } ;
typedef int TValue ;
typedef TYPE_1__ Proto ;
typedef int DumpState ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;






 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;

__attribute__((used)) static void FUNC_11 (const Proto *VAR_0, DumpState *VAR_1) {
  int VAR_2;
  int VAR_3 = VAR_0->sizek;
  FUNC_1(VAR_3, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    const TValue *VAR_4 = &VAR_0->k[VAR_2];
    FUNC_0(FUNC_10(VAR_4), VAR_1);
    switch (FUNC_10(VAR_4)) {
    case 131:
      break;
    case 133:
      FUNC_0(FUNC_5(VAR_4), VAR_1);
      break;
    case 130:
      FUNC_3(FUNC_6(VAR_4), VAR_1);
      break;
    case 129:
      FUNC_2(FUNC_7(VAR_4), VAR_1);
      break;
    case 128:
    case 132:
      FUNC_4(FUNC_9(VAR_4), VAR_1);
      break;
    default:
      FUNC_8(0);
    }
  }
}
