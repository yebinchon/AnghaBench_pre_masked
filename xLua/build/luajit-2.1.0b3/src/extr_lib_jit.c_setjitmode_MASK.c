
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ base; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_7, int VAR_8)
{
  int VAR_9 = 0;
  if (VAR_7->base == VAR_7->top || FUNC_6(VAR_7->base)) {
    VAR_8 |= VAR_3;
  } else {

    if (FUNC_5(VAR_7->base) || FUNC_7(VAR_7->base))
      VAR_9 = 1;
    else if (!FUNC_8(VAR_7->base))
      goto err;
    if (VAR_7->base+1 < VAR_7->top && FUNC_4(VAR_7->base+1))
      VAR_8 |= FUNC_0(VAR_7->base+1) ? VAR_1 : VAR_2;
    else
      VAR_8 |= VAR_4;
  }
  if (FUNC_3(VAR_7, VAR_9, VAR_8) != 1) {
    if ((VAR_8 & VAR_5) == VAR_3)
      FUNC_2(VAR_7, VAR_0);
  err:
    FUNC_1(VAR_7, 1, VAR_6);
  }
  return 0;
}
