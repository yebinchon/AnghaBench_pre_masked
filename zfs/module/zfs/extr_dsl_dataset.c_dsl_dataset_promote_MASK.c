
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvpair_t ;
struct TYPE_5__ {char const* ddpa_clonename; int err_ds; int cr; int member_0; } ;
typedef TYPE_1__ dsl_dataset_promote_arg_t ;
struct TYPE_7__ {int dp_meta_objset; } ;
struct TYPE_6__ {int ds_snapnames_zapobj; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int **) ;
 TYPE_4__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char const*,int ,int ,TYPE_1__*,scalar_t__,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ,int ,scalar_t__*) ;

int
FUNC_13(const char *VAR_4, char *VAR_5)
{
 dsl_dataset_promote_arg_t VAR_6 = { 0 };
 uint64_t VAR_7;
 int VAR_8;
 nvpair_t *VAR_9;
 objset_t *VAR_10;





 VAR_8 = FUNC_2(VAR_4, VAR_0, &VAR_10);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_8 = FUNC_12(FUNC_3(VAR_10)->dp_meta_objset,
     FUNC_5(FUNC_1(VAR_10))->ds_snapnames_zapobj,
     &VAR_7);
 FUNC_4(VAR_10, VAR_0);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_6.ddpa_clonename = VAR_4;
 VAR_6.err_ds = FUNC_7();
 VAR_6.cr = FUNC_0();

 VAR_8 = FUNC_6(VAR_4, VAR_2,
     VAR_3, &VAR_6,
     2 + VAR_7, VAR_1);




 VAR_9 = FUNC_9(VAR_6.err_ds, ((void*)0));
 if (VAR_9 != ((void*)0) && VAR_5 != ((void*)0))
  (void) FUNC_11(VAR_5, FUNC_10(VAR_9));

 FUNC_8(VAR_6.err_ds);
 return (VAR_8);
}
