
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ConsControl {int dummy; } ;
struct TYPE_7__ {int token; } ;
struct TYPE_8__ {TYPE_1__ t; } ;
typedef TYPE_2__ LexState ;



 int FUNC_0 (TYPE_2__*,struct ConsControl*) ;
 char FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,struct ConsControl*) ;

__attribute__((used)) static void FUNC_3 (LexState *VAR_0, struct ConsControl *VAR_1) {

  switch(VAR_0->t.token) {
    case 128: {
      if (FUNC_1(VAR_0) != '=')
        FUNC_0(VAR_0, VAR_1);
      else
        FUNC_2(VAR_0, VAR_1);
      break;
    }
    case '[': {
      FUNC_2(VAR_0, VAR_1);
      break;
    }
    default: {
      FUNC_0(VAR_0, VAR_1);
      break;
    }
  }
}
