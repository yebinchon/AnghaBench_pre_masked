
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_8__ {scalar_t__ udtype; } ;
typedef int TValue ;
typedef int CLibrary ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static TValue *FUNC_7(lua_State *VAR_3)
{
  TValue *VAR_4 = VAR_3->base;
  CLibrary *VAR_5;
  if (!(VAR_4 < VAR_3->top && FUNC_4(VAR_4) && FUNC_5(VAR_4)->udtype == VAR_2))
    FUNC_1(VAR_3, 1, VAR_1);
  VAR_5 = (CLibrary *)FUNC_6(FUNC_5(VAR_4));
  if (!(VAR_4+1 < VAR_3->top && FUNC_3(VAR_4+1)))
    FUNC_1(VAR_3, 2, VAR_0);
  return FUNC_0(VAR_3, VAR_5, FUNC_2(VAR_4+1));
}
