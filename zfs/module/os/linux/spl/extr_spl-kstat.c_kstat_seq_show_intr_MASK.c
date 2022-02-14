
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int * intrs; } ;
typedef TYPE_1__ kstat_intr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_5, kstat_intr_t *VAR_6)
{
 FUNC_0(VAR_5, "%-8u %-8u %-8u %-8u %-8u\n",
     VAR_6->intrs[VAR_0],
     VAR_6->intrs[VAR_2],
     VAR_6->intrs[VAR_4],
     VAR_6->intrs[VAR_3],
     VAR_6->intrs[VAR_1]);

 return (0);
}
