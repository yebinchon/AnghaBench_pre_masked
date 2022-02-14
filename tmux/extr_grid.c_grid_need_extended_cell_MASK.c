
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grid_cell_entry {int flags; } ;
struct TYPE_2__ {int size; int width; } ;
struct grid_cell {int attr; int fg; int bg; scalar_t__ us; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const struct grid_cell_entry *VAR_2,
    const struct grid_cell *VAR_3)
{
 if (VAR_2->flags & VAR_1)
  return (1);
 if (VAR_3->attr > 0xff)
  return (1);
 if (VAR_3->data.size != 1 || VAR_3->data.width != 1)
  return (1);
 if ((VAR_3->fg & VAR_0) || (VAR_3->bg & VAR_0))
  return (1);
 if (VAR_3->us != 0)
  return (1);
 return (0);
}
