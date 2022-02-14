
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int GCtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char const*) ;
 int * FUNC_1 (TYPE_1__*,int ,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int,char const*) ;
 int FUNC_4 (TYPE_1__*,int,char const*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int *) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static GCtab *FUNC_8(lua_State *VAR_3, const char *VAR_4, int VAR_5)
{
  if (VAR_4) {
    FUNC_1(VAR_3, VAR_2, "_LOADED", 16);
    FUNC_3(VAR_3, -1, VAR_4);
    if (!FUNC_7(VAR_3->top-1)) {
      VAR_3->top--;
      if (FUNC_1(VAR_3, VAR_1, VAR_4, VAR_5) != ((void*)0))
 FUNC_0(VAR_3, VAR_0, VAR_4);
      FUNC_5(VAR_3, VAR_3->top, FUNC_6(VAR_3->top-1));
      VAR_3->top++;
      FUNC_4(VAR_3, -3, VAR_4);
    }
    VAR_3->top--;
    FUNC_5(VAR_3, VAR_3->top-1, FUNC_6(VAR_3->top));
  } else {
    FUNC_2(VAR_3, 0, VAR_5);
  }
  return FUNC_6(VAR_3->top-1);
}
