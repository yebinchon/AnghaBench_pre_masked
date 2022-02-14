
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {scalar_t__ ks_magic; scalar_t__ ks_type; int ks_flags; scalar_t__ ks_ndata; int ks_snaptime; int (* ks_update ) (TYPE_1__*,int ) ;int ks_raw_bufsize; int ks_raw_buf; int ks_lock; } ;
typedef TYPE_1__ kstat_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 void* FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct seq_file*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void *
FUNC_7(struct seq_file *VAR_6, loff_t *VAR_7)
{
 loff_t VAR_8 = *VAR_7;
 kstat_t *VAR_9 = (kstat_t *)VAR_6->private;
 FUNC_0(VAR_9->ks_magic == VAR_4);

 FUNC_4(VAR_9->ks_lock);

 if (VAR_9->ks_type == VAR_3) {
  VAR_9->ks_raw_bufsize = VAR_5;
  VAR_9->ks_raw_buf = FUNC_6(VAR_9->ks_raw_bufsize, VAR_0);
 }


 (void) VAR_9->ks_update(VAR_9, VAR_2);

 VAR_9->ks_snaptime = FUNC_1();

 if (!(VAR_9->ks_flags & VAR_1) && !VAR_8 &&
     FUNC_3(VAR_6))
  return (((void*)0));

 if (VAR_8 >= VAR_9->ks_ndata)
  return (((void*)0));

 return (FUNC_2(VAR_9, VAR_8));
}
