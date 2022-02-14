
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int size; } ;
struct graph_v2 {TYPE_3__ next_row; TYPE_2__ row; TYPE_1__ prev_row; } ;


 scalar_t__ FUNC_0 (struct graph_v2*) ;

__attribute__((used)) static bool
FUNC_1(struct graph_v2 *VAR_0)
{
 while (FUNC_0(VAR_0)) {
  VAR_0->prev_row.size--;
  VAR_0->row.size--;
  VAR_0->next_row.size--;
 }

 return 1;
}
