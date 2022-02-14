
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int ub_mmp_delay; } ;
typedef TYPE_1__ uberblock_t ;
typedef int spa_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int,int,int,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint64_t
FUNC_11(spa_t *VAR_4, uberblock_t *VAR_5)
{
 uint64_t VAR_6 = FUNC_1(VAR_2, 1);
 uint64_t VAR_7 = FUNC_8(
     FUNC_5(VAR_3));
 uint64_t VAR_8 = FUNC_1(VAR_1, VAR_6 *
     VAR_7);
 FUNC_0(VAR_0 >= 100);

 if (FUNC_6(VAR_5) && FUNC_3(VAR_5) &&
     FUNC_2(VAR_5) > 0) {


  VAR_8 = FUNC_2(VAR_5) * FUNC_8(FUNC_4(VAR_5)) *
      VAR_0 / 100;

  FUNC_10("fail_intvals>0 import_delay=%llu ub_mmp "
      "mmp_fails=%llu ub_mmp mmp_interval=%llu "
      "import_intervals=%u", VAR_8, FUNC_2(VAR_5),
      FUNC_4(VAR_5), VAR_6);

 } else if (FUNC_6(VAR_5) && FUNC_3(VAR_5) &&
     FUNC_2(VAR_5) == 0) {


  VAR_8 = FUNC_1(VAR_8, (FUNC_8(FUNC_4(VAR_5)) +
      VAR_5->ub_mmp_delay) * VAR_6);

  FUNC_10("fail_intvals=0 import_delay=%llu ub_mmp "
      "mmp_interval=%llu ub_mmp_delay=%llu "
      "import_intervals=%u", VAR_8, FUNC_4(VAR_5),
      VAR_5->ub_mmp_delay, VAR_6);

 } else if (FUNC_7(VAR_5)) {




  VAR_8 = FUNC_1(VAR_8, (VAR_7 +
      VAR_5->ub_mmp_delay) * VAR_6);

  FUNC_10("import_delay=%llu ub_mmp_delay=%llu "
      "import_intervals=%u leaves=%u", VAR_8,
      VAR_5->ub_mmp_delay, VAR_6,
      FUNC_9(VAR_4));
 } else {

  FUNC_10("pool last imported on non-MMP aware "
      "host using import_delay=%llu multihost_interval=%llu "
      "import_intervals=%u", VAR_8, VAR_7,
      VAR_6);
 }

 return (VAR_8);
}
