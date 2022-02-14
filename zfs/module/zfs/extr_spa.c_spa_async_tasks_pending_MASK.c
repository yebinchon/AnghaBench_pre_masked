
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int spa_async_tasks; scalar_t__ spa_ccw_fail_time; } ;
typedef TYPE_1__ spa_t ;
typedef int hrtime_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_1(spa_t *VAR_4)
{
 uint_t VAR_5;
 uint_t VAR_6;
 boolean_t VAR_7;

 VAR_5 = VAR_4->spa_async_tasks & ~VAR_2;
 VAR_6 = VAR_4->spa_async_tasks & VAR_2;
 if (VAR_4->spa_ccw_fail_time == 0) {
  VAR_7 = VAR_0;
 } else {
  VAR_7 =
      (FUNC_0() - VAR_4->spa_ccw_fail_time) <
      ((hrtime_t)VAR_3 * VAR_1);
 }

 return (VAR_5 || (VAR_6 && !VAR_7));
}
