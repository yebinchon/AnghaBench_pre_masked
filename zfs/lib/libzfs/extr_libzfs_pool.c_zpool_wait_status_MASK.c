
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_wait_activity_t ;
struct TYPE_3__ {int zpool_name; int zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int,int ,int ) ;

int
FUNC_3(zpool_handle_t *VAR_2, zpool_wait_activity_t VAR_3,
    boolean_t *VAR_4, boolean_t *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_2->zpool_name, VAR_3, VAR_5);
 *VAR_4 = (VAR_6 == VAR_0);
 if (*VAR_4)
  return (0);

 if (VAR_6 != 0) {
  (void) FUNC_2(VAR_2->zpool_hdl, VAR_6,
      FUNC_0(VAR_1, "error waiting in pool '%s'"),
      VAR_2->zpool_name);
 }

 return (VAR_6);
}
