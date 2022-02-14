
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sci_timestamp; int sci_dspace; } ;
struct TYPE_10__ {TYPE_1__ spa_checkpoint_info; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_11__ {int pcs_start_time; int pcs_space; int pcs_state; } ;
typedef TYPE_3__ pool_checkpoint_stat_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;

int
FUNC_6(spa_t *VAR_7, pool_checkpoint_stat_t *VAR_8)
{
 if (!FUNC_3(VAR_7, VAR_5))
  return (FUNC_1(VAR_6));

 FUNC_2(VAR_8, sizeof (pool_checkpoint_stat_t));

 int VAR_9 = FUNC_5(FUNC_4(VAR_7),
     VAR_2, VAR_3);
 FUNC_0(VAR_9 == 0 || VAR_9 == VAR_4);

 if (VAR_9 == VAR_4)
  VAR_8->pcs_state = VAR_0;
 else
  VAR_8->pcs_state = VAR_1;

 VAR_8->pcs_space = VAR_7->spa_checkpoint_info.sci_dspace;
 VAR_8->pcs_start_time = VAR_7->spa_checkpoint_info.sci_timestamp;

 return (0);
}
