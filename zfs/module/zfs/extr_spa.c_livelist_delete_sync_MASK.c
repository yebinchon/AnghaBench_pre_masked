
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ spa_livelists_to_delete; int * spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_t ;
struct TYPE_6__ {scalar_t__ ll_obj; scalar_t__ zap_obj; TYPE_1__* spa; } ;
typedef TYPE_2__ livelist_delete_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_5 (int *,scalar_t__,int *) ;
 int FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3, dmu_tx_t *VAR_4)
{
 livelist_delete_arg_t *VAR_5 = VAR_3;
 spa_t *VAR_6 = VAR_5->spa;
 uint64_t VAR_7 = VAR_5->ll_obj;
 uint64_t VAR_8 = VAR_5->zap_obj;
 objset_t *VAR_9 = VAR_6->spa_meta_objset;
 uint64_t VAR_10;


 FUNC_0(FUNC_7(VAR_9, VAR_8, VAR_7, VAR_4));
 FUNC_1(VAR_9, VAR_7, VAR_4);
 FUNC_2(VAR_6, VAR_2, VAR_4);
 FUNC_0(FUNC_4(VAR_9, VAR_8, &VAR_10));
 if (VAR_10 == 0) {

  FUNC_0(FUNC_6(VAR_9, VAR_1,
      VAR_0, VAR_4));
  FUNC_0(FUNC_5(VAR_9, VAR_8, VAR_4));
  VAR_6->spa_livelists_to_delete = 0;
  FUNC_3(VAR_6);
 }
}
