
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int zio_t ;
struct TYPE_28__ {int zp_nopwrite; } ;
typedef TYPE_4__ zio_prop_t ;
struct TYPE_29__ {int * zgd_bp; scalar_t__ zgd_db; } ;
typedef TYPE_5__ zgd_t ;
typedef int zbookmark_phys_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_30__ {int os_spa; TYPE_7__* os_dsl_dataset; } ;
typedef TYPE_6__ objset_t ;
struct TYPE_31__ {int ds_object; } ;
typedef TYPE_7__ dsl_dataset_t ;
typedef int dnode_t ;
typedef int dmu_sync_cb_t ;
struct TYPE_32__ {int * dsa_tx; TYPE_5__* dsa_zgd; int * dsa_done; TYPE_10__* dsa_dr; } ;
typedef TYPE_8__ dmu_sync_arg_t ;
struct TYPE_25__ {int db_object; } ;
struct TYPE_33__ {int db_mtx; int db_blkid; int * db_blkptr; TYPE_10__* db_last_dirty; int db_level; TYPE_1__ db; TYPE_6__* db_objset; } ;
typedef TYPE_9__ dmu_buf_impl_t ;
struct TYPE_26__ {scalar_t__ dr_override_state; int dr_data; } ;
struct TYPE_27__ {TYPE_2__ dl; } ;
struct TYPE_24__ {scalar_t__ dr_txg; TYPE_3__ dt; struct TYPE_24__* dr_next; } ;
typedef TYPE_10__ dbuf_dirty_record_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_9__*) ;
 int * FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *,int ,scalar_t__,int *,int ,int ,TYPE_4__*,int ,int *,int *,int ,TYPE_8__*,int ,int ,int *) ;
 int VAR_11 ;
 int FUNC_8 (int *,TYPE_6__*,int *,TYPE_5__*,TYPE_4__*,int *) ;
 int VAR_12 ;
 int FUNC_9 (TYPE_6__*,int *,int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 TYPE_8__* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

int
FUNC_18(zio_t *VAR_13, uint64_t VAR_14, dmu_sync_cb_t *VAR_15, zgd_t *VAR_16)
{
 dmu_buf_impl_t *VAR_17 = (dmu_buf_impl_t *)VAR_16->zgd_db;
 objset_t *VAR_18 = VAR_17->db_objset;
 dsl_dataset_t *VAR_19 = VAR_18->os_dsl_dataset;
 dbuf_dirty_record_t *VAR_20;
 dmu_sync_arg_t *VAR_21;
 zbookmark_phys_t VAR_22;
 zio_prop_t VAR_23;
 dnode_t *VAR_24;

 FUNC_0(VAR_13 != ((void*)0));
 FUNC_0(VAR_14 != 0);

 FUNC_5(&VAR_22, VAR_19->ds_object,
     VAR_17->db.db_object, VAR_17->db_level, VAR_17->db_blkid);

 FUNC_3(VAR_17);
 VAR_24 = FUNC_2(VAR_17);
 FUNC_9(VAR_18, VAR_24, VAR_17->db_level, VAR_8, &VAR_23);
 FUNC_4(VAR_17);




 if (VAR_14 > FUNC_14(VAR_18->os_spa))
  return (FUNC_8(VAR_13, VAR_18, VAR_15, VAR_16, &VAR_23, &VAR_22));







 FUNC_12(&VAR_17->db_mtx);

 if (VAR_14 <= FUNC_15(VAR_18->os_spa)) {



  FUNC_13(&VAR_17->db_mtx);
  return (FUNC_6(VAR_5));
 }

 if (VAR_14 <= FUNC_16(VAR_18->os_spa)) {




  FUNC_13(&VAR_17->db_mtx);
  return (FUNC_8(VAR_13, VAR_18, VAR_15, VAR_16, &VAR_23, &VAR_22));
 }

 VAR_20 = VAR_17->db_last_dirty;
 while (VAR_20 && VAR_20->dr_txg != VAR_14)
  VAR_20 = VAR_20->dr_next;

 if (VAR_20 == ((void*)0)) {




  FUNC_13(&VAR_17->db_mtx);
  return (FUNC_6(VAR_6));
 }

 FUNC_0(VAR_20->dr_next == ((void*)0) || VAR_20->dr_next->dr_txg < VAR_14);

 if (VAR_17->db_blkptr != ((void*)0)) {
  *VAR_16->zgd_bp = *VAR_17->db_blkptr;
 }
 FUNC_3(VAR_17);
 VAR_24 = FUNC_2(VAR_17);
 if (VAR_20->dr_next != ((void*)0) || FUNC_10(VAR_24, VAR_17->db_blkid))
  VAR_23.zp_nopwrite = VAR_0;
 FUNC_4(VAR_17);

 FUNC_0(VAR_20->dr_txg == VAR_14);
 if (VAR_20->dt.dl.dr_override_state == VAR_1 ||
     VAR_20->dt.dl.dr_override_state == VAR_3) {





  FUNC_13(&VAR_17->db_mtx);
  return (FUNC_6(VAR_4));
 }

 FUNC_0(VAR_20->dt.dl.dr_override_state == VAR_2);
 VAR_20->dt.dl.dr_override_state = VAR_1;
 FUNC_13(&VAR_17->db_mtx);

 VAR_21 = FUNC_11(sizeof (dmu_sync_arg_t), VAR_7);
 VAR_21->dsa_dr = VAR_20;
 VAR_21->dsa_done = VAR_15;
 VAR_21->dsa_zgd = VAR_16;
 VAR_21->dsa_tx = ((void*)0);

 FUNC_17(FUNC_7(VAR_13, VAR_18->os_spa, VAR_14,
     VAR_16->zgd_bp, VAR_20->dt.dl.dr_data, FUNC_1(VAR_17),
     &VAR_23, VAR_12, ((void*)0), ((void*)0), VAR_11, VAR_21,
     VAR_10, VAR_9, &VAR_22));

 return (0);
}
