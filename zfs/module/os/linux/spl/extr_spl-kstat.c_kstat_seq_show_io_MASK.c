
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int rcnt; int wcnt; int rlastupdate; int rlentime; int rtime; int wlastupdate; int wlentime; int wtime; int writes; int reads; int nwritten; int nread; } ;
typedef TYPE_1__ kstat_io_t ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, kstat_io_t *VAR_1)
{

 FUNC_0(VAR_0,
     "%-8llu %-8llu %-8u %-8u %-8llu %-8llu "
     "%-8llu %-8llu %-8llu %-8llu %-8u %-8u\n",
     VAR_1->nread, VAR_1->nwritten,
     VAR_1->reads, VAR_1->writes,
     VAR_1->wtime, VAR_1->wlentime, VAR_1->wlastupdate,
     VAR_1->rtime, VAR_1->rlentime, VAR_1->rlastupdate,
     VAR_1->wcnt, VAR_1->rcnt);

 return (0);
}
