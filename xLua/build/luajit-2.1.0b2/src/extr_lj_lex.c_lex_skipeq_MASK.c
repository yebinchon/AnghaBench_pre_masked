
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char c; } ;
typedef TYPE_1__ LexState ;
typedef char LexChar ;


 char FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(LexState *VAR_0)
{
  int VAR_1 = 0;
  LexChar VAR_2 = VAR_0->c;
  FUNC_1(VAR_2 == '[' || VAR_2 == ']');
  while (FUNC_0(VAR_0) == '=')
    VAR_1++;
  return (VAR_0->c == VAR_2) ? VAR_1 : (-VAR_1) - 1;
}
