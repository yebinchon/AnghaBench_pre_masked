
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union options_value {int dummy; } options_value ;
typedef int u_int ;
struct options_entry {int dummy; } ;
struct options_array_item {union options_value value; } ;


 int FUNC_0 (struct options_entry*) ;
 struct options_array_item* FUNC_1 (struct options_entry*,int ) ;

union options_value *
FUNC_2(struct options_entry *VAR_0, u_int VAR_1)
{
 struct options_array_item *VAR_2;

 if (!FUNC_0(VAR_0))
  return (((void*)0));
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 return (&VAR_2->value);
}
