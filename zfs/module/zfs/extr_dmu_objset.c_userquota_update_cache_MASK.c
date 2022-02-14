
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uqn_delta; int uqn_id; } ;
typedef TYPE_1__ userquota_node_t ;
typedef scalar_t__ int64_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,void const*,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(avl_tree_t *VAR_1, const char *VAR_2, int64_t VAR_3)
{
 userquota_node_t *VAR_4;
 avl_index_t VAR_5;

 FUNC_0(FUNC_5(VAR_2) < sizeof (VAR_4->uqn_id));





 VAR_4 = FUNC_1(VAR_1, (const void *)VAR_2, &VAR_5);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_3(sizeof (*VAR_4), VAR_0);
  FUNC_4(VAR_4->uqn_id, VAR_2, sizeof (VAR_4->uqn_id));
  FUNC_2(VAR_1, VAR_4, VAR_5);
 }
 VAR_4->uqn_delta += VAR_3;
}
