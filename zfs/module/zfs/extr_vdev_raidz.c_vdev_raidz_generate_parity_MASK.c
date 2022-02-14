
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rm_firstdatacol; } ;
typedef TYPE_1__ raidz_map_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

void
FUNC_5(raidz_map_t *VAR_2)
{

 if (FUNC_4(VAR_2) != VAR_1)
  return;

 switch (VAR_2->rm_firstdatacol) {
 case 1:
  FUNC_1(VAR_2);
  break;
 case 2:
  FUNC_2(VAR_2);
  break;
 case 3:
  FUNC_3(VAR_2);
  break;
 default:
  FUNC_0(VAR_0, "invalid RAID-Z configuration");
 }
}
