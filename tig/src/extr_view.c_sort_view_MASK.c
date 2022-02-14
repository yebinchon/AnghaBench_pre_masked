
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sort_state {int reverse; TYPE_3__* current; } ;
struct view {TYPE_3__* columns; struct sort_state sort; } ;
struct TYPE_4__ {int display; } ;
struct TYPE_5__ {TYPE_1__ id; } ;
struct TYPE_6__ {TYPE_2__ opt; struct TYPE_6__* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct view*) ;
 int FUNC_1 (struct view*,int) ;

void
FUNC_2(struct view *VAR_1, bool VAR_2)
{
 struct sort_state *VAR_3 = &VAR_1->sort;

 if (VAR_2) {
  while (1) {
   VAR_3->current = VAR_3->current->next
    ? VAR_3->current->next : VAR_1->columns;
   if (FUNC_0(VAR_1) == VAR_0 &&
       !VAR_3->current->opt.id.display)
    continue;
   break;
  }
 } else {
  VAR_3->reverse = !VAR_3->reverse;
 }

 FUNC_1(VAR_1, 0);
}
