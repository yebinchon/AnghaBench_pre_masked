
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int linenumber; int L; } ;
typedef TYPE_1__ LexState ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5 (LexState *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  if (!FUNC_4(VAR_0, VAR_1)) {
    if (VAR_3 == VAR_0->linenumber)
      FUNC_0(VAR_0, VAR_1);
    else {
      FUNC_2(VAR_0, FUNC_1(VAR_0->L,
             "%s expected (to close %s at line %d)",
              FUNC_3(VAR_0, VAR_1), FUNC_3(VAR_0, VAR_2), VAR_3));
    }
  }
}
