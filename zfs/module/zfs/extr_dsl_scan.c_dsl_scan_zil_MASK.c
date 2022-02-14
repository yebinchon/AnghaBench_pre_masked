
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zilog_t ;
struct TYPE_8__ {TYPE_2__* member_1; TYPE_3__* member_0; } ;
typedef TYPE_1__ zil_scan_arg_t ;
struct TYPE_9__ {scalar_t__ zh_claim_txg; } ;
typedef TYPE_2__ zil_header_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int dp_meta_objset; int dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(dsl_pool_t *VAR_3, zil_header_t *VAR_4)
{
 uint64_t VAR_5 = VAR_4->zh_claim_txg;
 zil_scan_arg_t VAR_6 = { VAR_3, VAR_4 };
 zilog_t *VAR_7;

 FUNC_0(FUNC_1(VAR_3->dp_spa));





 if (VAR_5 == 0)
  return;

 VAR_7 = FUNC_2(VAR_3->dp_meta_objset, VAR_4);

 (void) FUNC_4(VAR_7, VAR_1, VAR_2, &VAR_6,
     VAR_5, VAR_0);

 FUNC_3(VAR_7);
}
