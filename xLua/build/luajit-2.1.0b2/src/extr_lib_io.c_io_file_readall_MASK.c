
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int MSize ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int,int *) ;
 char* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(lua_State *VAR_1, FILE *VAR_2)
{
  MSize VAR_3, VAR_4;
  for (VAR_3 = VAR_0, VAR_4 = 0; ; VAR_3 += VAR_3) {
    char *VAR_5 = FUNC_1(VAR_1, VAR_3);
    VAR_4 += (MSize)FUNC_0(VAR_5+VAR_4, 1, VAR_3-VAR_4, VAR_2);
    if (VAR_4 != VAR_3) {
      FUNC_4(VAR_1, VAR_1->top++, FUNC_3(VAR_1, VAR_5, (size_t)VAR_4));
      FUNC_2(VAR_1);
      return;
    }
  }
}
