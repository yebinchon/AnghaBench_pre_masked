
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(struct seq_file *VAR_0)
{
 FUNC_0(VAR_0, "%-25s %5s %5s %5s %5s %5s %5s %12s %5s %10s\n",
     "taskq", "act", "nthr", "spwn", "maxt", "pri",
     "mina", "maxa", "cura", "flags");
}
