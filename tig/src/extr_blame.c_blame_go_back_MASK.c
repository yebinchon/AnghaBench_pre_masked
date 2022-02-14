
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lineno; } ;
struct view {TYPE_2__ pos; TYPE_1__* env; } ;
struct blame_history_state {int filename; int id; } ;
struct TYPE_3__ {int goto_lineno; int file; int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,struct blame_history_state*) ;
 int FUNC_1 (struct view*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct view *VAR_1)
{
 struct blame_history_state VAR_2;

 if (!FUNC_0(&VAR_0, &VAR_1->pos, &VAR_2)) {
  FUNC_2("Already at start of history");
  return;
 }

 FUNC_3(VAR_1->env->ref, VAR_2.id);
 FUNC_4(VAR_1->env->file, VAR_2.filename, FUNC_5(VAR_2.filename));
 VAR_1->env->goto_lineno = VAR_1->pos.lineno;
 FUNC_1(VAR_1);
}
