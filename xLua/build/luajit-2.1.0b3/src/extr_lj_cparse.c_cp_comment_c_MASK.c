
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char c; } ;
typedef TYPE_1__ CPState ;


 char FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(CPState *VAR_0)
{
  do {
    if (FUNC_0(VAR_0) == '*') {
      do {
 if (FUNC_0(VAR_0) == '/') { FUNC_0(VAR_0); return; }
      } while (VAR_0->c == '*');
    }
    if (FUNC_1(VAR_0->c)) FUNC_2(VAR_0);
  } while (VAR_0->c != '\0');
}
