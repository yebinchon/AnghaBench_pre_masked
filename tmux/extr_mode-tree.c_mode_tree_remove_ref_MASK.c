
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode_tree_data {scalar_t__ references; } ;


 int FUNC_0 (struct mode_tree_data*) ;

__attribute__((used)) static void
FUNC_1(struct mode_tree_data *VAR_0)
{
 if (--VAR_0->references == 0)
  FUNC_0(VAR_0);
}
