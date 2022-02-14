
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
struct TYPE_11__ {int ctypeid; } ;
typedef int TValue ;
typedef int MMS ;
typedef int CTypeID ;
typedef int CType ;
typedef int CTState ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_9__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ,char const*,char const*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (TYPE_1__*,int *,int *) ;
 int * FUNC_8 (TYPE_1__*,int *,int *) ;
 char* FUNC_9 (int *) ;
 char const* FUNC_10 (int *) ;
 char* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(lua_State *VAR_4, CTState *VAR_5, CType *VAR_6, MMS VAR_7)
{
  CTypeID VAR_8 = FUNC_2(VAR_5, VAR_6);
  cTValue *VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_7);
  TValue *VAR_10 = VAR_4->base;
  if (!VAR_9) {
    const char *VAR_11;
  err_index:
    VAR_11 = FUNC_11(FUNC_4(VAR_4, VAR_8, ((void*)0)));
    if (FUNC_15(VAR_4->base+1)) {
      FUNC_5(VAR_4, VAR_1, VAR_11, FUNC_10(VAR_4->base+1));
    } else {
      const char *VAR_12 = FUNC_12(VAR_4->base+1) ?
 FUNC_11(FUNC_4(VAR_4, FUNC_0(VAR_4->base+1)->ctypeid, ((void*)0))) :
 FUNC_9(VAR_4->base+1);
      FUNC_5(VAR_4, VAR_0, VAR_11, VAR_12);
    }
  }
  if (!FUNC_13(VAR_9)) {
    if (VAR_7 == VAR_3) {
      cTValue *VAR_13 = FUNC_7(VAR_4, VAR_9, VAR_10+1);
      if (VAR_13) {
 if (FUNC_14(VAR_13)) goto err_index;
 FUNC_1(VAR_4, VAR_4->top-1, VAR_13);
 return 1;
      }
    } else {
      TValue *VAR_14 = FUNC_8(VAR_4, VAR_9, VAR_10+1);
      if (VAR_14) {
 FUNC_1(VAR_4, VAR_14, VAR_10+2);
 return 0;
      }
    }
    FUNC_1(VAR_4, VAR_10, VAR_4->top);
    VAR_9 = VAR_4->top-1-VAR_2;
  }
  return FUNC_6(VAR_4, VAR_9);
}
