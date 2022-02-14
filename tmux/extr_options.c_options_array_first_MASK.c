
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct options_entry {TYPE_1__ value; } ;
struct options_array_item {int dummy; } ;


 int FUNC_0 (struct options_entry*) ;
 struct options_array_item* FUNC_1 (int ,int *) ;
 int VAR_0 ;

struct options_array_item *
FUNC_2(struct options_entry *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return (((void*)0));
 return (FUNC_1(VAR_0, &VAR_1->value.array));
}
