
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct position {int dummy; } ;
struct view_state {struct view_state* data; struct position position; struct view_state* prev; } ;
struct view_history {scalar_t__ state_alloc; int position; struct view_state* stack; } ;


 struct view_state* FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct view_state*,void*,scalar_t__) ;
 int FUNC_3 (struct view_state*,void*,scalar_t__) ;

struct view_state *
FUNC_4(struct view_history *VAR_0, struct position *VAR_1, void *VAR_2)
{
 struct view_state *VAR_3 = VAR_0->stack;

 if (VAR_3 && VAR_2 && VAR_0->state_alloc &&
     !FUNC_2(VAR_3->data, VAR_2, VAR_0->state_alloc))
  return ((void*)0);

 VAR_3 = FUNC_0(1, sizeof(*VAR_3) + VAR_0->state_alloc);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->prev = VAR_0->stack;
 VAR_0->stack = VAR_3;
 FUNC_1(&VAR_0->position);
 VAR_3->position = *VAR_1;
 VAR_3->data = &VAR_3[1];
 if (VAR_2 && VAR_0->state_alloc)
  FUNC_3(VAR_3->data, VAR_2, VAR_0->state_alloc);
 return VAR_3;
}
