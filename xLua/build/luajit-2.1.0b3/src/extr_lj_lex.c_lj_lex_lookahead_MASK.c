
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lookahead; int lookaheadval; } ;
typedef scalar_t__ LexToken ;
typedef TYPE_1__ LexState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int) ;

LexToken FUNC_2(LexState *VAR_1)
{
  FUNC_1(VAR_1->lookahead == VAR_0);
  VAR_1->lookahead = FUNC_0(VAR_1, &VAR_1->lookaheadval);
  return VAR_1->lookahead;
}
