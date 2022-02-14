
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct graph_v2 {TYPE_1__ next_row; TYPE_1__ row; TYPE_1__ prev_row; } ;


 int FUNC_0 (struct graph_v2*,TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_1 (struct graph_v2*) ;

__attribute__((used)) static bool
FUNC_2(struct graph_v2 *VAR_0)
{
 while (FUNC_1(VAR_0)) {
  if (!FUNC_0(VAR_0, &VAR_0->prev_row, VAR_0->prev_row.size, ((void*)0)))
   return 0;

  if (!FUNC_0(VAR_0, &VAR_0->row, VAR_0->row.size, ((void*)0)))
   return 0;

  if (!FUNC_0(VAR_0, &VAR_0->next_row, VAR_0->next_row.size, ((void*)0)))
   return 0;
 }

 return 1;
}
