
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0)
{
 FUNC_0(VAR_0, "%-10s %-10s %-10s %-6s %-10s %-12s %-24s "
     "%-10s %s\n", "id", "txg", "timestamp", "error", "duration",
     "mmp_delay", "vdev_guid", "vdev_label", "vdev_path");
 return (0);
}
