
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
typedef int kstat_timer_t ;
struct TYPE_4__ {int (* data ) (int ,int ,void*) ;} ;
struct TYPE_5__ {scalar_t__ ks_magic; int ks_type; int ks_ndata; int ks_data_size; int ks_data; int ks_raw_buf; int ks_raw_bufsize; TYPE_1__ ks_raw_ops; } ;
typedef TYPE_2__ kstat_t ;
typedef int kstat_named_t ;
typedef int kstat_io_t ;
typedef int kstat_intr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct seq_file*,int *) ;
 int FUNC_4 (struct seq_file*,int *) ;
 int FUNC_5 (struct seq_file*,int *) ;
 int FUNC_6 (struct seq_file*,int ,int ) ;
 int FUNC_7 (struct seq_file*,int *) ;
 int FUNC_8 (struct seq_file*,int ) ;
 int FUNC_9 (int ,int ,void*) ;

__attribute__((used)) static int
FUNC_10(struct seq_file *VAR_2, void *VAR_3)
{
 kstat_t *VAR_4 = (kstat_t *)VAR_2->private;
 int VAR_5 = 0;

 FUNC_0(VAR_4->ks_magic == VAR_1);

 switch (VAR_4->ks_type) {
  case 129:
restart:
   if (VAR_4->ks_raw_ops.data) {
    VAR_5 = VAR_4->ks_raw_ops.data(
        VAR_4->ks_raw_buf, VAR_4->ks_raw_bufsize, VAR_3);
    if (VAR_5 == VAR_0 && !FUNC_2(VAR_4))
     goto restart;
    if (!VAR_5)
     FUNC_8(VAR_2, VAR_4->ks_raw_buf);
   } else {
    FUNC_0(VAR_4->ks_ndata == 1);
    VAR_5 = FUNC_6(VAR_2, VAR_4->ks_data,
        VAR_4->ks_data_size);
   }
   break;
  case 130:
   VAR_5 = FUNC_5(VAR_2, (kstat_named_t *)VAR_3);
   break;
  case 132:
   VAR_5 = FUNC_3(VAR_2, (kstat_intr_t *)VAR_3);
   break;
  case 131:
   VAR_5 = FUNC_4(VAR_2, (kstat_io_t *)VAR_3);
   break;
  case 128:
   VAR_5 = FUNC_7(VAR_2, (kstat_timer_t *)VAR_3);
   break;
  default:
   FUNC_1("Undefined kstat type %d\n", VAR_4->ks_type);
 }

 return (-VAR_5);
}
