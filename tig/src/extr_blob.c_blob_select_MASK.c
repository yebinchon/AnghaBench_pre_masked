
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lineno; } ;
struct view {TYPE_2__ pos; TYPE_1__* env; struct blob_state* private; } ;
struct line {int dummy; } ;
struct blob_state {scalar_t__ file; } ;
struct TYPE_3__ {scalar_t__ lineno; int file; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct view *VAR_0, struct line *VAR_1)
{
 struct blob_state *VAR_2 = VAR_0->private;

 if (VAR_2->file)
  FUNC_0(VAR_0->env->file, "%s", VAR_2->file);
 VAR_0->env->lineno = VAR_0->pos.lineno + 1;
}
