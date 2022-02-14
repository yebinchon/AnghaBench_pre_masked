
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zd_name; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef int zfs_prop_t ;
typedef int uint64_t ;
typedef int proplist ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

void
FUNC_7(ztest_ds_t *VAR_6, uint64_t VAR_7)
{
 zfs_prop_t VAR_8[] = {
  VAR_0,
  VAR_1,
  VAR_2,
  VAR_3
 };
 int VAR_9;

 (void) FUNC_1(&VAR_5);

 for (VAR_9 = 0; VAR_9 < sizeof (VAR_8) / sizeof (VAR_8[0]); VAR_9++)
  (void) FUNC_3(VAR_6->zd_name, VAR_8[VAR_9],
      FUNC_6(VAR_8[VAR_9]), (int)FUNC_4(2));

 FUNC_0(FUNC_3(VAR_6->zd_name, VAR_4,
     FUNC_5(), (int)FUNC_4(2)));

 (void) FUNC_2(&VAR_5);
}
