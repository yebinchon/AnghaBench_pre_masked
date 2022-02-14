
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int array; } ;
struct options_entry {TYPE_1__ value; } ;
struct options_array_item {int index; } ;


 struct options_array_item* FUNC_0 (int ,int *,struct options_array_item*) ;
 int VAR_0 ;

__attribute__((used)) static struct options_array_item *
FUNC_1(struct options_entry *VAR_1, u_int VAR_2)
{
 struct options_array_item VAR_3;

 VAR_3.index = VAR_2;
 return (FUNC_0(VAR_0, &VAR_1->value.array, &VAR_3));
}
