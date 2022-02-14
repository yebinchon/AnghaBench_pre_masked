
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* columns; } ;
struct TYPE_6__ {TYPE_1__* columns; } ;
struct graph_v2 {int prev_position; TYPE_4__ prev_row; TYPE_2__ row; } ;
struct TYPE_7__ {scalar_t__ id; } ;
struct TYPE_5__ {scalar_t__ id; } ;



__attribute__((used)) static bool
FUNC_0(int VAR_0, struct graph_v2 *VAR_1)
{
 if (VAR_0 != VAR_1->prev_position)
  return 0;

 if (VAR_1->row.columns[VAR_0].id != VAR_1->prev_row.columns[VAR_0].id)
  return 0;

 return 1;
}
