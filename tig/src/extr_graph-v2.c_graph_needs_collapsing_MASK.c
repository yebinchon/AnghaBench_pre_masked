
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int * columns; } ;
struct graph_v2 {TYPE_1__ row; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool
FUNC_1(struct graph_v2 *VAR_0)
{
 return VAR_0->row.size > 1
     && !FUNC_0(&VAR_0->row.columns[VAR_0->row.size - 1]);
}
