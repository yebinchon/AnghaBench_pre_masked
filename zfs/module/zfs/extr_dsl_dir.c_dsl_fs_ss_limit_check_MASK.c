
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef scalar_t__ enforce_res_t ;
struct TYPE_8__ {struct TYPE_8__* dd_parent; int dd_object; TYPE_3__* dd_pool; } ;
typedef TYPE_1__ dsl_dir_t ;
typedef int cred_t ;
typedef int count ;
struct TYPE_9__ {int * dp_meta_objset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int ,int,int,scalar_t__*,int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ,char*,int,int,scalar_t__*) ;
 int FUNC_7 (scalar_t__) ;

int
FUNC_8(dsl_dir_t *VAR_9, uint64_t VAR_10, zfs_prop_t VAR_11,
    dsl_dir_t *VAR_12, cred_t *VAR_13)
{
 objset_t *VAR_14 = VAR_9->dd_pool->dp_meta_objset;
 uint64_t VAR_15, VAR_16;
 char *VAR_17;
 enforce_res_t VAR_18;
 int VAR_19 = 0;

 FUNC_0(FUNC_4(VAR_9->dd_pool));
 FUNC_0(VAR_11 == VAR_7 ||
     VAR_11 == VAR_8);
 VAR_18 = FUNC_3(VAR_9, VAR_11, VAR_13);
 if (VAR_18 == VAR_5)
  return (0);





 if (VAR_10 == 0)
  return (0);

 if (VAR_11 == VAR_8) {




  if (VAR_13 == ((void*)0))
   return (0);

  VAR_17 = VAR_2;
 } else {
  VAR_17 = VAR_1;
 }






 if (VAR_12 == VAR_9)
  return (0);






 if (!FUNC_2(VAR_9) || FUNC_6(VAR_14, VAR_9->dd_object,
     VAR_17, sizeof (VAR_16), 1, &VAR_16) == VAR_6)
  return (0);

 VAR_19 = FUNC_5(VAR_9, FUNC_7(VAR_11), 8, 1, &VAR_15, ((void*)0),
     VAR_0);
 if (VAR_19 != 0)
  return (VAR_19);


 if (VAR_18 == VAR_4 && (VAR_16 + VAR_10) > VAR_15)
  return (FUNC_1(VAR_3));

 if (VAR_9->dd_parent != ((void*)0))
  VAR_19 = FUNC_8(VAR_9->dd_parent, VAR_10, VAR_11,
      VAR_12, VAR_13);

 return (VAR_19);
}
