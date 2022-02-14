
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_7__ {scalar_t__ spa_config_source; scalar_t__ spa_missing_tvds; int spa_mode; int spa_root_vdev; scalar_t__ spa_missing_tvds_allowed; scalar_t__ spa_trust_config; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_8(spa_t *VAR_10)
{
 int VAR_11 = 0;





 if (VAR_10->spa_trust_config) {
  VAR_10->spa_missing_tvds_allowed = VAR_7;
 } else if (VAR_10->spa_config_source == VAR_5) {
  VAR_10->spa_missing_tvds_allowed = VAR_8;
 } else if (VAR_10->spa_config_source == VAR_6) {
  VAR_10->spa_missing_tvds_allowed = VAR_9;
 } else {
  VAR_10->spa_missing_tvds_allowed = 0;
 }

 VAR_10->spa_missing_tvds_allowed =
     FUNC_0(VAR_7, VAR_10->spa_missing_tvds_allowed);

 FUNC_2(VAR_10, VAR_4, VAR_1, VAR_3);
 VAR_11 = FUNC_7(VAR_10->spa_root_vdev);
 FUNC_3(VAR_10, VAR_4, VAR_1);

 if (VAR_10->spa_missing_tvds != 0) {
  FUNC_5(VAR_10, "vdev tree has %lld missing top-level "
      "vdevs.", (u_longlong_t)VAR_10->spa_missing_tvds);
  if (VAR_10->spa_trust_config && (VAR_10->spa_mode & VAR_2)) {
   FUNC_5(VAR_10, "pools with missing top-level "
       "vdevs can only be opened in read-only mode.");
   VAR_11 = FUNC_1(VAR_0);
  } else {
   FUNC_5(VAR_10, "current settings allow for maximum "
       "%lld missing top-level vdevs at this stage.",
       (u_longlong_t)VAR_10->spa_missing_tvds_allowed);
  }
 }
 if (VAR_11 != 0) {
  FUNC_4(VAR_10, "unable to open vdev tree [error=%d]",
      VAR_11);
 }
 if (VAR_10->spa_missing_tvds != 0 || VAR_11 != 0)
  FUNC_6(VAR_10->spa_root_vdev, 2);

 return (VAR_11);
}
