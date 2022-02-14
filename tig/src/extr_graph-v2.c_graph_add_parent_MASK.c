
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct graph_v2 {TYPE_1__ parents; scalar_t__ has_parents; } ;
struct graph {struct graph_v2* private; } ;


 int * FUNC_0 (struct graph_v2*,TYPE_1__*,int ,char const*) ;

__attribute__((used)) static bool
FUNC_1(struct graph *VAR_0, const char *VAR_1)
{
 struct graph_v2 *VAR_2 = VAR_0->private;

 if (VAR_2->has_parents)
  return 1;
 return FUNC_0(VAR_2, &VAR_2->parents, VAR_2->parents.size, VAR_1) != ((void*)0);
}
