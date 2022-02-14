
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int state; scalar_t__ writes; scalar_t__ reads; scalar_t__ nwritten; scalar_t__ nread; scalar_t__ ndirty; scalar_t__* times; scalar_t__ txg; } ;
typedef TYPE_1__ spa_txg_history_t ;
typedef int longlong_t ;
 int FUNC_0 (struct seq_file*,char*,int ,scalar_t__,char,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 spa_txg_history_t *VAR_2 = (spa_txg_history_t *)VAR_1;
 uint64_t VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 char VAR_7;

 switch (VAR_2->state) {
  case 133: VAR_7 = 'B'; break;
  case 131: VAR_7 = 'O'; break;
  case 130: VAR_7 = 'Q'; break;
  case 128: VAR_7 = 'W'; break;
  case 129: VAR_7 = 'S'; break;
  case 132: VAR_7 = 'C'; break;
  default: VAR_7 = '?'; break;
 }

 if (VAR_2->times[131])
  VAR_3 = VAR_2->times[131] -
      VAR_2->times[133];

 if (VAR_2->times[130])
  VAR_4 = VAR_2->times[130] -
      VAR_2->times[131];

 if (VAR_2->times[128])
  VAR_5 = VAR_2->times[128] -
      VAR_2->times[130];

 if (VAR_2->times[129])
  VAR_6 = VAR_2->times[129] -
      VAR_2->times[128];

 FUNC_0(VAR_0, "%-8llu %-16llu %-5c %-12llu "
     "%-12llu %-12llu %-8llu %-8llu %-12llu %-12llu %-12llu %-12llu\n",
     (longlong_t)VAR_2->txg, VAR_2->times[133], VAR_7,
     (u_longlong_t)VAR_2->ndirty,
     (u_longlong_t)VAR_2->nread, (u_longlong_t)VAR_2->nwritten,
     (u_longlong_t)VAR_2->reads, (u_longlong_t)VAR_2->writes,
     (u_longlong_t)VAR_3, (u_longlong_t)VAR_4, (u_longlong_t)VAR_5,
     (u_longlong_t)VAR_6);

 return (0);
}
