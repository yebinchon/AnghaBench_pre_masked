
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int redaction_list_phys_t ;
struct TYPE_5__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_6__ {int dbcra_numsnaps; int dbcra_bmark; int dbcra_snap; } ;
typedef TYPE_2__ dsl_bookmark_create_redacted_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_4, dmu_tx_t *VAR_5)
{
 dsl_bookmark_create_redacted_arg_t *VAR_6 = VAR_4;
 dsl_pool_t *VAR_7 = FUNC_2(VAR_5);
 dsl_dataset_t *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_6(VAR_7->dp_spa,
     VAR_3))
  return (FUNC_0(VAR_1));




 if (VAR_6->dbcra_numsnaps > (FUNC_1() -
     sizeof (redaction_list_phys_t)) / sizeof (uint64_t))
  return (FUNC_0(VAR_0));

 VAR_9 = FUNC_4(VAR_7, VAR_6->dbcra_snap,
     VAR_2, &VAR_8);
 if (VAR_9 == 0) {
  VAR_9 = FUNC_3(VAR_8, VAR_6->dbcra_bmark,
      VAR_5);
  FUNC_5(VAR_8, VAR_2);
 }
 return (VAR_9);
}
