
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_symbol {int color; scalar_t__ commit; } ;
struct graph_canvas {int size; struct graph_symbol* symbols; } ;
struct graph {int dummy; } ;
typedef scalar_t__ (* graph_symbol_iterator_fn ) (void*,struct graph const*,struct graph_symbol*,int,int) ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(const struct graph *VAR_1, const struct graph_canvas *VAR_2,
       graph_symbol_iterator_fn VAR_3, void *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->size; VAR_5++) {
  struct graph_symbol *VAR_6 = &VAR_2->symbols[VAR_5];
  int VAR_7 = VAR_6->commit ? VAR_0 : VAR_6->color;

  if (VAR_3(VAR_4, VAR_1, VAR_6, VAR_7, VAR_5 == 0))
   break;
 }
}
