
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nval; } ;
struct TYPE_10__ {TYPE_1__ u; int k; int f; int t; } ;
typedef TYPE_2__ expdesc ;
typedef int UnOpr ;
typedef int FuncState ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;

void FUNC_6 (FuncState *VAR_4, UnOpr VAR_5, expdesc *VAR_6, int VAR_7) {
  expdesc VAR_8;
  VAR_8 = VAR_8 = VAR_0; VAR_8 = VAR_3; VAR_8 = 0;
  switch (VAR_5) {
    case 129: {
      if (FUNC_2(VAR_6))
        VAR_6->u.nval = FUNC_5(((void*)0), VAR_6->u.nval);
      else {
        FUNC_3(VAR_4, VAR_6);
        FUNC_0(VAR_4, VAR_2, VAR_6, &VAR_8, VAR_7);
      }
      break;
    }
    case 128: FUNC_1(VAR_4, VAR_6); break;
    case 130: {
      FUNC_3(VAR_4, VAR_6);
      FUNC_0(VAR_4, VAR_1, VAR_6, &VAR_8, VAR_7);
      break;
    }
    default: FUNC_4(0);
  }
}
