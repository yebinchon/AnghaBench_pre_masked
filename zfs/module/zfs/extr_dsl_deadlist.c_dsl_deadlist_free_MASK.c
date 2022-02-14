
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_6__ {scalar_t__ za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {scalar_t__ doi_type; } ;
typedef TYPE_2__ dmu_object_info_t ;
struct TYPE_8__ {scalar_t__ dp_empty_bpobj; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int *,scalar_t__,int *) ;
 int FUNC_4 (int *,scalar_t__,TYPE_2__*) ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*) ;

void
FUNC_10(objset_t *VAR_1, uint64_t VAR_2, dmu_tx_t *VAR_3)
{
 dmu_object_info_t VAR_4;
 zap_cursor_t VAR_5;
 zap_attribute_t VAR_6;

 FUNC_0(FUNC_4(VAR_1, VAR_2, &VAR_4));
 if (VAR_4.doi_type == VAR_0) {
  FUNC_2(VAR_1, VAR_2, VAR_3);
  return;
 }

 for (FUNC_8(&VAR_5, VAR_1, VAR_2);
     FUNC_9(&VAR_5, &VAR_6) == 0;
     FUNC_6(&VAR_5)) {
  uint64_t VAR_7 = VAR_6.za_first_integer;
  if (VAR_7 == FUNC_5(VAR_1)->dp_empty_bpobj)
   FUNC_1(VAR_1, VAR_3);
  else
   FUNC_2(VAR_1, VAR_7, VAR_3);
 }
 FUNC_7(&VAR_5);
 FUNC_0(FUNC_3(VAR_1, VAR_2, VAR_3));
}
