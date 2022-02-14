
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_14__ {int zp_nopwrite; } ;
typedef TYPE_2__ zio_prop_t ;
struct TYPE_15__ {TYPE_1__* zgd_db; int zgd_bp; int zgd_lwb; } ;
typedef TYPE_3__ zgd_t ;
typedef int zbookmark_phys_t ;
struct TYPE_16__ {int os_spa; } ;
typedef TYPE_4__ objset_t ;
typedef int dmu_tx_t ;
typedef int dmu_sync_cb_t ;
struct TYPE_17__ {int * dsa_tx; TYPE_3__* dsa_zgd; int * dsa_done; int * dsa_dr; } ;
typedef TYPE_5__ dmu_sync_arg_t ;
struct TYPE_13__ {int db_size; int db_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int * FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 TYPE_5__* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ,int ,int ,int ,int ,TYPE_2__*,int ,int *,int *,int ,TYPE_5__*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_11(zio_t *VAR_8, objset_t *VAR_9, dmu_sync_cb_t *VAR_10, zgd_t *VAR_11,
    zio_prop_t *VAR_12, zbookmark_phys_t *VAR_13)
{
 dmu_sync_arg_t *VAR_14;
 dmu_tx_t *VAR_15;

 VAR_15 = FUNC_4(VAR_9);
 FUNC_6(VAR_15, VAR_11->zgd_db->db_size);
 if (FUNC_3(VAR_15, VAR_3) != 0) {
  FUNC_2(VAR_15);

  return (FUNC_0(VAR_1));
 }






 FUNC_8(VAR_11->zgd_lwb, FUNC_5(VAR_15));

 VAR_14 = FUNC_7(sizeof (dmu_sync_arg_t), VAR_2);
 VAR_14->dsa_dr = ((void*)0);
 VAR_14->dsa_done = VAR_10;
 VAR_14->dsa_zgd = VAR_11;
 VAR_14->dsa_tx = VAR_15;
 VAR_12->zp_nopwrite = VAR_0;

 FUNC_9(FUNC_10(VAR_8, VAR_9->os_spa, FUNC_5(VAR_15), VAR_11->zgd_bp,
     FUNC_1(VAR_11->zgd_db->db_data, VAR_11->zgd_db->db_size),
     VAR_11->zgd_db->db_size, VAR_11->zgd_db->db_size, VAR_12,
     VAR_7, ((void*)0), ((void*)0), VAR_6,
     VAR_14, VAR_5, VAR_4, VAR_13));

 return (0);
}
