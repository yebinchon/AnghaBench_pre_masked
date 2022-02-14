
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_7__ {scalar_t__ spa_missing_tvds; int * spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
typedef scalar_t__ spa_import_type_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(spa_t *VAR_4, spa_import_type_t VAR_5, char **VAR_6)
{
 vdev_t *VAR_7 = VAR_4->spa_root_vdev;

 if (VAR_5 != VAR_2 && FUNC_4(VAR_4)) {
  boolean_t VAR_8 = FUNC_0(VAR_4);
  if (VAR_8) {
   if (VAR_4->spa_missing_tvds != 0) {
    FUNC_2(VAR_4, "spa_check_logs failed "
        "so dropping the logs");
   } else {
    *VAR_6 = VAR_1;
    FUNC_1(VAR_4, "spa_check_logs failed");
    return (FUNC_3(VAR_7, VAR_3,
        VAR_0));
   }
  }
 }

 return (0);
}
