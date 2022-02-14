
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_13__ {int ddura_chkholds; int * ddura_todelete; int * ddura_errlist; } ;
typedef TYPE_3__ dsl_dataset_user_release_arg_t ;
struct TYPE_14__ {int ds_userrefs; TYPE_2__* ds_dir; int ds_is_snapshot; } ;
typedef TYPE_4__ dsl_dataset_t ;
struct TYPE_15__ {scalar_t__ ds_userrefs_obj; int ds_num_children; } ;
struct TYPE_12__ {TYPE_1__* dd_pool; } ;
struct TYPE_11__ {int * dp_meta_objset; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 TYPE_7__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (char*,char const*,char const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int **,int ,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int * FUNC_13 (int *,int *) ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (int *,scalar_t__,char const*,int,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_16(dsl_dataset_user_release_arg_t *VAR_5,
    dsl_dataset_t *VAR_6, nvlist_t *VAR_7, const char *VAR_8)
{
 uint64_t VAR_9;
 nvlist_t *VAR_10;
 objset_t *VAR_11;
 int VAR_12;

 if (!VAR_6->ds_is_snapshot)
  return (FUNC_1(VAR_1));

 if (FUNC_12(VAR_7))
  return (0);

 VAR_12 = 0;
 VAR_11 = VAR_6->ds_dir->dd_pool->dp_meta_objset;
 VAR_9 = FUNC_4(VAR_6)->ds_userrefs_obj;
 FUNC_2(FUNC_11(&VAR_10, VAR_4, VAR_3));

 for (nvpair_t *VAR_13 = FUNC_13(VAR_7, ((void*)0)); VAR_13 != ((void*)0);
     VAR_13 = FUNC_13(VAR_7, VAR_13)) {
  uint64_t VAR_14;
  int VAR_15;
  const char *VAR_16 = FUNC_14(VAR_13);

  if (VAR_9 != 0)
   VAR_15 = FUNC_15(VAR_11, VAR_9, VAR_16, 8, 1, &VAR_14);
  else
   VAR_15 = FUNC_1(VAR_2);





  if (VAR_15 == VAR_2) {
   if (VAR_5->ddura_errlist != ((void*)0)) {
    char *VAR_17 = FUNC_9("%s#%s",
        VAR_8, VAR_16);
    FUNC_6(VAR_5->ddura_errlist, VAR_17,
        VAR_2);
    FUNC_10(VAR_17);
   }
   continue;
  }

  if (VAR_15 != 0) {
   FUNC_8(VAR_10);
   return (VAR_15);
  }

  FUNC_5(VAR_10, VAR_16);
  VAR_12++;
 }

 if (FUNC_0(VAR_6) &&
     FUNC_4(VAR_6)->ds_num_children == 1 &&
     VAR_6->ds_userrefs == VAR_12) {

  if (FUNC_3(VAR_6)) {
   FUNC_8(VAR_10);
   return (FUNC_1(VAR_0));
  }
  FUNC_5(VAR_5->ddura_todelete, VAR_8);
 }

 if (VAR_12 != 0) {
  FUNC_7(VAR_5->ddura_chkholds, VAR_8,
      VAR_10);
 }
 FUNC_8(VAR_10);

 return (0);
}
