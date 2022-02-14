
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ linenumber; int tok; } ;
typedef int LexToken ;
typedef TYPE_1__ LexState ;
typedef scalar_t__ BCLine ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char const*,char const*,scalar_t__) ;
 char* FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(LexState *VAR_1, LexToken VAR_2, LexToken VAR_3, BCLine VAR_4)
{
  if (!FUNC_1(VAR_1, VAR_2)) {
    if (VAR_4 == VAR_1->linenumber) {
      FUNC_0(VAR_1, VAR_2);
    } else {
      const char *VAR_5 = FUNC_3(VAR_1, VAR_2);
      const char *VAR_6 = FUNC_3(VAR_1, VAR_3);
      FUNC_2(VAR_1, VAR_1->tok, VAR_0, VAR_5, VAR_6, VAR_4);
    }
  }
}
