
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {TYPE_1__* env; int ref; } ;
struct reference {TYPE_2__* ref; } ;
struct line {struct reference* data; } ;
struct TYPE_4__ {int name; int id; } ;
struct TYPE_3__ {int ref; int head; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (struct reference*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct view *VAR_1, struct line *VAR_2)
{
 struct reference *VAR_3 = VAR_2->data;

 if (FUNC_1(VAR_3)) {
  FUNC_2(VAR_1->ref, VAR_0);
  return;
 }
 FUNC_3(VAR_1->ref, VAR_3->ref->id);
 FUNC_3(VAR_1->env->head, VAR_3->ref->id);
 FUNC_4(VAR_1->env->ref, VAR_3->ref->name, FUNC_5(VAR_3->ref->name));
 FUNC_0(VAR_1->env, VAR_3->ref, 0);
}
