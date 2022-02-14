
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ top; scalar_t__ base; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 char const* FUNC_5 (TYPE_1__*,int,size_t*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static const char *FUNC_9(lua_State *VAR_1, void *VAR_2, size_t *VAR_3)
{
  FUNC_0(VAR_2);
  FUNC_3(VAR_1, 2, "too many nested functions");
  FUNC_1(VAR_1, VAR_1->top++, VAR_1->base);
  FUNC_4(VAR_1, 0, 1);
  VAR_1->top--;
  if (FUNC_6(VAR_1->top)) {
    *VAR_3 = 0;
    return ((void*)0);
  } else if (FUNC_8(VAR_1->top) || FUNC_7(VAR_1->top)) {
    FUNC_1(VAR_1, VAR_1->base+4, VAR_1->top);
    return FUNC_5(VAR_1, 5, VAR_3);
  } else {
    FUNC_2(VAR_1, VAR_0);
    return ((void*)0);
  }
}
