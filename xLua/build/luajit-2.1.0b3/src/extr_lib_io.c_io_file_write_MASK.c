
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * base; int * top; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
typedef scalar_t__ MSize ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 char* FUNC_3 (TYPE_1__*,int *,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_3, FILE *VAR_4, int VAR_5)
{
  cTValue *VAR_6;
  int VAR_7 = 1;
  for (VAR_6 = VAR_3->base+VAR_5; VAR_6 < VAR_3->top; VAR_6++) {
    MSize VAR_8;
    const char *VAR_9 = FUNC_3(VAR_3, VAR_6, &VAR_8);
    if (!VAR_9)
      FUNC_2(VAR_3, (int)(VAR_6 - VAR_3->base) + 1, VAR_2);
    VAR_7 = VAR_7 && (FUNC_1(VAR_9, 1, VAR_8, VAR_4) == VAR_8);
  }
  if (VAR_1 && VAR_7) {
    VAR_3->top = VAR_3->base+1;
    if (VAR_5 == 0)
      FUNC_5(VAR_3, VAR_3->base, FUNC_0(VAR_3, VAR_0));
    return 1;
  }
  return FUNC_4(VAR_3, VAR_7, ((void*)0));
}
