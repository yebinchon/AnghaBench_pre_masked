
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_24__ {TYPE_1__* os_phys; int os_flags; int os_encrypted; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_25__ {void** ds_feature_activation; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_26__ {scalar_t__ dn_datablkshift; int dn_indblkshift; int* dn_next_nlevels; int dn_nlevels; scalar_t__ dn_nblkptr; } ;
typedef TYPE_4__ dnode_t ;
struct TYPE_27__ {size_t tx_txg; } ;
typedef TYPE_5__ dmu_tx_t ;
typedef scalar_t__ dmu_objset_type_t ;
typedef int blkptr_t ;
struct TYPE_23__ {int os_flags; scalar_t__ os_type; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *,int *,TYPE_2__**) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_4__*,int ,int,int,int ,int ,int ,TYPE_5__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_5__*) ;

objset_t *
FUNC_12(spa_t *VAR_18, dsl_dataset_t *VAR_19, blkptr_t *VAR_20,
    dmu_objset_type_t VAR_21, int VAR_22, int VAR_23, int VAR_24, dmu_tx_t *VAR_25)
{
 objset_t *VAR_26;
 dnode_t *VAR_27;

 FUNC_0(FUNC_9(VAR_25));

 if (VAR_23 == 0)
  VAR_23 = VAR_6;
 if (VAR_24 == 0)
  VAR_24 = VAR_9;

 if (VAR_19 != ((void*)0))
  FUNC_2(FUNC_3(VAR_19, &VAR_26));
 else
  FUNC_2(FUNC_5(VAR_18, ((void*)0), VAR_20, &VAR_26));

 VAR_27 = FUNC_1(VAR_26);

 FUNC_10(VAR_27, VAR_4, VAR_23, VAR_24, VAR_5, 0,
     VAR_7, VAR_25);
 if (VAR_19 != ((void*)0)) {
  if (VAR_22 == 0) {
   VAR_22 = 1;
   while ((uint64_t)VAR_27->dn_nblkptr <<
       (VAR_27->dn_datablkshift - VAR_8 + (VAR_22 - 1) *
       (VAR_27->dn_indblkshift - VAR_14)) <
       VAR_10)
    VAR_22++;
  }

  VAR_27->dn_next_nlevels[VAR_25->tx_txg & VAR_17] =
      VAR_27->dn_nlevels = VAR_22;
 }

 FUNC_0(VAR_21 != VAR_2);
 FUNC_0(VAR_21 != VAR_1);
 FUNC_0(VAR_21 < VAR_3);
 VAR_26->os_phys->os_type = VAR_21;





 if (FUNC_8(VAR_26) &&
     (!VAR_26->os_encrypted || !FUNC_4(VAR_26))) {
  VAR_26->os_phys->os_flags |= VAR_12;
  if (FUNC_7(VAR_26)) {
   VAR_19->ds_feature_activation[
       VAR_16] = (void *)VAR_0;
   VAR_26->os_phys->os_flags |=
       VAR_13;
  }
  if (FUNC_6(VAR_26)) {
   VAR_19->ds_feature_activation[
       VAR_15] = (void *)VAR_0;
   VAR_26->os_phys->os_flags |=
       VAR_11;
  }
  VAR_26->os_flags = VAR_26->os_phys->os_flags;
 }

 FUNC_11(VAR_19, VAR_25);

 return (VAR_26);
}
