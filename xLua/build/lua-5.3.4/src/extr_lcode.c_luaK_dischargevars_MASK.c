
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int const vt; void* idx; void* t; } ;
struct TYPE_7__ {TYPE_1__ ind; void* info; } ;
struct TYPE_8__ {int k; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int OpCode ;
typedef int FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 void* VAR_4 ;


 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int *,int ,int ,void*,void*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int) ;

void FUNC_4 (FuncState *VAR_5, expdesc *VAR_6) {
  switch (VAR_6->k) {
    case 130: {
      VAR_6->k = VAR_3;
      break;
    }
    case 129: {
      VAR_6->u.info = FUNC_1(VAR_5, VAR_2, 0, VAR_6->u.info, 0);
      VAR_6->k = VAR_4;
      break;
    }
    case 131: {
      OpCode VAR_7;
      FUNC_0(VAR_5, VAR_6->u.ind.idx);
      if (VAR_6->u.ind.vt == 130) {
        FUNC_0(VAR_5, VAR_6->u.ind.t);
        VAR_7 = VAR_0;
      }
      else {
        FUNC_3(VAR_6->u.ind.vt == 129);
        VAR_7 = VAR_1;
      }
      VAR_6->u.info = FUNC_1(VAR_5, VAR_7, 0, VAR_6->u.ind.t, VAR_6->u.ind.idx);
      VAR_6->k = VAR_4;
      break;
    }
    case 128: case 132: {
      FUNC_2(VAR_5, VAR_6);
      break;
    }
    default: break;
  }
}
