
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbcra_rl; int dbcra_tag; int dbcra_snaps; int dbcra_numsnaps; int dbcra_snap; int dbcra_bmark; } ;
typedef TYPE_1__ dsl_bookmark_create_redacted_arg_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, dmu_tx_t *VAR_1)
{
 dsl_bookmark_create_redacted_arg_t *VAR_2 = VAR_0;
 FUNC_0(VAR_2->dbcra_bmark, VAR_2->dbcra_snap, VAR_1,
     VAR_2->dbcra_numsnaps, VAR_2->dbcra_snaps, VAR_2->dbcra_tag,
     VAR_2->dbcra_rl);
}
