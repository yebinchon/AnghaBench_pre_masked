
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ spa_errlog_scrub; scalar_t__ spa_errlog_last; int spa_errlist_lock; int spa_errlist_scrub; int spa_errlist_last; int spa_errlog_lock; int spa_meta_objset; int spa_scrub_finished; } ;
typedef TYPE_1__ spa_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__*) ;

uint64_t
FUNC_4(spa_t *VAR_0)
{
 uint64_t VAR_1 = 0, VAR_2;

 FUNC_1(&VAR_0->spa_errlog_lock);
 if (VAR_0->spa_errlog_scrub != 0 &&
     FUNC_3(VAR_0->spa_meta_objset, VAR_0->spa_errlog_scrub,
     &VAR_2) == 0)
  VAR_1 += VAR_2;

 if (VAR_0->spa_errlog_last != 0 && !VAR_0->spa_scrub_finished &&
     FUNC_3(VAR_0->spa_meta_objset, VAR_0->spa_errlog_last,
     &VAR_2) == 0)
  VAR_1 += VAR_2;
 FUNC_2(&VAR_0->spa_errlog_lock);

 FUNC_1(&VAR_0->spa_errlist_lock);
 VAR_1 += FUNC_0(&VAR_0->spa_errlist_last);
 VAR_1 += FUNC_0(&VAR_0->spa_errlist_scrub);
 FUNC_2(&VAR_0->spa_errlist_lock);

 return (VAR_1);
}
