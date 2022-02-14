
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
struct TYPE_11__ {int size; } ;
struct TYPE_12__ {int gcstate; int GCmemtrav; int gckind; int tobefnz; int mainthread; int finobj; int GCestimate; int * gray; TYPE_1__ strt; } ;
typedef TYPE_2__ global_State ;
typedef int GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_2__*,int,int *) ;

__attribute__((used)) static lu_mem FUNC_12 (lua_State *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_2);
  switch (VAR_3->gcstate) {
    case 133: {
      VAR_3->GCmemtrav = VAR_3->strt.size * sizeof(GCObject*);
      FUNC_9(VAR_3);
      VAR_3->gcstate = 132;
      return VAR_3->GCmemtrav;
    }
    case 132: {
      VAR_3->GCmemtrav = 0;
      FUNC_5(VAR_3->gray);
      FUNC_8(VAR_3);
       if (VAR_3->gray == ((void*)0))
        VAR_3->gcstate = 135;
      return VAR_3->GCmemtrav;
    }
    case 135: {
      lu_mem VAR_4;
      FUNC_7(VAR_3);
      VAR_4 = FUNC_1(VAR_2);
      FUNC_3(VAR_2);
      VAR_3->GCestimate = FUNC_4(VAR_3); ;
      return VAR_4;
    }
    case 131: {
      return FUNC_11(VAR_2, VAR_3, 129, &VAR_3->finobj);
    }
    case 129: {
      return FUNC_11(VAR_2, VAR_3, 128, &VAR_3->tobefnz);
    }
    case 128: {
      return FUNC_11(VAR_2, VAR_3, 130, ((void*)0));
    }
    case 130: {
      FUNC_6(VAR_3, VAR_3->mainthread);
      FUNC_2(VAR_2, VAR_3);
      VAR_3->gcstate = 134;
      return 0;
    }
    case 134: {
      if (VAR_3->tobefnz && VAR_3->gckind != VAR_1) {
        int VAR_5 = FUNC_10(VAR_2);
        return (VAR_5 * VAR_0);
      }
      else {
        VAR_3->gcstate = 133;
        return 0;
      }
    }
    default: FUNC_5(0); return 0;
  }
}
