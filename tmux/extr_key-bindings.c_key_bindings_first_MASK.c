
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_table {int key_bindings; } ;
struct key_binding {int dummy; } ;


 struct key_binding* FUNC_0 (int ,int *) ;
 int VAR_0 ;

struct key_binding *
FUNC_1(struct key_table *VAR_1)
{
 return (FUNC_0(VAR_0, &VAR_1->key_bindings));
}
