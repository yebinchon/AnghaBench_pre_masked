
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* env; } ;
struct buffer {int data; } ;
struct TYPE_2__ {scalar_t__ goto_lineno; } ;


 int VAR_0 ;
 int FUNC_0 (struct view*,int ,int ,int *) ;
 int FUNC_1 (struct view*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_2(struct view *VAR_1, struct buffer *VAR_2, bool VAR_3)
{
 if (!VAR_2) {
  if (VAR_1->env->goto_lineno > 0) {
   FUNC_1(VAR_1, VAR_1->env->goto_lineno);
   VAR_1->env->goto_lineno = 0;
  }
  return 1;
 }

 return FUNC_0(VAR_1, VAR_2->data, VAR_0, ((void*)0));
}
