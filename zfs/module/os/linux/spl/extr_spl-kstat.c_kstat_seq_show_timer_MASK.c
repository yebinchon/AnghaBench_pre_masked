
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int stop_time; int start_time; int max_time; int min_time; int elapsed_time; int num_events; int name; } ;
typedef TYPE_1__ kstat_timer_t ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, kstat_timer_t *VAR_1)
{
 FUNC_0(VAR_0,
     "%-31s %-8llu %-8llu %-8llu %-8llu %-8llu %-8llu\n",
     VAR_1->name, VAR_1->num_events, VAR_1->elapsed_time,
     VAR_1->min_time, VAR_1->max_time,
     VAR_1->start_time, VAR_1->stop_time);

 return (0);
}
