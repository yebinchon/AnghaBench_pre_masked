
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_11__ {int state; int sweepstr; size_t total; size_t estimate; int nocdatafin; int debt; int mmudata; int sweep; int gray; } ;
struct TYPE_12__ {int strmask; int strnum; TYPE_1__ gc; int jit_base; int * strhash; } ;
typedef TYPE_2__ global_State ;
struct TYPE_13__ {int finalizer; } ;
typedef size_t GCSize ;


 TYPE_2__* FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;






 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 TYPE_7__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,size_t) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int) ;
 int * FUNC_11 (int ,int ) ;
 size_t FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static size_t FUNC_15(lua_State *VAR_6)
{
  global_State *VAR_7 = FUNC_0(VAR_6);
  switch (VAR_7->gc.state) {
  case 131:
    FUNC_5(VAR_7);
    return 0;
  case 130:
    if (FUNC_7(VAR_7->gc.gray) != ((void*)0))
      return FUNC_12(VAR_7);
    VAR_7->gc.state = 133;
    return 0;
  case 133:
    if (FUNC_14(VAR_7->jit_base))
      return VAR_4;
    FUNC_1(VAR_7, VAR_6);
    VAR_7->gc.state = 128;
    VAR_7->gc.sweepstr = 0;
    return 0;
  case 128: {
    GCSize VAR_8 = VAR_7->gc.total;
    FUNC_4(VAR_7, &VAR_7->strhash[VAR_7->gc.sweepstr++]);
    if (VAR_7->gc.sweepstr > VAR_7->strmask)
      VAR_7->gc.state = 129;
    FUNC_10(VAR_8 >= VAR_7->gc.total);
    VAR_7->gc.estimate -= VAR_8 - VAR_7->gc.total;
    return VAR_2;
    }
  case 129: {
    GCSize VAR_9 = VAR_7->gc.total;
    FUNC_13(VAR_7->gc.sweep, FUNC_6(VAR_7, FUNC_11(VAR_7->gc.sweep, VAR_1), VAR_3));
    FUNC_10(VAR_9 >= VAR_7->gc.total);
    VAR_7->gc.estimate -= VAR_9 - VAR_7->gc.total;
    if (FUNC_7(*FUNC_11(VAR_7->gc.sweep, VAR_1)) == ((void*)0)) {
      if (VAR_7->strnum <= (VAR_7->strmask >> 2) && VAR_7->strmask > VAR_5*2-1)
 FUNC_8(VAR_6, VAR_7->strmask >> 1);
      if (FUNC_7(VAR_7->gc.mmudata)) {
 VAR_7->gc.state = 132;



      } else {
 VAR_7->gc.state = 131;
 VAR_7->gc.debt = 0;
      }
    }
    return VAR_3*VAR_2;
    }
  case 132:
    if (FUNC_7(VAR_7->gc.mmudata) != ((void*)0)) {
      if (FUNC_14(VAR_7->jit_base))
 return VAR_4;
      FUNC_3(VAR_6);
      if (VAR_7->gc.estimate > VAR_0)
 VAR_7->gc.estimate -= VAR_0;
      return VAR_0;
    }



    VAR_7->gc.state = 131;
    VAR_7->gc.debt = 0;
    return 0;
  default:
    FUNC_10(0);
    return 0;
  }
}
