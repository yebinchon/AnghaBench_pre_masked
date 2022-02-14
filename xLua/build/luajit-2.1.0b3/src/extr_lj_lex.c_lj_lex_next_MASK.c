
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lookahead; scalar_t__ tok; int lookaheadval; int tokval; int linenumber; int lastline; } ;
typedef TYPE_1__ LexState ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(LexState *VAR_1)
{
  VAR_1->lastline = VAR_1->linenumber;
  if (FUNC_0(VAR_1->lookahead == VAR_0)) {
    VAR_1->tok = FUNC_1(VAR_1, &VAR_1->tokval);
  } else {
    VAR_1->tok = VAR_1->lookahead;
    VAR_1->lookahead = VAR_0;
    VAR_1->tokval = VAR_1->lookaheadval;
  }
}
