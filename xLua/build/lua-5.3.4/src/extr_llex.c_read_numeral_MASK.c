
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int current; int buff; } ;
struct TYPE_9__ {int r; int i; } ;
typedef int TValue ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13 (LexState *VAR_2, SemInfo *VAR_3) {
  TValue VAR_4;
  const char *VAR_5 = "Ee";
  int VAR_6 = VAR_2->current;
  FUNC_8(FUNC_4(VAR_2->current));
  FUNC_10(VAR_2);
  if (VAR_6 == '0' && FUNC_0(VAR_2, "xX"))
    VAR_5 = "Pp";
  for (;;) {
    if (FUNC_0(VAR_2, VAR_5))
      FUNC_0(VAR_2, "-+");
    if (FUNC_5(VAR_2->current))
      FUNC_10(VAR_2);
    else if (VAR_2->current == '.')
      FUNC_10(VAR_2);
    else break;
  }
  FUNC_9(VAR_2, '\0');
  if (FUNC_6(FUNC_7(VAR_2->buff), &VAR_4) == 0)
    FUNC_3(VAR_2, "malformed number", VAR_0);
  if (FUNC_12(&VAR_4)) {
    VAR_3->i = FUNC_2(&VAR_4);
    return VAR_1;
  }
  else {
    FUNC_8(FUNC_11(&VAR_4));
    VAR_3->r = FUNC_1(&VAR_4);
    return VAR_0;
  }
}
