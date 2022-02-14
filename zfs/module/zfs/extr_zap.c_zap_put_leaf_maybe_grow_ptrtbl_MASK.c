
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_16__ {int zap_object; int * zap_objset; } ;
typedef TYPE_3__ zap_t ;
struct TYPE_17__ {TYPE_3__* zn_zap; } ;
typedef TYPE_4__ zap_name_t ;
typedef int zap_leaf_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {int lh_prefix_len; scalar_t__ lh_nfree; } ;
struct TYPE_18__ {TYPE_1__ l_hdr; } ;
struct TYPE_15__ {int zt_shift; scalar_t__ zt_nextblk; } ;
struct TYPE_13__ {TYPE_2__ zap_ptrtbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_11__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 TYPE_9__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ,int ,int ,void*,TYPE_3__**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,void*) ;

__attribute__((used)) static void
FUNC_7(zap_name_t *VAR_3, zap_leaf_t *VAR_4,
    void *VAR_5, dmu_tx_t *VAR_6)
{
 zap_t *VAR_7 = VAR_3->zn_zap;
 int VAR_8 = FUNC_0(VAR_7)->zap_ptrtbl.zt_shift;
 int VAR_9 = (FUNC_2(VAR_4)->l_hdr.lh_prefix_len == VAR_8 &&
     FUNC_2(VAR_4)->l_hdr.lh_nfree < VAR_2);

 FUNC_4(VAR_4);

 if (VAR_9 || FUNC_0(VAR_7)->zap_ptrtbl.zt_nextblk) {




  if (FUNC_5(VAR_7, VAR_6) == 0) {
   objset_t *VAR_10 = VAR_7->zap_objset;
   uint64_t VAR_11 = VAR_7->zap_object;

   FUNC_6(VAR_7, VAR_5);
   int VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_6,
       VAR_1, VAR_0, VAR_0, VAR_5, &VAR_3->zn_zap);
   VAR_7 = VAR_3->zn_zap;
   if (VAR_12 != 0)
    return;
  }


  if (FUNC_0(VAR_7)->zap_ptrtbl.zt_shift == VAR_8)
   (void) FUNC_1(VAR_7, VAR_6);
 }
}
