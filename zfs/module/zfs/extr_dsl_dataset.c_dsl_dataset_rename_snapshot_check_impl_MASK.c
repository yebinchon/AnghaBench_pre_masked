
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_5__ {int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_6__ {int ddrsa_newsnapname; int ddrsa_oldsnapname; } ;
typedef TYPE_2__ dsl_dataset_rename_snapshot_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(dsl_pool_t *VAR_4,
    dsl_dataset_t *VAR_5, void *VAR_6)
{
 dsl_dataset_rename_snapshot_arg_t *VAR_7 = VAR_6;
 int VAR_8;
 uint64_t VAR_9;

 VAR_8 = FUNC_1(VAR_5, VAR_7->ddrsa_oldsnapname, &VAR_9);
 if (VAR_8 != 0) {

  return (VAR_8 == VAR_2 ? 0 : VAR_8);
 }


 VAR_8 = FUNC_1(VAR_5, VAR_7->ddrsa_newsnapname, &VAR_9);
 if (VAR_8 == 0)
  VAR_8 = FUNC_0(VAR_0);
 else if (VAR_8 == VAR_2)
  VAR_8 = 0;


 if (FUNC_2(VAR_5->ds_dir) + 1 +
     FUNC_3(VAR_7->ddrsa_newsnapname) >= VAR_3)
  VAR_8 = FUNC_0(VAR_1);

 return (VAR_8);
}
