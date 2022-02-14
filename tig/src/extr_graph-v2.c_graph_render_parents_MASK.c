
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct graph_v2 {scalar_t__ position; TYPE_1__ parents; } ;
struct graph_canvas {int dummy; } ;
struct graph {struct graph_v2* private; } ;


 int FUNC_0 (struct graph*,int *) ;
 int FUNC_1 (struct graph_v2*) ;
 int FUNC_2 (struct graph_v2*) ;
 int FUNC_3 (struct graph_v2*) ;
 int FUNC_4 (struct graph_v2*) ;
 int FUNC_5 (struct graph_v2*,struct graph_canvas*) ;

__attribute__((used)) static bool
FUNC_6(struct graph *VAR_0, struct graph_canvas *VAR_1)
{
 struct graph_v2 *VAR_2 = VAR_0->private;

 if (VAR_2->parents.size == 0 &&
     !FUNC_0(VAR_0, ((void*)0)))
  return 0;

 if (!FUNC_3(VAR_2))
  return 0;

 FUNC_4(VAR_2);
 FUNC_5(VAR_2, VAR_1);
 FUNC_2(VAR_2);

 VAR_2->parents.size = VAR_2->position = 0;

 if (!FUNC_1(VAR_2))
  return 0;

 return 1;
}
