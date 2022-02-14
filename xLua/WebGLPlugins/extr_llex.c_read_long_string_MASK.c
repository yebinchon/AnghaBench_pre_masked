
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int linenumber; int current; int buff; int L; } ;
struct TYPE_13__ {int ts; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char const*,int ) ;
 char* FUNC_3 (int ,char*,char const*,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,char) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_12 (LexState *VAR_1, SemInfo *VAR_2, int VAR_3) {
  int VAR_4 = VAR_1->linenumber;
  FUNC_10(VAR_1);
  if (FUNC_0(VAR_1))
    FUNC_1(VAR_1);
  for (;;) {
    switch (VAR_1->current) {
      case 128: {
        const char *VAR_5 = (VAR_2 ? "string" : "comment");
        const char *VAR_6 = FUNC_3(VAR_1->L,
                     "unfinished long %s (starting at line %d)", VAR_5, VAR_4);
        FUNC_2(VAR_1, VAR_6, VAR_0);
        break;
      }
      case ']': {
        if (FUNC_11(VAR_1) == VAR_3) {
          FUNC_10(VAR_1);
          goto endloop;
        }
        break;
      }
      case '\n': case '\r': {
        FUNC_9(VAR_1, '\n');
        FUNC_1(VAR_1);
        if (!VAR_2) FUNC_7(VAR_1->buff);
        break;
      }
      default: {
        if (VAR_2) FUNC_10(VAR_1);
        else FUNC_8(VAR_1);
      }
    }
  } endloop:
  if (VAR_2)
    VAR_2->ts = FUNC_4(VAR_1, FUNC_5(VAR_1->buff) + (2 + VAR_3),
                                     FUNC_6(VAR_1->buff) - 2*(2 + VAR_3));
}
