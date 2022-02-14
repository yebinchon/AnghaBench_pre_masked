
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_9__ {int za_integer_length; int za_num_integers; int za_name; } ;
typedef TYPE_2__ zap_attribute_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_10__ {int dd_dbuf; TYPE_1__* dd_pool; } ;
typedef TYPE_3__ dsl_dir_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {scalar_t__ dd_deleg_zapobj; } ;
struct TYPE_8__ {int * dp_meta_objset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,char*,int,int,scalar_t__*,int *) ;
 void* FUNC_5 (int *,int ,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int *,scalar_t__,char*,int,int,scalar_t__*) ;
 scalar_t__ FUNC_11 (int *,scalar_t__,int ,int,int,scalar_t__*,int *) ;
 int FUNC_12 (char*,int ,int ,scalar_t__*) ;

__attribute__((used)) static void
FUNC_13(dsl_dir_t *VAR_9, uint64_t VAR_10,
    boolean_t VAR_11, uint64_t VAR_12, dmu_tx_t *VAR_13)
{
 objset_t *VAR_14 = VAR_9->dd_pool->dp_meta_objset;
 uint64_t VAR_15, VAR_16;
 uint64_t VAR_17 = FUNC_3(VAR_9)->dd_deleg_zapobj;
 zap_cursor_t VAR_18;
 zap_attribute_t VAR_19;
 char VAR_20[VAR_8];

 FUNC_12(VAR_20,
     VAR_11 ? VAR_4 : VAR_3,
     VAR_5, ((void*)0));
 if (FUNC_10(VAR_14, VAR_10, VAR_20, 8, 1, &VAR_16) != 0)
  return;

 if (VAR_17 == 0) {
  FUNC_2(VAR_9->dd_dbuf, VAR_13);
  VAR_17 = FUNC_3(VAR_9)->dd_deleg_zapobj = FUNC_5(VAR_14,
      VAR_0, VAR_1, 0, VAR_13);
 }

 FUNC_12(VAR_20,
     VAR_11 ? VAR_7 : VAR_6,
     VAR_5, &VAR_12);
 if (FUNC_10(VAR_14, VAR_17, VAR_20, 8, 1, &VAR_15) == VAR_2) {
  VAR_15 = FUNC_5(VAR_14, VAR_0, VAR_1, 0, VAR_13);
  FUNC_1(FUNC_4(VAR_14, VAR_17, VAR_20, 8, 1, &VAR_15, VAR_13) == 0);
 }

 for (FUNC_8(&VAR_18, VAR_14, VAR_16);
     FUNC_9(&VAR_18, &VAR_19) == 0;
     FUNC_6(&VAR_18)) {
  uint64_t VAR_21 = 0;
  FUNC_0(VAR_19.za_integer_length == 8 && VAR_19.za_num_integers == 1);

  FUNC_1(FUNC_11(VAR_14, VAR_15, VAR_19.za_name,
      8, 1, &VAR_21, VAR_13) == 0);
 }
 FUNC_7(&VAR_18);
}
