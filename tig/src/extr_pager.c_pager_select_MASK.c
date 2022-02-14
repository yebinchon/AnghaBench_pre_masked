
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* env; int ref; } ;
struct line {scalar_t__ type; } ;
struct TYPE_2__ {int commit; int text; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct line*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct view*,int ) ;

void
FUNC_6(struct view *VAR_2, struct line *VAR_3)
{
 const char *VAR_4 = FUNC_0(VAR_3);

 FUNC_3(VAR_2->env->text, VAR_4, FUNC_4(VAR_4));

 if (VAR_3->type == VAR_0) {
  FUNC_2(VAR_2->env->commit, VAR_4);
  if (!FUNC_5(VAR_2, VAR_1))
   FUNC_1(VAR_2->ref, VAR_2->env->commit);
 }
}
