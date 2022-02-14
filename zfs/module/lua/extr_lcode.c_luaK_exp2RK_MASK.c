
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int info; int nval; } ;
struct TYPE_14__ {int k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_15__ {int nk; } ;
typedef TYPE_3__ FuncState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;





 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6 (FuncState *VAR_1, expdesc *VAR_2) {
  FUNC_3(VAR_1, VAR_2);
  switch (VAR_2->k) {
    case 128:
    case 132:
    case 129: {
      if (VAR_1->nk <= VAR_0) {
        VAR_2->u.info = (VAR_2->k == 129) ? FUNC_5(VAR_1) : FUNC_1(VAR_1, (VAR_2->k == 128));
        VAR_2->k = 131;
        return FUNC_0(VAR_2->u.info);
      }
      else break;
    }
    case 130: {
      VAR_2->u.info = FUNC_4(VAR_1, VAR_2->u.nval);
      VAR_2->k = 131;

    }
    case 131: {
      if (VAR_2->u.info <= VAR_0)
        return FUNC_0(VAR_2->u.info);
      else break;
    }
    default: break;
  }

  return FUNC_2(VAR_1, VAR_2);
}
