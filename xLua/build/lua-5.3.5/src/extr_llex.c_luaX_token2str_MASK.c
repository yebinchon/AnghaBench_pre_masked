
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (int ,char*,...) ;
 char** VAR_2 ;
 int FUNC_2 (int) ;

const char *FUNC_3 (LexState *VAR_3, int VAR_4) {
  if (VAR_4 < VAR_0) {
    FUNC_2(VAR_4 == FUNC_0(VAR_4));
    return FUNC_1(VAR_3->L, "'%c'", VAR_4);
  }
  else {
    const char *VAR_5 = VAR_2[VAR_4 - VAR_0];
    if (VAR_4 < VAR_1)
      return FUNC_1(VAR_3->L, "'%s'", VAR_5);
    else
      return VAR_5;
  }
}
