
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int recvname ;
typedef int dsl_pool_t ;
struct TYPE_9__ {int ds_bp_rwlock; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int ds_hold_flags_t ;
typedef int dmu_tx_t ;
struct TYPE_10__ {TYPE_1__* drba_cookie; } ;
typedef TYPE_3__ dmu_recv_begin_arg_t ;
struct TYPE_8__ {char* drc_tofs; int drc_featureflags; TYPE_2__* drc_ds; void* drc_raw; void* drc_newfs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,char const*,int ,int ,TYPE_2__**) ;
 char* VAR_7 ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*,int,char*,char const*,char*) ;
 int FUNC_10 (TYPE_2__*,char*,int *,char*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_8, dmu_tx_t *VAR_9)
{
 dmu_recv_begin_arg_t *VAR_10 = VAR_8;
 dsl_pool_t *VAR_11 = FUNC_4(VAR_9);
 const char *VAR_12 = VAR_10->drba_cookie->drc_tofs;
 uint64_t VAR_13 = VAR_10->drba_cookie->drc_featureflags;
 dsl_dataset_t *VAR_14;
 ds_hold_flags_t VAR_15 = 0;

 char VAR_16[VAR_5 + 6];

 (void) FUNC_9(VAR_16, sizeof (VAR_16), "%s/%s", VAR_12,
     VAR_7);

 if (VAR_13 & VAR_1) {
  VAR_10->drba_cookie->drc_raw = VAR_0;
 } else {
  VAR_15 |= VAR_2;
 }

 if (FUNC_6(VAR_11, VAR_16, VAR_15, VAR_6, &VAR_14)
     != 0) {

  FUNC_3(FUNC_6(VAR_11, VAR_12, VAR_15, VAR_6,
      &VAR_14));
  VAR_10->drba_cookie->drc_newfs = VAR_0;
 }

 FUNC_0(FUNC_2(VAR_14));
 FUNC_7(&VAR_14->ds_bp_rwlock, VAR_4, VAR_3);
 FUNC_0(!FUNC_1(FUNC_5(VAR_14)) ||
     VAR_10->drba_cookie->drc_raw);
 FUNC_8(&VAR_14->ds_bp_rwlock, VAR_3);

 VAR_10->drba_cookie->drc_ds = VAR_14;

 FUNC_10(VAR_14, "resume receive", VAR_9, " ");
}
