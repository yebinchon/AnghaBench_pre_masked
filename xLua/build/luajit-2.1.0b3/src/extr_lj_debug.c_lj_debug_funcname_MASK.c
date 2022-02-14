
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int stack; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
struct TYPE_10__ {scalar_t__ sizebc; } ;
typedef scalar_t__ MMS ;
typedef TYPE_2__ GCproto ;
typedef int GCfunc ;
typedef int BCReg ;
typedef scalar_t__ BCPos ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (int,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int *) ;
 char const* FUNC_11 (TYPE_2__*,int const*,int,char const**) ;
 int FUNC_12 (int ,scalar_t__) ;
 int * FUNC_13 (TYPE_2__*) ;
 char* FUNC_14 (int ) ;
 int * FUNC_15 (int ) ;

const char *FUNC_16(lua_State *VAR_5, cTValue *VAR_6, const char **VAR_7)
{
  cTValue *VAR_8;
  GCfunc *VAR_9;
  BCPos VAR_10;
  if (VAR_6 <= FUNC_15(VAR_5->stack)+VAR_1)
    return ((void*)0);
  if (FUNC_7(VAR_6))
    VAR_6 = FUNC_9(VAR_6);
  VAR_8 = FUNC_8(VAR_6);
  VAR_9 = FUNC_6(VAR_8);
  VAR_10 = FUNC_5(VAR_5, VAR_9, VAR_6);
  if (VAR_10 != VAR_4) {
    GCproto *VAR_11 = FUNC_10(VAR_9);
    const BCIns *VAR_12 = &FUNC_13(VAR_11)[FUNC_4(VAR_10 < VAR_11->sizebc, VAR_10)];
    MMS VAR_13 = FUNC_3(FUNC_2(*VAR_12));
    if (VAR_13 == VAR_3) {
      BCReg VAR_14 = FUNC_1(*VAR_12);
      if (FUNC_2(*VAR_12) == VAR_0) VAR_14 -= 3;
      return FUNC_11(VAR_11, VAR_12, VAR_14, VAR_7);
    } else if (VAR_13 != VAR_2) {
      *VAR_7 = FUNC_14(FUNC_12(FUNC_0(VAR_5), VAR_13));
      return "metamethod";
    }
  }
  return ((void*)0);
}
