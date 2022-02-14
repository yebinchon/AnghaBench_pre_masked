
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct options_entry {TYPE_1__ value; } ;
struct options_array_item {int value; } ;


 int FUNC_0 (int ,int *,struct options_array_item*) ;
 int FUNC_1 (struct options_array_item*) ;
 int VAR_0 ;
 int FUNC_2 (struct options_entry*,int *) ;

__attribute__((used)) static void
FUNC_3(struct options_entry *VAR_1, struct options_array_item *VAR_2)
{
 FUNC_2(VAR_1, &VAR_2->value);
 FUNC_0(VAR_0, &VAR_1->value.array, VAR_2);
 FUNC_1(VAR_2);
}
