
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_longlong_t ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {char* vdev_path; scalar_t__ vdev_label; scalar_t__ vdev_guid; scalar_t__ mmp_delay; scalar_t__ duration; scalar_t__ io_error; scalar_t__ timestamp; scalar_t__ txg; scalar_t__ mmp_node_id; scalar_t__ error_start; } ;
typedef TYPE_1__ spa_mmp_history_t ;
typedef int longlong_t ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 spa_mmp_history_t *VAR_2 = (spa_mmp_history_t *)VAR_1;
 char VAR_3[] = "%-10llu %-10llu %10llu %#6llx %10lld %12llu %-24llu "
     "%-10lld %s\n";
 char VAR_4[] = "%-10llu %-10llu %10llu %6lld %10lld %12llu %-24llu "
     "%-10lld %s\n";

 FUNC_0(VAR_0, (VAR_2->error_start ? VAR_3 : VAR_4),
     (u_longlong_t)VAR_2->mmp_node_id, (u_longlong_t)VAR_2->txg,
     (u_longlong_t)VAR_2->timestamp, (longlong_t)VAR_2->io_error,
     (longlong_t)VAR_2->duration, (u_longlong_t)VAR_2->mmp_delay,
     (u_longlong_t)VAR_2->vdev_guid, (u_longlong_t)VAR_2->vdev_label,
     (VAR_2->vdev_path ? VAR_2->vdev_path : "-"));

 return (0);
}
