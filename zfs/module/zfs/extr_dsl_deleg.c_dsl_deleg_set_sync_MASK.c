
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_11__ {int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_12__ {int dd_dbuf; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_13__ {int * dda_nvlist; int dda_name; } ;
typedef TYPE_3__ dsl_deleg_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {scalar_t__ dd_deleg_zapobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,TYPE_2__**,int *) ;
 TYPE_6__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,char*,int *,char*,char const*,char const*) ;
 scalar_t__ FUNC_11 (int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_12 (int *,int ,scalar_t__,char const*,int *) ;
 scalar_t__ FUNC_13 (int *,scalar_t__,char const*,int,int,scalar_t__*) ;
 scalar_t__ FUNC_14 (int *,scalar_t__,char const*,int,int,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_15(void *VAR_3, dmu_tx_t *VAR_4)
{
 dsl_deleg_arg_t *VAR_5 = VAR_3;
 dsl_dir_t *VAR_6;
 dsl_pool_t *VAR_7 = FUNC_3(VAR_4);
 objset_t *VAR_8 = VAR_7->dp_meta_objset;
 nvpair_t *VAR_9 = ((void*)0);
 uint64_t VAR_10;

 FUNC_1(FUNC_4(VAR_7, VAR_5->dda_name, VAR_2, &VAR_6, ((void*)0)));

 VAR_10 = FUNC_5(VAR_6)->dd_deleg_zapobj;
 if (VAR_10 == 0) {
  FUNC_2(VAR_6->dd_dbuf, VAR_4);
  VAR_10 = FUNC_5(VAR_6)->dd_deleg_zapobj = FUNC_11(VAR_8,
      VAR_0, VAR_1, 0, VAR_4);
 }

 while ((VAR_9 = FUNC_8(VAR_5->dda_nvlist, VAR_9))) {
  const char *VAR_11 = FUNC_9(VAR_9);
  nvlist_t *VAR_12;
  nvpair_t *VAR_13 = ((void*)0);
  uint64_t VAR_14;

  VAR_12 = FUNC_7(VAR_9);

  if (FUNC_13(VAR_8, VAR_10, VAR_11, 8, 1, &VAR_14) != 0) {
   VAR_14 = FUNC_12(VAR_8, VAR_0,
       VAR_10, VAR_11, VAR_4);
  }

  while ((VAR_13 = FUNC_8(VAR_12, VAR_13))) {
   const char *VAR_15 = FUNC_9(VAR_13);
   uint64_t VAR_16 = 0;

   FUNC_0(FUNC_14(VAR_8, VAR_14,
       VAR_15, 8, 1, &VAR_16, VAR_4) == 0);
   FUNC_10(VAR_6, "permission update", VAR_4,
       "%s %s", VAR_11, VAR_15);
  }
 }
 FUNC_6(VAR_6, VAR_2);
}
