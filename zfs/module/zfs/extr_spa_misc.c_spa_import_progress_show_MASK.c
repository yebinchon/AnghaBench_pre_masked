
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_longlong_t ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {char* pool_name; scalar_t__ spa_load_max_txg; scalar_t__ mmp_sec_remaining; scalar_t__ spa_load_state; scalar_t__ pool_guid; } ;
typedef TYPE_1__ spa_import_progress_t ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 spa_import_progress_t *VAR_2 = (spa_import_progress_t *)VAR_1;

 FUNC_0(VAR_0, "%-20llu %-14llu %-14llu %-12llu %s\n",
     (u_longlong_t)VAR_2->pool_guid, (u_longlong_t)VAR_2->spa_load_state,
     (u_longlong_t)VAR_2->mmp_sec_remaining,
     (u_longlong_t)VAR_2->spa_load_max_txg,
     (VAR_2->pool_name ? VAR_2->pool_name : "-"));

 return (0);
}
