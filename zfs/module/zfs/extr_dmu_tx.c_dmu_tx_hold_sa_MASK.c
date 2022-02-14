
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_17__ {scalar_t__ sa_master_obj; scalar_t__ sa_reg_attr_obj; scalar_t__ sa_layout_attr_obj; scalar_t__ sa_force_spill; } ;
typedef TYPE_2__ sa_os_t ;
struct TYPE_18__ {scalar_t__ sa_spill; scalar_t__ sa_bonus; } ;
typedef TYPE_3__ sa_handle_t ;
struct TYPE_19__ {scalar_t__ dn_have_spill; } ;
typedef TYPE_4__ dnode_t ;
struct TYPE_20__ {scalar_t__ tx_txg; TYPE_1__* tx_objset; } ;
typedef TYPE_5__ dmu_tx_t ;
typedef int dmu_buf_impl_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_16__ {TYPE_2__* os_sa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,scalar_t__,int ,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*) ;

void
FUNC_9(dmu_tx_t *VAR_4, sa_handle_t *VAR_5, boolean_t VAR_6)
{
 uint64_t VAR_7;
 sa_os_t *VAR_8 = VAR_4->tx_objset->os_sa;

 FUNC_0(VAR_5 != ((void*)0));

 VAR_7 = FUNC_8(VAR_5);

 dmu_buf_impl_t *VAR_9 = (dmu_buf_impl_t *)VAR_5->sa_bonus;
 FUNC_2(VAR_9);
 FUNC_4(VAR_4, FUNC_1(VAR_9));
 FUNC_3(VAR_9);

 if (VAR_4->tx_objset->os_sa->sa_master_obj == 0)
  return;

 if (VAR_4->tx_objset->os_sa->sa_reg_attr_obj == 0 ||
     VAR_4->tx_objset->os_sa->sa_layout_attr_obj == 0) {
  FUNC_6(VAR_4, VAR_8->sa_master_obj, VAR_0, VAR_2);
  FUNC_6(VAR_4, VAR_8->sa_master_obj, VAR_0, VAR_3);
  FUNC_6(VAR_4, VAR_1, VAR_0, ((void*)0));
  FUNC_6(VAR_4, VAR_1, VAR_0, ((void*)0));
 }

 FUNC_7(VAR_8, VAR_4);

 if (VAR_6 && VAR_4->tx_objset->os_sa->sa_layout_attr_obj)
  FUNC_6(VAR_4, VAR_8->sa_layout_attr_obj, VAR_0, ((void*)0));

 if (VAR_8->sa_force_spill || VAR_6 || VAR_5->sa_spill) {
  FUNC_0(VAR_4->tx_txg == 0);
  FUNC_5(VAR_4, VAR_7);
 } else {
  dnode_t *VAR_10;

  FUNC_2(VAR_9);
  VAR_10 = FUNC_1(VAR_9);
  if (VAR_10->dn_have_spill) {
   FUNC_0(VAR_4->tx_txg == 0);
   FUNC_5(VAR_4, VAR_7);
  }
  FUNC_3(VAR_9);
 }
}
