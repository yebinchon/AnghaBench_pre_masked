
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int * to_free; int key; int * ll; int * spa; } ;
typedef TYPE_1__ sublist_delete_arg_t ;
typedef int spa_t ;
typedef int dsl_deadlist_t ;
typedef int dmu_tx_t ;
typedef int bplist_t ;


 int FUNC_0 (int *,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, dmu_tx_t *VAR_2)
{
 sublist_delete_arg_t *VAR_3 = VAR_1;
 spa_t *VAR_4 = VAR_3->spa;
 dsl_deadlist_t *VAR_5 = VAR_3->ll;
 uint64_t VAR_6 = VAR_3->key;
 bplist_t *VAR_7 = VAR_3->to_free;

 FUNC_0(VAR_7, VAR_0, VAR_4, VAR_2);
 FUNC_1(VAR_5, VAR_6, VAR_2);
}
