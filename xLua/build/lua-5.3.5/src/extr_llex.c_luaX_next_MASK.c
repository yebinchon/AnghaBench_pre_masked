
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ token; int seminfo; } ;
struct TYPE_6__ {TYPE_1__ t; TYPE_1__ lookahead; int linenumber; int lastline; } ;
typedef TYPE_2__ LexState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;

void FUNC_1 (LexState *VAR_1) {
  VAR_1->lastline = VAR_1->linenumber;
  if (VAR_1->lookahead.token != VAR_0) {
    VAR_1->t = VAR_1->lookahead;
    VAR_1->lookahead.token = VAR_0;
  }
  else
    VAR_1->t.token = FUNC_0(VAR_1, &VAR_1->t.seminfo);
}
