
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status; scalar_t__ top; scalar_t__ base; int * cframe; } ;
typedef TYPE_1__ lua_State ;
typedef int MSize ;
typedef int ErrMsg ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_6, lua_State *VAR_7, int VAR_8)
{
  if (VAR_7->cframe != ((void*)0) || VAR_7->status > VAR_5 ||
      (VAR_7->status == VAR_4 && VAR_7->top == VAR_7->base)) {
    ErrMsg VAR_9 = VAR_7->cframe ? VAR_2 : VAR_1;
    if (VAR_8) FUNC_1(VAR_6, VAR_9);
    FUNC_4(VAR_6->base-1-VAR_3, 0);
    FUNC_5(VAR_6, VAR_6->base-VAR_3, FUNC_2(VAR_6, VAR_9));
    return FUNC_0(2);
  }
  FUNC_3(VAR_7, (MSize)(VAR_6->top - VAR_6->base));
  return VAR_0;
}
