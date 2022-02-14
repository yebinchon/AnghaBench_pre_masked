
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ token; } ;
struct TYPE_7__ {TYPE_1__ t; } ;
typedef TYPE_2__ LexState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) __attribute__((always_inline)) inline
static void FUNC_2 (LexState *VAR_1) {

  while (!FUNC_0(VAR_1, 1)) {
    if (VAR_1->t.token == VAR_0) {
      FUNC_1(VAR_1);
      return;
    }
    FUNC_1(VAR_1);
  }
}
