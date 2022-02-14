
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct redact_node {TYPE_1__* rt_arg; int record; } ;
typedef int avl_tree_t ;
struct TYPE_2__ {int error_code; int q; } ;


 int FUNC_0 (int *,struct redact_node*) ;
 int FUNC_1 (int *,struct redact_node*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(avl_tree_t *VAR_0, avl_tree_t *VAR_1,
    struct redact_node *VAR_2)
{
 FUNC_1(VAR_0, VAR_2);
 FUNC_1(VAR_1, VAR_2);
 VAR_2->record = FUNC_2(&VAR_2->rt_arg->q,
     VAR_2->record);
 FUNC_0(VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_2);
 return (VAR_2->rt_arg->error_code);
}
