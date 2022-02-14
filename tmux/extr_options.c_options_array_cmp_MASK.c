
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_array_item {scalar_t__ index; } ;



__attribute__((used)) static int
FUNC_0(struct options_array_item *VAR_0, struct options_array_item *VAR_1)
{
 if (VAR_0->index < VAR_1->index)
  return (-1);
 if (VAR_0->index > VAR_1->index)
  return (1);
 return (0);
}
