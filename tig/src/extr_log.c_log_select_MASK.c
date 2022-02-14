
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int ref; TYPE_1__* env; struct log_state* private; } ;
struct log_state {int last_lineno; scalar_t__ last_type; } ;
struct line {int lineno; scalar_t__ type; } ;
struct TYPE_2__ {int commit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct line* FUNC_1 (struct view*,struct line*,scalar_t__) ;
 int FUNC_2 (struct view*,struct line*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct view*,int ) ;

__attribute__((used)) static void
FUNC_5(struct view *VAR_2, struct line *VAR_3)
{
 struct log_state *VAR_4 = VAR_2->private;
 int VAR_5 = VAR_4->last_lineno;

 if (!VAR_5 || FUNC_0(VAR_5 - VAR_3->lineno) > 1
     || (VAR_4->last_type == VAR_0 && VAR_5 > VAR_3->lineno)) {
  struct line *VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0);

  if (VAR_6)
   FUNC_2(VAR_2, VAR_6);
 }

 if (VAR_3->type == VAR_0 && !FUNC_4(VAR_2, VAR_1))
  FUNC_2(VAR_2, VAR_3);
 FUNC_3(VAR_2->env->commit, VAR_2->ref);
 VAR_4->last_lineno = VAR_3->lineno;
 VAR_4->last_type = VAR_3->type;
}
