
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pool_scrub_cmd_t ;
typedef int dsl_scan_t ;
struct TYPE_4__ {int * dp_scan; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_5, dmu_tx_t *VAR_6)
{
 pool_scrub_cmd_t *VAR_7 = VAR_5;
 dsl_pool_t *VAR_8 = FUNC_1(VAR_6);
 dsl_scan_t *VAR_9 = VAR_8->dp_scan;

 if (*VAR_7 == VAR_4) {

  if (!FUNC_3(VAR_8))
   return (FUNC_0(VAR_1));


  if (FUNC_2(VAR_9))
   return (FUNC_0(VAR_0));
 } else if (*VAR_7 != VAR_3) {
  return (FUNC_0(VAR_2));
 }

 return (0);
}
