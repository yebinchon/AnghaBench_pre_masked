
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lineno; } ;
struct view {TYPE_2__ pos; TYPE_1__* env; } ;
struct line {struct blame* data; } ;
struct blame_commit {scalar_t__ filename; int id; } ;
struct blame {struct blame_commit* commit; } ;
struct TYPE_3__ {scalar_t__ lineno; int file; int commit; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct view *VAR_0, struct line *VAR_1)
{
 struct blame *VAR_2 = VAR_1->data;
 struct blame_commit *VAR_3 = VAR_2->commit;

 if (!VAR_3)
  return;

 if (FUNC_3(VAR_3->id))
  FUNC_2(VAR_0->env->commit, "HEAD", 4);
 else
  FUNC_0(VAR_0->env->commit, VAR_3->id);

 if (VAR_3->filename)
  FUNC_1(VAR_0->env->file, "%s", VAR_3->filename);
 VAR_0->env->lineno = VAR_0->pos.lineno + 1;
}
