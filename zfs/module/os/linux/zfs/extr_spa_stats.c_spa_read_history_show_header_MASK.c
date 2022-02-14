
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0)
{
 FUNC_0(VAR_0, "%-8s %-16s %-8s %-8s %-8s %-8s %-8s "
     "%-24s %-8s %-16s\n", "UID", "start", "objset", "object",
     "level", "blkid", "aflags", "origin", "pid", "process");

 return (0);
}
