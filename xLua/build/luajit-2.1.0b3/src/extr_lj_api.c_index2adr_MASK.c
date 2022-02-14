
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_16__ {int env; int * top; int * base; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_15__ {int nupvalues; int * upvalue; int env; int gct; } ;
struct TYPE_17__ {TYPE_1__ c; } ;
struct TYPE_14__ {int tmptv; } ;
typedef int TValue ;
typedef TYPE_3__ GCfunc ;


 TYPE_12__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static TValue *FUNC_8(lua_State *VAR_4, int VAR_5)
{
  if (VAR_5 > 0) {
    TValue *VAR_6 = VAR_4->base + (VAR_5 - 1);
    return VAR_6 < VAR_4->top ? VAR_6 : FUNC_4(VAR_4);
  } else if (VAR_5 > VAR_3) {
    FUNC_1(VAR_4, VAR_5 != 0 && -VAR_5 <= VAR_4->top - VAR_4->base);
    return VAR_4->top + VAR_5;
  } else if (VAR_5 == VAR_2) {
    TValue *VAR_7 = &FUNC_0(VAR_4)->tmptv;
    FUNC_6(VAR_4, VAR_7, FUNC_7(VAR_4->env));
    return VAR_7;
  } else if (VAR_5 == VAR_3) {
    return FUNC_5(VAR_4);
  } else {
    GCfunc *VAR_8 = FUNC_2(VAR_4);
    FUNC_1(VAR_4, VAR_8->c.gct == ~VAR_0 && !FUNC_3(VAR_8));
    if (VAR_5 == VAR_1) {
      TValue *VAR_9 = &FUNC_0(VAR_4)->tmptv;
      FUNC_6(VAR_4, VAR_9, FUNC_7(VAR_8->c.env));
      return VAR_9;
    } else {
      VAR_5 = VAR_2 - VAR_5;
      return VAR_5 <= VAR_8->c.nupvalues ? &VAR_8->c.upvalue[VAR_5-1] : FUNC_4(VAR_4);
    }
  }
}
