
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union options_value {int dummy; } options_value ;
struct options_array_item {union options_value value; } ;



union options_value *
FUNC_0(struct options_array_item *VAR_0)
{
 return (&VAR_0->value);
}
