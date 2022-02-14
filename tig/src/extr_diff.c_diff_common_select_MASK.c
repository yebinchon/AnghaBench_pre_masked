
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {TYPE_2__* ops; int ref; TYPE_1__* env; } ;
struct line {scalar_t__ type; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {scalar_t__* blob; scalar_t__ goto_lineno; scalar_t__ lineno; int file; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct line* FUNC_0 (struct view*,struct line*) ;
 scalar_t__ FUNC_1 (struct view*,struct line*) ;
 char* FUNC_2 (struct view*,struct line*) ;
 char const* FUNC_3 (struct view*,int ) ;
 int FUNC_4 (struct view*,struct line*) ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct view *VAR_2, struct line *VAR_3, const char *VAR_4)
{
 if (VAR_3->type == VAR_0) {
  struct line *VAR_5 = FUNC_0(VAR_2, VAR_3);
  if (VAR_5) {
   const char *VAR_6 = FUNC_2(VAR_2, VAR_5);

   if (VAR_6) {
    FUNC_5(VAR_2->env->file, "%s", VAR_6);
    VAR_2->env->lineno = VAR_2->env->goto_lineno = 0;
    VAR_2->env->blob[0] = 0;
   }
  }

  FUNC_5(VAR_2->ref, "Press '%s' to jump to file diff",
         FUNC_3(VAR_2, VAR_1));
 } else {
  const char *VAR_7 = FUNC_2(VAR_2, VAR_3);

  if (VAR_7) {
   if (VAR_4)
    FUNC_5(VAR_2->ref, "%s to '%s'", VAR_4, VAR_7);
   FUNC_5(VAR_2->env->file, "%s", VAR_7);
   VAR_2->env->lineno = VAR_2->env->goto_lineno = FUNC_1(VAR_2, VAR_3);
   VAR_2->env->blob[0] = 0;
  } else {
   FUNC_6(VAR_2->ref, VAR_2->ops->id, FUNC_7(VAR_2->ops->id));
   FUNC_4(VAR_2, VAR_3);
  }
 }
}
