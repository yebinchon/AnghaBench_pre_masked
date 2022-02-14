
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {scalar_t__ ks_magic; scalar_t__ ks_type; int ks_lock; int ks_raw_bufsize; int ks_raw_buf; } ;
typedef TYPE_1__ kstat_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 kstat_t *VAR_4 = (kstat_t *)VAR_2->private;
 FUNC_0(VAR_4->ks_magic == VAR_1);

 if (VAR_4->ks_type == VAR_0)
  FUNC_2(VAR_4->ks_raw_buf, VAR_4->ks_raw_bufsize);

 FUNC_1(VAR_4->ks_lock);
}
