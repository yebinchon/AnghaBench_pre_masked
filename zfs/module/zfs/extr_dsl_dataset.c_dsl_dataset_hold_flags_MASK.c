
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dsl_pool_t ;
typedef int dsl_dir_t ;
struct TYPE_7__ {scalar_t__* ds_snapname; int ds_lock; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int ds_hold_flags_t ;
struct TYPE_8__ {scalar_t__ dd_head_dataset_obj; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *,scalar_t__,int ,void*,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,int ,void*) ;
 int FUNC_5 (TYPE_1__*,char const*,scalar_t__*) ;
 int FUNC_6 (int *,char const*,int ,int **,char const**) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,char const*,int) ;

int
FUNC_13(dsl_pool_t *VAR_2, const char *VAR_3, ds_hold_flags_t VAR_4,
    void *VAR_5, dsl_dataset_t **VAR_6)
{
 dsl_dir_t *VAR_7;
 const char *VAR_8;
 uint64_t VAR_9;
 int VAR_10 = 0;
 dsl_dataset_t *VAR_11;

 VAR_10 = FUNC_6(VAR_2, VAR_3, VAR_1, &VAR_7, &VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);

 FUNC_0(FUNC_9(VAR_2));
 VAR_9 = FUNC_7(VAR_7)->dd_head_dataset_obj;
 if (VAR_9 != 0)
  VAR_10 = FUNC_3(VAR_2, VAR_9, VAR_4, VAR_5, &VAR_11);
 else
  VAR_10 = FUNC_1(VAR_0);


 if (VAR_10 == 0 && VAR_8 != ((void*)0)) {
  dsl_dataset_t *VAR_12;

  if (*VAR_8++ != '@') {
   FUNC_4(VAR_11, VAR_4, VAR_5);
   FUNC_8(VAR_7, VAR_1);
   return (FUNC_1(VAR_0));
  }

  FUNC_2("looking for snapshot '%s'\n", VAR_8);
  VAR_10 = FUNC_5(VAR_11, VAR_8, &VAR_9);
  if (VAR_10 == 0) {
   VAR_10 = FUNC_3(VAR_2, VAR_9, VAR_4, VAR_5,
       &VAR_12);
  }
  FUNC_4(VAR_11, VAR_4, VAR_5);

  if (VAR_10 == 0) {
   FUNC_10(&VAR_12->ds_lock);
   if (VAR_12->ds_snapname[0] == 0)
    (void) FUNC_12(VAR_12->ds_snapname, VAR_8,
        sizeof (VAR_12->ds_snapname));
   FUNC_11(&VAR_12->ds_lock);
   VAR_11 = VAR_12;
  }
 }
 if (VAR_10 == 0)
  *VAR_6 = VAR_11;
 FUNC_8(VAR_7, VAR_1);
 return (VAR_10);
}
