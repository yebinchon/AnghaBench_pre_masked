
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
struct TYPE_7__ {int size; int * hash; } ;
struct TYPE_8__ {int gcstate; int GCmemtrav; int GCestimate; int sweepstrgc; int mainthread; int ** sweepgc; int ** sweepfin; TYPE_1__ strt; int gray; } ;
typedef TYPE_2__ global_State ;
typedef int GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 void* FUNC_9 (int *,int **,int) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static lu_mem FUNC_11 (lua_State *VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_3);
  switch (VAR_4->gcstate) {
    case 132: {

      VAR_4->GCmemtrav = VAR_4->strt.size * sizeof(GCObject*);
      FUNC_5(!FUNC_4(VAR_4));
      FUNC_8(VAR_4);
      VAR_4->gcstate = 131;
      return VAR_4->GCmemtrav;
    }
    case 131: {
      if (VAR_4->gray) {
        lu_mem VAR_5 = VAR_4->GCmemtrav;
        FUNC_7(VAR_4);
        return VAR_4->GCmemtrav - VAR_5;
      }
      else {
        lu_mem VAR_6;
        int VAR_7;
        VAR_4->gcstate = VAR_2;
        VAR_4->GCestimate = VAR_4->GCmemtrav; ;
        VAR_6 = FUNC_1(VAR_3);
        VAR_4->GCestimate += VAR_6;
        VAR_7 = FUNC_3(VAR_3);
        return VAR_6 + VAR_7 * VAR_0;
      }
    }
    case 129: {
      int VAR_8;
      for (VAR_8 = 0; VAR_8 < VAR_1 && VAR_4->sweepstrgc + VAR_8 < VAR_4->strt.size; VAR_8++)
        FUNC_10(VAR_3, &VAR_4->strt.hash[VAR_4->sweepstrgc + VAR_8]);
      VAR_4->sweepstrgc += VAR_8;
      if (VAR_4->sweepstrgc >= VAR_4->strt.size)
        VAR_4->gcstate = 128;
      return VAR_8 * VAR_0;
    }
    case 128: {
      if (VAR_4->sweepfin) {
        VAR_4->sweepfin = FUNC_9(VAR_3, VAR_4->sweepfin, VAR_1);
        return VAR_1*VAR_0;
      }
      else {
        VAR_4->gcstate = 130;
        return 0;
      }
    }
    case 130: {
      if (VAR_4->sweepgc) {
        VAR_4->sweepgc = FUNC_9(VAR_3, VAR_4->sweepgc, VAR_1);
        return VAR_1*VAR_0;
      }
      else {

        GCObject *VAR_9 = FUNC_6(VAR_4->mainthread);
        FUNC_9(VAR_3, &VAR_9, 1);
        FUNC_2(VAR_3);
        VAR_4->gcstate = 132;
        return VAR_0;
      }
    }
    default: FUNC_5(0); return 0;
  }
}
