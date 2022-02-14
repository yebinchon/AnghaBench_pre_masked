
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_7__ {TYPE_1__* tx_pool; } ;
typedef TYPE_2__ dmu_tx_t ;
struct TYPE_6__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,TYPE_2__*) ;
 int FUNC_2 (int *,int,int ,int,TYPE_2__*) ;
 int FUNC_3 (int *,int,int ,int,int,int*) ;

void
FUNC_4(uint64_t VAR_1, dmu_tx_t *VAR_2)
{
 objset_t *VAR_3 = VAR_2->tx_pool->dp_meta_objset;
 uint64_t VAR_4;


 FUNC_0(FUNC_3(VAR_3, VAR_1, VAR_0,
     sizeof (uint64_t), 1, &VAR_4));

 if (VAR_4 != 1) {
  FUNC_0(FUNC_2(VAR_3, VAR_1, VAR_0,
      -1, VAR_2));
 } else {
  FUNC_0(FUNC_1(VAR_3, VAR_1, VAR_2));
 }
}
