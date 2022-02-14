
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct style {scalar_t__ range_type; scalar_t__ range_argument; } ;
struct format_range {scalar_t__ type; scalar_t__ argument; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct format_range *VAR_1, struct style *VAR_2)
{
 if (VAR_1->type != VAR_2->range_type)
  return (0);
 if (VAR_1->type == VAR_0 &&
     VAR_1->argument != VAR_2->range_argument)
  return (0);
 return (1);
}
