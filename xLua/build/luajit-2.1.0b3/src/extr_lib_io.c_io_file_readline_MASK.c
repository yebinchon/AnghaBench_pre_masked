
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
 int * FUNC_0 (char*,int,int *) ;
 char* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1, FILE *VAR_2, MSize VAR_3)
{
  MSize VAR_4 = VAR_0, VAR_5 = 0, VAR_6 = 0;
  char *VAR_7;
  for (;;) {
    VAR_7 = FUNC_1(VAR_1, VAR_4);
    if (FUNC_0(VAR_7+VAR_5, VAR_4-VAR_5, VAR_2) == ((void*)0)) break;
    VAR_5 += (MSize)FUNC_5(VAR_7+VAR_5);
    VAR_6 |= VAR_5;
    if (VAR_5 && VAR_7[VAR_5-1] == '\n') { VAR_5 -= VAR_3; break; }
    if (VAR_5 >= VAR_4 - 64) VAR_4 += VAR_4;
  }
  FUNC_4(VAR_1, VAR_1->top++, FUNC_3(VAR_1, VAR_7, (size_t)VAR_5));
  FUNC_2(VAR_1);
  return (int)VAR_6;
}
