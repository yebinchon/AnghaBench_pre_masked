
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int matchtype_t ;
struct TYPE_9__ {TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_10__ {int ds_flags; int ds_snapnames_zapobj; } ;
struct TYPE_8__ {TYPE_1__* dd_pool; } ;
struct TYPE_7__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,char const*,int,int,int *) ;
 int FUNC_2 (int *,int ,char const*,int,int,int *,int,int *,int ,int *) ;

int
FUNC_3(dsl_dataset_t *VAR_3, const char *VAR_4, uint64_t *VAR_5)
{
 objset_t *VAR_6 = VAR_3->ds_dir->dd_pool->dp_meta_objset;
 uint64_t VAR_7 = FUNC_0(VAR_3)->ds_snapnames_zapobj;
 matchtype_t VAR_8 = 0;
 int VAR_9;

 if (FUNC_0(VAR_3)->ds_flags & VAR_0)
  VAR_8 = VAR_2;

 VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_4, 8, 1,
     VAR_5, VAR_8, ((void*)0), 0, ((void*)0));
 if (VAR_9 == VAR_1 && (VAR_8 & VAR_2))
  VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_4, 8, 1, VAR_5);
 return (VAR_9);
}
