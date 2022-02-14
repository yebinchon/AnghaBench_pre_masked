
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int info; } ;
struct TYPE_9__ {int k; int f; int t; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7 (FuncState *VAR_1, expdesc *VAR_2) {
  FUNC_3(VAR_1, VAR_2);
  switch (VAR_2->k) {
    case 131: case 136: {
      VAR_2->k = 128;
      break;
    }
    case 134: case 133: case 132: case 128: {
      VAR_2->k = 136;
      break;
    }
    case 135: {
      FUNC_5(VAR_1, VAR_2);
      break;
    }
    case 129:
    case 130: {
      FUNC_0(VAR_1, VAR_2);
      FUNC_1(VAR_1, VAR_2);
      VAR_2->u.info = FUNC_2(VAR_1, VAR_0, 0, VAR_2->u.info, 0);
      VAR_2->k = 129;
      break;
    }
    default: FUNC_4(0);
  }

  { int VAR_3 = VAR_2->f; VAR_2->f = VAR_2->t; VAR_2->t = VAR_3; }
  FUNC_6(VAR_1, VAR_2->f);
  FUNC_6(VAR_1, VAR_2->t);
}
