
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct position {int dummy; } ;
struct view_state {struct position position; int data; struct view_state* prev; } ;
struct view_history {int state_alloc; struct view_state* stack; struct position position; } ;


 int FUNC_0 (struct view_state*) ;
 int FUNC_1 (void*,int ,int ) ;
 scalar_t__ FUNC_2 (struct view_history*) ;

bool
FUNC_3(struct view_history *VAR_0, struct position *VAR_1, void *VAR_2)
{
 struct view_state *VAR_3 = VAR_0->stack;

 if (FUNC_2(VAR_0))
  return 0;

 VAR_0->position = VAR_3->position;
 VAR_0->stack = VAR_3->prev;

 if (VAR_2 && VAR_0->state_alloc)
  FUNC_1(VAR_2, VAR_3->data, VAR_0->state_alloc);
 if (VAR_1)
  *VAR_1 = VAR_3->position;

 FUNC_0(VAR_3);
 return 1;
}
