
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int objset_t ;
typedef int nvlist_t ;
typedef int dsl_prop_getflags_t ;
struct TYPE_12__ {int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_13__ {struct TYPE_13__* dd_parent; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_14__ {TYPE_2__* ds_dir; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_16__ {scalar_t__ ds_props_obj; } ;
struct TYPE_15__ {scalar_t__ dd_props_zapobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 TYPE_9__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 TYPE_6__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,scalar_t__,char*,int,int *) ;
 scalar_t__ FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(dsl_dataset_t *VAR_7, nvlist_t **VAR_8,
    dsl_prop_getflags_t VAR_9)
{
 dsl_dir_t *VAR_10 = VAR_7->ds_dir;
 dsl_pool_t *VAR_11 = VAR_10->dd_pool;
 objset_t *VAR_12 = VAR_11->dp_meta_objset;
 int VAR_13 = 0;
 char VAR_14[VAR_6];

 FUNC_1(FUNC_8(VAR_8, VAR_5, VAR_4) == 0);

 if (VAR_7->ds_is_snapshot)
  VAR_9 |= VAR_3;

 FUNC_0(FUNC_6(VAR_11));

 if (FUNC_3(VAR_7)->ds_props_obj != 0) {
  FUNC_0(VAR_9 & VAR_3);
  FUNC_2(VAR_7, VAR_14);
  VAR_13 = FUNC_7(VAR_12,
      FUNC_3(VAR_7)->ds_props_obj, VAR_14, VAR_9, *VAR_8);
  if (VAR_13)
   goto out;
 }

 for (; VAR_10 != ((void*)0); VAR_10 = VAR_10->dd_parent) {
  if (VAR_10 != VAR_7->ds_dir || (VAR_9 & VAR_3)) {
   if (VAR_9 & (VAR_1 |
       VAR_2))
    break;
   VAR_9 |= VAR_0;
  }
  FUNC_4(VAR_10, VAR_14);
  VAR_13 = FUNC_7(VAR_12,
      FUNC_5(VAR_10)->dd_props_zapobj, VAR_14, VAR_9, *VAR_8);
  if (VAR_13)
   break;
 }

out:
 if (VAR_13) {
  FUNC_9(*VAR_8);
  *VAR_8 = ((void*)0);
 }
 return (VAR_13);
}
