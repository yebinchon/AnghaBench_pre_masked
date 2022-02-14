
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {char current; int buff; int decpoint; } ;
struct TYPE_11__ {int r; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;


 int FUNC_0 (TYPE_2__*,char,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*,char) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_10 (LexState *VAR_0, SemInfo *VAR_1) {
  FUNC_6(FUNC_3(VAR_0->current));
  do {
    FUNC_8(VAR_0);
  } while (FUNC_3(VAR_0->current) || VAR_0->current == '.');
  if (FUNC_1(VAR_0, "Ee"))
    FUNC_1(VAR_0, "+-");
  while (FUNC_2(VAR_0->current) || VAR_0->current == '_')
    FUNC_8(VAR_0);
  FUNC_7(VAR_0, '\0');
  FUNC_0(VAR_0, '.', VAR_0->decpoint);
  if (!FUNC_4(FUNC_5(VAR_0->buff), &VAR_1->r))
    FUNC_9(VAR_0, VAR_1);
}
