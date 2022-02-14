
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int base; int * top; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
typedef int TValue ;
typedef int MMS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int * FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int * FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(lua_State *VAR_5, MMS VAR_6)
{
  TValue *VAR_7 = FUNC_4(VAR_5, 1);
  cTValue *VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_6);
  if ((VAR_1 || FUNC_10(VAR_7)) && !FUNC_11(VAR_8)) {
    VAR_5->top = VAR_7+1;
    FUNC_1(VAR_5, VAR_5->base-1-VAR_2, VAR_8);
    return VAR_0;
  } else {
    if (!FUNC_12(VAR_7)) FUNC_3(VAR_5, 1, VAR_3);
    if (VAR_2) { FUNC_1(VAR_5, *(VAR_7-1), VAR_7); VAR_7--; }
    FUNC_7(VAR_5, VAR_7-1, FUNC_2(FUNC_5(VAR_5, 1)));
    if (VAR_6 == VAR_4) FUNC_9(VAR_7+1); else FUNC_8(VAR_7+1, 0);
    return FUNC_0(3);
  }
}
