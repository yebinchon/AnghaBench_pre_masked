
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_18__ ;


struct TYPE_30__ {int tx_txg; } ;
typedef TYPE_5__ dmu_tx_t ;
typedef int dmu_object_type_t ;
struct TYPE_31__ {int db_size; } ;
typedef TYPE_6__ dmu_buf_t ;
struct TYPE_32__ {int db_level; TYPE_1__* db_objset; } ;
typedef TYPE_7__ dmu_buf_impl_t ;
struct TYPE_29__ {int member_0; } ;
struct TYPE_28__ {TYPE_4__ member_0; } ;
struct TYPE_27__ {TYPE_3__ member_0; } ;
struct TYPE_33__ {TYPE_2__ member_0; } ;
typedef TYPE_8__ blkptr_t ;
struct TYPE_26__ {int os_dsl_dataset; } ;
struct TYPE_25__ {int dn_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (TYPE_8__*,int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,int ) ;
 TYPE_18__* FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_10 (TYPE_7__*,TYPE_8__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_12 (int ,int ) ;

void
FUNC_13(dmu_buf_t *VAR_1, dmu_tx_t *VAR_2)
{
 dmu_buf_impl_t *VAR_3 = (dmu_buf_impl_t *)VAR_1;
 dmu_object_type_t VAR_4;
 FUNC_0(FUNC_12(VAR_3->db_objset->os_dsl_dataset,
     VAR_0));

 FUNC_8(VAR_3);
 VAR_4 = FUNC_7(VAR_3)->dn_type;
 FUNC_9(VAR_3);

 FUNC_1(VAR_3->db_level);
 FUNC_11(VAR_1, VAR_2);

 blkptr_t VAR_5 = { { { {0} } } };
 FUNC_6(&VAR_5, VAR_4);
 FUNC_4(&VAR_5, 0);
 FUNC_3(&VAR_5, VAR_2->tx_txg, 0);
 FUNC_5(&VAR_5);
 FUNC_2(&VAR_5, VAR_1->db_size);

 FUNC_10(VAR_3, &VAR_5, VAR_2);
}
