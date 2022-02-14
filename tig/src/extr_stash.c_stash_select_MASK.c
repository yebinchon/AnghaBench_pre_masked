
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* env; int ref; } ;
struct line {scalar_t__ lineno; } ;
struct TYPE_2__ {int stash; } ;


 int FUNC_0 (struct view*,struct line*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct view *VAR_0, struct line *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0->env->stash, "stash@{%d}", VAR_1->lineno - 1);
 FUNC_1(VAR_0->ref, VAR_0->env->stash);
}
