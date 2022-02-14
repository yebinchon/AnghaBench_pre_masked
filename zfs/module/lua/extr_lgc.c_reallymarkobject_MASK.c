
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int lu_mem ;
struct TYPE_21__ {int GCmemtrav; int * gray; } ;
typedef TYPE_2__ global_State ;
struct TYPE_20__ {int value; } ;
struct TYPE_22__ {TYPE_1__ u; int * v; } ;
typedef TYPE_3__ UpVal ;
typedef int Table ;
struct TYPE_23__ {int * env; int * metatable; } ;
struct TYPE_19__ {int tt; } ;
struct TYPE_18__ {int * gclist; } ;
struct TYPE_17__ {int * gclist; } ;
struct TYPE_16__ {int * gclist; } ;
struct TYPE_15__ {int * gclist; } ;
typedef int GCObject ;
 TYPE_14__* FUNC_0 (int *) ;
 TYPE_13__* FUNC_1 (int *) ;
 TYPE_12__* FUNC_2 (int *) ;
 TYPE_11__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_10__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (int *) ;
 TYPE_3__* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int **) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17 (global_State *VAR_0, GCObject *VAR_1) {
  lu_mem VAR_2;
  FUNC_16(VAR_1);
  switch (FUNC_0(VAR_1)->tt) {
    case 132:
    case 134: {
      VAR_2 = FUNC_14(FUNC_6(VAR_1));
      break;
    }
    case 128: {
      Table *VAR_3 = FUNC_7(VAR_1)->metatable;
      FUNC_12(VAR_0, VAR_3);
      FUNC_12(VAR_0, FUNC_7(VAR_1)->env);
      VAR_2 = FUNC_15(FUNC_7(VAR_1));
      break;
    }
    case 129: {
      UpVal *VAR_4 = FUNC_8(VAR_1);
      FUNC_13(VAR_0, VAR_4->v);
      if (VAR_4->v != &VAR_4->u.value)
        return;
      VAR_2 = sizeof(UpVal);
      break;
    }
    case 135: {
      FUNC_2(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      return;
    }
    case 136: {
      FUNC_1(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      return;
    }
    case 131: {
      FUNC_10(FUNC_4(VAR_1), &VAR_0->gray);
      return;
    }
    case 130: {
      FUNC_5(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      return;
    }
    case 133: {
      FUNC_3(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      return;
    }
    default: FUNC_11(0); return;
  }
  FUNC_9(VAR_1);
  VAR_0->GCmemtrav += VAR_2;
}
