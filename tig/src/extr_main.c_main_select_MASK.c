
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* env; int ref; } ;
struct ref {int dummy; } ;
struct line {scalar_t__ type; struct commit* data; } ;
struct commit {int id; int title; } ;
struct TYPE_2__ {int commit; int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ref* FUNC_0 (struct line*,struct commit*) ;
 int FUNC_1 (TYPE_1__*,struct ref const*,int) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct view *VAR_3, struct line *VAR_4)
{
 struct commit *VAR_5 = VAR_4->data;

 if (VAR_4->type == VAR_0 || VAR_4->type == VAR_1 || VAR_4->type == VAR_2) {
  FUNC_4(VAR_3->ref, VAR_5->title, FUNC_5(VAR_5->title));
  FUNC_2(VAR_3->env->status, VAR_4->type, ((void*)0));
 } else {
  const struct ref *VAR_6 = FUNC_0(VAR_4, VAR_5);

  FUNC_3(VAR_3->ref, VAR_5->id);
  if (VAR_6)
   FUNC_1(VAR_3->env, VAR_6, 1);
 }
 FUNC_3(VAR_3->env->commit, VAR_5->id);
}
