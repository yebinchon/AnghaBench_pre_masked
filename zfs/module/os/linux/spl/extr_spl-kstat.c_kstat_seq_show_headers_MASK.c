
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_4__ {int (* headers ) (int ,int ) ;} ;
struct TYPE_5__ {scalar_t__ ks_magic; int ks_type; int ks_raw_buf; int ks_raw_bufsize; TYPE_1__ ks_raw_ops; int ks_snaptime; int ks_crtime; scalar_t__ ks_data_size; int ks_ndata; int ks_flags; int ks_kid; } ;
typedef TYPE_2__ kstat_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct seq_file *VAR_2)
{
 kstat_t *VAR_3 = (kstat_t *)VAR_2->private;
 int VAR_4 = 0;

 FUNC_0(VAR_3->ks_magic == VAR_1);

 FUNC_3(VAR_2, "%d %d 0x%02x %d %d %lld %lld\n",
     VAR_3->ks_kid, VAR_3->ks_type, VAR_3->ks_flags,
     VAR_3->ks_ndata, (int)VAR_3->ks_data_size,
     VAR_3->ks_crtime, VAR_3->ks_snaptime);

 switch (VAR_3->ks_type) {
  case 129:
restart:
   if (VAR_3->ks_raw_ops.headers) {
    VAR_4 = VAR_3->ks_raw_ops.headers(
        VAR_3->ks_raw_buf, VAR_3->ks_raw_bufsize);
    if (VAR_4 == VAR_0 && !FUNC_2(VAR_3))
     goto restart;
    if (!VAR_4)
     FUNC_4(VAR_2, VAR_3->ks_raw_buf);
   } else {
    FUNC_3(VAR_2, "raw data\n");
   }
   break;
  case 130:
   FUNC_3(VAR_2, "%-31s %-4s %s\n",
       "name", "type", "data");
   break;
  case 132:
   FUNC_3(VAR_2, "%-8s %-8s %-8s %-8s %-8s\n",
       "hard", "soft", "watchdog",
       "spurious", "multsvc");
   break;
  case 131:
   FUNC_3(VAR_2,
       "%-8s %-8s %-8s %-8s %-8s %-8s "
       "%-8s %-8s %-8s %-8s %-8s %-8s\n",
       "nread", "nwritten", "reads", "writes",
       "wtime", "wlentime", "wupdate",
       "rtime", "rlentime", "rupdate",
       "wcnt", "rcnt");
   break;
  case 128:
   FUNC_3(VAR_2,
       "%-31s %-8s "
       "%-8s %-8s %-8s %-8s %-8s\n",
       "name", "events", "elapsed",
       "min", "max", "start", "stop");
   break;
  default:
   FUNC_1("Undefined kstat type %d\n", VAR_3->ks_type);
 }

 return (-VAR_4);
}
