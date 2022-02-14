
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct dmu_send_params {scalar_t__ resumeobj; scalar_t__ resumeoff; int * redactbook; scalar_t__ rawok; scalar_t__ compressok; scalar_t__ embedok; scalar_t__ large_block_ok; TYPE_2__* dp; int * to_ds; } ;
struct TYPE_6__ {scalar_t__ os_encrypted; } ;
typedef TYPE_1__ objset_t ;
struct TYPE_7__ {int dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dsl_dataset_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_5(struct dmu_send_params *VAR_17, objset_t *VAR_18,
    uint64_t *VAR_19)
{
 dsl_dataset_t *VAR_20 = VAR_17->to_ds;
 dsl_pool_t *VAR_21 = VAR_17->dp;
 if ((VAR_17->rawok || VAR_17->large_block_ok) &&
     FUNC_2(VAR_20, VAR_12)) {
  *VAR_19 |= VAR_2;
 }


 if ((VAR_17->embedok || VAR_17->rawok) && !VAR_18->os_encrypted &&
     FUNC_3(VAR_21->dp_spa, VAR_11)) {
  *VAR_19 |= VAR_1;
 }


 if (VAR_17->compressok || VAR_17->rawok)
  *VAR_19 |= VAR_0;
 if (VAR_17->rawok && VAR_18->os_encrypted)
  *VAR_19 |= VAR_5;

 if ((*VAR_19 &
     (VAR_1 | VAR_0 |
     VAR_5)) != 0 &&
     FUNC_3(VAR_21->dp_spa, VAR_14)) {
  *VAR_19 |= VAR_4;
 }

 if (VAR_17->resumeobj != 0 || VAR_17->resumeoff != 0) {
  *VAR_19 |= VAR_7;
 }

 if (VAR_17->redactbook != ((void*)0)) {
  *VAR_19 |= VAR_6;
 }

 if (FUNC_2(VAR_20, VAR_13)) {
  *VAR_19 |= VAR_3;
 }
 return (0);
}
