
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* env; int ref; } ;
struct line {int dummy; } ;
struct grep_line {scalar_t__ lineno; int * file; } ;
struct TYPE_2__ {scalar_t__ lineno; int file; scalar_t__* ref; } ;


 struct grep_line* FUNC_0 (struct line*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct view *VAR_0, struct line *VAR_1)
{
 struct grep_line *VAR_2 = FUNC_0(VAR_1);

 if (!*VAR_2->file)
  return;
 VAR_0->env->ref[0] = 0;
 FUNC_1(VAR_0->env->file, VAR_2->file, FUNC_2(VAR_2->file));
 FUNC_1(VAR_0->ref, VAR_2->file, FUNC_2(VAR_2->file));
 VAR_0->env->lineno = VAR_2->lineno + 1;
}
