
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_wait_activity_t ;
typedef int uint64_t ;
struct TYPE_5__ {int spa_activities_lock; int spa_waiters_cv; int spa_waiters; int spa_activities_cv; scalar_t__ spa_waiters_cancel; } ;
typedef TYPE_1__ spa_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char const*,TYPE_1__**,int ) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_7, zpool_wait_activity_t VAR_8,
    boolean_t VAR_9, uint64_t VAR_10, boolean_t *VAR_11)
{
 if (VAR_9 && VAR_8 != VAR_5)
  return (VAR_3);

 if (VAR_8 < 0 || VAR_8 >= VAR_6)
  return (VAR_3);

 spa_t *VAR_12;
 int VAR_13 = FUNC_6(VAR_7, &VAR_12, VAR_4);
 if (VAR_13 != 0)
  return (VAR_13);
 FUNC_2(&VAR_12->spa_activities_lock);
 VAR_12->spa_waiters++;
 FUNC_5(VAR_12, VAR_4);

 *VAR_11 = VAR_0;
 for (;;) {
  boolean_t VAR_14;
  VAR_13 = FUNC_4(VAR_12, VAR_8, VAR_9, VAR_10,
      &VAR_14);

  if (VAR_13 || !VAR_14 || VAR_12->spa_waiters_cancel)
   break;

  *VAR_11 = VAR_1;

  if (FUNC_1(&VAR_12->spa_activities_cv,
      &VAR_12->spa_activities_lock) == 0) {
   VAR_13 = VAR_2;
   break;
  }
 }

 VAR_12->spa_waiters--;
 FUNC_0(&VAR_12->spa_waiters_cv);
 FUNC_3(&VAR_12->spa_activities_lock);

 return (VAR_13);
}
