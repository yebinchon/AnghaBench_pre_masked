
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layout_cell {scalar_t__ type; int cells; } ;


 scalar_t__ VAR_0 ;
 struct layout_cell* FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct layout_cell *
FUNC_1(struct layout_cell *VAR_2)
{
 if (VAR_2->type == VAR_0)
  return (VAR_2);
 VAR_2 = FUNC_0(&VAR_2->cells, VAR_1);
 return (FUNC_1(VAR_2));
}
