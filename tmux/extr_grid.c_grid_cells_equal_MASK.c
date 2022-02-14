
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ width; scalar_t__ size; int data; } ;
struct grid_cell {scalar_t__ fg; scalar_t__ bg; scalar_t__ attr; scalar_t__ flags; TYPE_1__ data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(const struct grid_cell *VAR_0, const struct grid_cell *VAR_1)
{
 if (VAR_0->fg != VAR_1->fg || VAR_0->bg != VAR_1->bg)
  return (0);
 if (VAR_0->attr != VAR_1->attr || VAR_0->flags != VAR_1->flags)
  return (0);
 if (VAR_0->data.width != VAR_1->data.width)
  return (0);
 if (VAR_0->data.size != VAR_1->data.size)
  return (0);
 return (FUNC_0(VAR_0->data.data, VAR_1->data.data, VAR_0->data.size) == 0);
}
