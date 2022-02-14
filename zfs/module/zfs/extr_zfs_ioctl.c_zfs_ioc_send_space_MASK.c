
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ zbm_redaction_obj; scalar_t__ zbm_guid; int zbm_flags; int member_0; } ;
typedef TYPE_1__ zfs_bookmark_phys_t ;
typedef scalar_t__ uint64_t ;
typedef int offset_t ;
typedef int nvlist_t ;
typedef int int32_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_8__ {void* dso_dryrun; scalar_t__* dso_arg; int dso_outfunc; int member_0; } ;
typedef TYPE_2__ dmu_send_outparams_t ;
typedef int boolean_t ;
struct TYPE_9__ {scalar_t__ ds_guid; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (char const*,char*,int,int,int,int,scalar_t__,scalar_t__,char*,int,int *,TYPE_2__*) ;
 int FUNC_2 (int *,int *,TYPE_1__*,int,scalar_t__*) ;
 int FUNC_3 (int *,char*,int *,TYPE_1__*) ;
 int FUNC_4 (int *,char const*,int ,int **) ;
 int FUNC_5 (int *,int *,int ) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char const*,int ,int **) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*,scalar_t__) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*,int*) ;
 scalar_t__ FUNC_13 (int *,char*,char**) ;
 int FUNC_14 (int *,char*,scalar_t__*) ;
 int VAR_6 ;
 int * FUNC_15 (char*,char) ;

__attribute__((used)) static int
FUNC_16(const char *VAR_7, nvlist_t *VAR_8, nvlist_t *VAR_9)
{
 dsl_pool_t *VAR_10;
 dsl_dataset_t *VAR_11;
 dsl_dataset_t *VAR_12 = ((void*)0);
 int VAR_13;
 char *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 boolean_t VAR_16;
 boolean_t VAR_17;
 boolean_t VAR_18;
 boolean_t VAR_19;
 uint64_t VAR_20 = 0;
 boolean_t VAR_21 = VAR_0;
 uint64_t VAR_22 = 0;
 uint64_t VAR_23 = 0;
 uint64_t VAR_24 = 0;
 int32_t VAR_25 = -1;
 zfs_bookmark_phys_t VAR_26 = {0};

 VAR_13 = FUNC_8(VAR_7, VAR_4, &VAR_10);
 if (VAR_13 != 0)
  return (VAR_13);

 VAR_13 = FUNC_4(VAR_10, VAR_7, VAR_4, &VAR_11);
 if (VAR_13 != 0) {
  FUNC_9(VAR_10, VAR_4);
  return (VAR_13);
 }
 (void) FUNC_12(VAR_8, "fd", &VAR_25);

 VAR_16 = FUNC_11(VAR_8, "largeblockok");
 VAR_17 = FUNC_11(VAR_8, "embedok");
 VAR_18 = FUNC_11(VAR_8, "compressok");
 VAR_19 = FUNC_11(VAR_8, "rawok");
 boolean_t VAR_27 = (FUNC_13(VAR_8, "from", &VAR_14) == 0);
 boolean_t VAR_28 = (FUNC_13(VAR_8, "redactbook",
     &VAR_15) == 0);

 (void) FUNC_14(VAR_8, "resume_object", &VAR_22);
 (void) FUNC_14(VAR_8, "resume_offset", &VAR_23);
 (void) FUNC_14(VAR_8, "bytes", &VAR_24);

 if (VAR_28) {
  VAR_21 = VAR_1;
 } else if (VAR_27) {
  if (FUNC_15(VAR_14, '#')) {
   VAR_13 = FUNC_3(VAR_10, VAR_14, VAR_11, &VAR_26);
   if (VAR_13 == VAR_3 && VAR_26.zbm_redaction_obj != 0 &&
       VAR_26.zbm_guid ==
       FUNC_6(VAR_11)->ds_guid)
    VAR_13 = 0;

   if (VAR_13 != 0) {
    FUNC_7(VAR_11, VAR_4);
    FUNC_9(VAR_10, VAR_4);
    return (VAR_13);
   }
   if (VAR_26.zbm_redaction_obj != 0 || !(VAR_26.zbm_flags &
       VAR_5)) {
    VAR_21 = VAR_1;
   }
  } else if (FUNC_15(VAR_14, '@')) {
   VAR_13 = FUNC_4(VAR_10, VAR_14, VAR_4, &VAR_12);
   if (VAR_13 != 0) {
    FUNC_7(VAR_11, VAR_4);
    FUNC_9(VAR_10, VAR_4);
    return (VAR_13);
   }

   if (!FUNC_5(VAR_11, VAR_12, 0)) {
    VAR_21 = VAR_1;
    FUNC_7(VAR_12, VAR_4);
   }
  } else {




   FUNC_7(VAR_11, VAR_4);
   FUNC_9(VAR_10, VAR_4);
   return (FUNC_0(VAR_2));
  }
 }

 if (VAR_21) {
  dmu_send_outparams_t VAR_29 = {0};
  offset_t VAR_30 = 0;
  VAR_29.dso_outfunc = VAR_6;
  VAR_29.dso_arg = &VAR_20;
  VAR_29.dso_dryrun = VAR_1;




  FUNC_7(VAR_11, VAR_4);
  FUNC_9(VAR_10, VAR_4);
  VAR_13 = FUNC_1(VAR_7, VAR_14, VAR_17, VAR_16,
      VAR_18, VAR_19, VAR_22, VAR_23, VAR_15,
      VAR_25, &VAR_30, &VAR_29);
 } else {
  VAR_13 = FUNC_2(VAR_11, VAR_12,
      (VAR_27 && FUNC_15(VAR_14, '#') != ((void*)0) ? &VAR_26 : ((void*)0)),
      VAR_18 || VAR_19, &VAR_20);
  VAR_20 -= VAR_24;
  if (VAR_12 != ((void*)0))
   FUNC_7(VAR_12, VAR_4);
  FUNC_7(VAR_11, VAR_4);
  FUNC_9(VAR_10, VAR_4);
 }

 FUNC_10(VAR_9, "space", VAR_20);

 return (VAR_13);
}
