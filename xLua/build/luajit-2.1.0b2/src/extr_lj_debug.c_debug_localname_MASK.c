
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int * top; int stack; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_10__ {scalar_t__ i_ci; } ;
typedef TYPE_2__ lua_Debug ;
struct TYPE_11__ {int flags; int numparams; } ;
typedef int TValue ;
typedef TYPE_3__ GCproto ;
typedef int GCfunc ;
typedef int BCReg ;
typedef scalar_t__ BCPos ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int *) ;
 char* FUNC_1 (TYPE_3__*,scalar_t__,int) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static TValue *FUNC_7(lua_State *VAR_3, const lua_Debug *VAR_4,
          const char **VAR_5, BCReg VAR_6)
{
  uint32_t VAR_7 = (uint32_t)VAR_4->i_ci & 0xffff;
  uint32_t VAR_8 = (uint32_t)VAR_4->i_ci >> 16;
  TValue *VAR_9 = FUNC_6(VAR_3->stack) + VAR_7;
  TValue *VAR_10 = VAR_8 ? VAR_9 + VAR_8 : ((void*)0);
  GCfunc *VAR_11 = FUNC_2(VAR_9);
  BCPos VAR_12 = FUNC_0(VAR_3, VAR_11, VAR_10);
  if (!VAR_10) VAR_10 = VAR_3->top+VAR_0;
  if ((int)VAR_6 < 0) {
    if (VAR_12 != VAR_1) {
      GCproto *VAR_13 = FUNC_5(VAR_11);
      if ((VAR_13->flags & VAR_2)) {
 VAR_6 = VAR_13->numparams + (BCReg)(-(int)VAR_6);
 if (FUNC_3(VAR_9)) {
   VAR_10 = VAR_9;
   VAR_9 = FUNC_4(VAR_9);
 }
 if (VAR_9 + VAR_6+VAR_0 < VAR_10) {
   *VAR_5 = "(*vararg)";
   return VAR_9+VAR_6;
 }
      }
    }
    return ((void*)0);
  }
  if (VAR_12 != VAR_1 &&
      (*VAR_5 = FUNC_1(FUNC_5(VAR_11), VAR_12, VAR_6-1)) != ((void*)0))
    ;
  else if (VAR_6 > 0 && VAR_9 + VAR_6+VAR_0 < VAR_10)
    *VAR_5 = "(*temporary)";
  return VAR_9+VAR_6;
}
