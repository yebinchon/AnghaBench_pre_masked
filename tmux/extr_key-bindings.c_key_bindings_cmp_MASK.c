
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_binding {scalar_t__ key; } ;



__attribute__((used)) static int
FUNC_0(struct key_binding *VAR_0, struct key_binding *VAR_1)
{
 if (VAR_0->key < VAR_1->key)
  return (-1);
 if (VAR_0->key > VAR_1->key)
  return (1);
 return (0);
}
