
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* val; struct TYPE_4__* key; } ;
typedef TYPE_1__ zed_strings_node_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(zed_strings_node_t *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->key) {
  if (VAR_0->key != VAR_0->val)
   FUNC_0(VAR_0->key);
  VAR_0->key = ((void*)0);
 }
 if (VAR_0->val) {
  FUNC_0(VAR_0->val);
  VAR_0->val = ((void*)0);
 }
 FUNC_0(VAR_0);
}
