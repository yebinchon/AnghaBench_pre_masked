
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int loff_t ;
typedef int kstat_timer_t ;
struct TYPE_5__ {void* (* addr ) (TYPE_2__*,int) ;} ;
struct TYPE_6__ {int ks_type; int ks_data; TYPE_1__ ks_raw_ops; } ;
typedef TYPE_2__ kstat_t ;
typedef int kstat_named_t ;
typedef int kstat_io_t ;
typedef int kstat_intr_t ;







 int FUNC_0 (char*,int) ;
 void* FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void *
FUNC_2(kstat_t *VAR_0, loff_t VAR_1)
{
 void *VAR_2 = ((void*)0);

 switch (VAR_0->ks_type) {
  case 129:
   if (VAR_0->ks_raw_ops.addr)
    VAR_2 = VAR_0->ks_raw_ops.addr(VAR_0, VAR_1);
   else
    VAR_2 = VAR_0->ks_data;
   break;
  case 130:
   VAR_2 = VAR_0->ks_data + VAR_1 * sizeof (kstat_named_t);
   break;
  case 132:
   VAR_2 = VAR_0->ks_data + VAR_1 * sizeof (kstat_intr_t);
   break;
  case 131:
   VAR_2 = VAR_0->ks_data + VAR_1 * sizeof (kstat_io_t);
   break;
  case 128:
   VAR_2 = VAR_0->ks_data + VAR_1 * sizeof (kstat_timer_t);
   break;
  default:
   FUNC_0("Undefined kstat type %d\n", VAR_0->ks_type);
 }

 return (VAR_2);
}
