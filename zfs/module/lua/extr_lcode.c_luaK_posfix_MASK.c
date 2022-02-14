
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int info; } ;
struct TYPE_15__ {TYPE_1__ u; int k; int t; int f; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;
typedef int BinOpr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,int ,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_5 (int *,int ,int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (int) ;

void FUNC_13 (FuncState *VAR_6, BinOpr VAR_7,
                  expdesc *VAR_8, expdesc *VAR_9, int VAR_10) {
  switch (VAR_7) {
    case 141: {
      FUNC_12(VAR_8->t == VAR_0);
      FUNC_9(VAR_6, VAR_9);
      FUNC_8(VAR_6, &VAR_9->f, VAR_8->f);
      *VAR_8 = *VAR_9;
      break;
    }
    case 130: {
      FUNC_12(VAR_8->f == VAR_0);
      FUNC_9(VAR_6, VAR_9);
      FUNC_8(VAR_6, &VAR_9->t, VAR_8->t);
      *VAR_8 = *VAR_9;
      break;
    }
    case 140: {
      FUNC_11(VAR_6, VAR_9);
      if (VAR_9->k == VAR_5 && FUNC_1(FUNC_7(VAR_6, VAR_9)) == VAR_2) {
        FUNC_12(VAR_8->u.info == FUNC_0(FUNC_7(VAR_6, VAR_9))-1);
        FUNC_6(VAR_6, VAR_8);
        FUNC_2(FUNC_7(VAR_6, VAR_9), VAR_8->u.info);
        VAR_8->k = VAR_5; VAR_8->u.info = VAR_9->u.info;
      }
      else {
        FUNC_10(VAR_6, VAR_9);
        FUNC_4(VAR_6, VAR_2, VAR_8, VAR_9, VAR_10);
      }
      break;
    }
    case 142: case 128: case 132: case 139:
    case 133: case 129: {
      FUNC_4(VAR_6, FUNC_3(VAR_4, VAR_7 - 142 + VAR_1), VAR_8, VAR_9, VAR_10);
      break;
    }
    case 138: case 134: case 135: {
      FUNC_5(VAR_6, FUNC_3(VAR_4, VAR_7 - 138 + VAR_3), 1, VAR_8, VAR_9);
      break;
    }
    case 131: case 136: case 137: {
      FUNC_5(VAR_6, FUNC_3(VAR_4, VAR_7 - 131 + VAR_3), 0, VAR_8, VAR_9);
      break;
    }
    default: FUNC_12(0);
  }
}
