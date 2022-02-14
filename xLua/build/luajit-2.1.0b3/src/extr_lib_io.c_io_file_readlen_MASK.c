
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_10__ {int strempty; } ;
typedef scalar_t__ MSize ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int,scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*,char*,size_t) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_1, FILE *VAR_2, MSize VAR_3)
{
  if (VAR_3) {
    char *VAR_4 = FUNC_3(VAR_1, VAR_3);
    MSize VAR_5 = (MSize)FUNC_1(VAR_4, 1, VAR_3, VAR_2);
    FUNC_6(VAR_1, VAR_1->top++, FUNC_5(VAR_1, VAR_4, (size_t)VAR_5));
    FUNC_4(VAR_1);
    return (VAR_5 > 0 || VAR_3 == 0);
  } else {
    int VAR_6 = FUNC_2(VAR_2);
    FUNC_7(VAR_6, VAR_2);
    FUNC_6(VAR_1, VAR_1->top++, &FUNC_0(VAR_1)->strempty);
    return (VAR_6 != VAR_0);
  }
}
