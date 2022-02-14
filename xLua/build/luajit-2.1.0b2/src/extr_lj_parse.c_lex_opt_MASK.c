
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tok; } ;
typedef scalar_t__ LexToken ;
typedef TYPE_1__ LexState ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(LexState *VAR_0, LexToken VAR_1)
{
  if (VAR_0->tok == VAR_1) {
    FUNC_0(VAR_0);
    return 1;
  }
  return 0;
}
