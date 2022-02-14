
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ top; scalar_t__ base; } ;
typedef TYPE_1__ lua_State ;
typedef int MSize ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,char*) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (scalar_t__) ;
 char* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(lua_State *VAR_3, FILE *VAR_4, int VAR_5)
{
  int VAR_6, VAR_7, VAR_8 = (int)(VAR_3->top - VAR_3->base) - VAR_5;
  FUNC_0(VAR_4);
  if (VAR_8 == 0) {
    VAR_6 = FUNC_4(VAR_3, VAR_4, 1);
    VAR_7 = VAR_5+1;
  } else {

    FUNC_8(VAR_3, VAR_8+VAR_2, "too many arguments");
    VAR_6 = 1;
    for (VAR_7 = VAR_5; VAR_8-- && VAR_6; VAR_7++) {
      if (FUNC_13(VAR_3->base+VAR_7)) {
 const char *VAR_9 = FUNC_11(VAR_3->base+VAR_7);
 if (VAR_9[0] == '*') VAR_9++;
 if (VAR_9[0] == 'n')
   VAR_6 = FUNC_5(VAR_3, VAR_4);
 else if ((VAR_9[0] & ~0x20) == 'L')
   VAR_6 = FUNC_4(VAR_3, VAR_4, (VAR_9[0] == 'l'));
 else if (VAR_9[0] == 'a')
   FUNC_2(VAR_3, VAR_4);
 else
   FUNC_6(VAR_3, VAR_7+1, VAR_0);
      } else if (FUNC_12(VAR_3->base+VAR_7)) {
 VAR_6 = FUNC_3(VAR_3, VAR_4, (MSize)FUNC_7(VAR_3, VAR_7+1));
      } else {
 FUNC_6(VAR_3, VAR_7+1, VAR_1);
      }
    }
  }
  if (FUNC_1(VAR_4))
    return FUNC_9(VAR_3, 0, ((void*)0));
  if (!VAR_6)
    FUNC_10(VAR_3->top-1);
  return VAR_7 - VAR_5;
}
