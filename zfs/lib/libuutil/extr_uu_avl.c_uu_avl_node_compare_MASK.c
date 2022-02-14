
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uu_avl_node_compare_info {int (* ac_compare ) (void const*,int ,int ) ;int * ac_found; int ac_private; int ac_right; } ;


 int FUNC_0 (void const*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct uu_avl_node_compare_info *VAR_2 =
     (struct uu_avl_node_compare_info *)VAR_0;

 int VAR_3 = VAR_2->ac_compare(VAR_1, VAR_2->ac_right, VAR_2->ac_private);

 if (VAR_3 == 0) {
  if (VAR_2->ac_found == ((void*)0))
   VAR_2->ac_found = (void *)VAR_1;
  return (-1);
 }
 if (VAR_3 < 0)
  return (1);
 return (-1);
}
