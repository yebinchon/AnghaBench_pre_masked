
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* chain; scalar_t__ pc; scalar_t__ startpc; scalar_t__ tailcalled; scalar_t__* param; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_7__ {scalar_t__ prev; scalar_t__ op1; } ;
typedef scalar_t__ IRRef ;
typedef int GCproto ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(jit_State *VAR_4, GCproto *VAR_5)
{
  IRRef VAR_6;
  for (VAR_6 = VAR_4->chain[VAR_0]; VAR_6; VAR_6 = FUNC_0(VAR_6)->prev)
    if (FUNC_1(FUNC_0(VAR_6)) == FUNC_3(VAR_5)) {
      int VAR_7 = 0;
      IRRef VAR_8;
      for (VAR_8 = VAR_4->chain[VAR_1]; VAR_8; VAR_8 = FUNC_0(VAR_8)->prev)
 if (FUNC_0(VAR_8)->op1 == VAR_6)
   VAR_7++;
      if (VAR_7) {
 if (VAR_4->pc == VAR_4->startpc) {
   if (VAR_7 + VAR_4->tailcalled > VAR_4->param[VAR_2])
     return 1;
 } else {
   FUNC_2(VAR_4, VAR_3);
 }
      }
    }
  return 0;
}
