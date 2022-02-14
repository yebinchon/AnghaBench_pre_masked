
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_v2 {int dummy; } ;
struct graph_symbol {int dummy; } ;
struct graph_canvas {int size; struct graph_symbol* symbols; } ;


 scalar_t__ FUNC_0 (struct graph_symbol**,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct graph_v2 *VAR_0, struct graph_canvas *VAR_1, struct graph_symbol *VAR_2)
{
 if (FUNC_0(&VAR_1->symbols, VAR_1->size, 1))
  VAR_1->symbols[VAR_1->size++] = *VAR_2;
}
