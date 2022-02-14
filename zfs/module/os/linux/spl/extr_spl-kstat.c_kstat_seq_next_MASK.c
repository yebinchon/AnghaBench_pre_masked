
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {scalar_t__ ks_magic; scalar_t__ ks_ndata; } ;
typedef TYPE_1__ kstat_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void *
FUNC_2(struct seq_file *VAR_1, void *VAR_2, loff_t *VAR_3)
{
 kstat_t *VAR_4 = (kstat_t *)VAR_1->private;
 FUNC_0(VAR_4->ks_magic == VAR_0);

 ++*VAR_3;
 if (*VAR_3 >= VAR_4->ks_ndata)
  return (((void*)0));

 return (FUNC_1(VAR_4, *VAR_3));
}
