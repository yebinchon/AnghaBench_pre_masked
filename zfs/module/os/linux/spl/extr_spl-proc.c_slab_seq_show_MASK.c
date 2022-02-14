
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {scalar_t__ skc_magic; int skc_flags; int skc_obj_size; int skc_obj_alloc; int skc_slab_size; int skc_slab_total; int skc_lock; scalar_t__ skc_obj_emergency_max; scalar_t__ skc_obj_emergency; scalar_t__ skc_obj_deadlock; scalar_t__ skc_obj_max; scalar_t__ skc_obj_total; scalar_t__ skc_slab_max; scalar_t__ skc_slab_alloc; int skc_name; } ;
typedef TYPE_1__ spl_kmem_cache_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,unsigned long,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 spl_kmem_cache_t *VAR_4 = VAR_3;

 FUNC_0(VAR_4->skc_magic == VAR_1);

 if (VAR_4->skc_flags & VAR_0) {







  FUNC_2(&VAR_4->skc_lock);
  FUNC_1(VAR_2, "%-36s  ", VAR_4->skc_name);
  FUNC_1(VAR_2, "0x%05lx %9s %9lu %8s %8u  "
      "%5s %5s %5s  %5s %5lu %5s  %5s %5s %5s\n",
      (long unsigned)VAR_4->skc_flags,
      "-",
      (long unsigned)(VAR_4->skc_obj_size * VAR_4->skc_obj_alloc),
      "-",
      (unsigned)VAR_4->skc_obj_size,
      "-", "-", "-", "-",
      (long unsigned)VAR_4->skc_obj_alloc,
      "-", "-", "-", "-");
  FUNC_3(&VAR_4->skc_lock);
  return (0);
 }

 FUNC_2(&VAR_4->skc_lock);
 FUNC_1(VAR_2, "%-36s  ", VAR_4->skc_name);
 FUNC_1(VAR_2, "0x%05lx %9lu %9lu %8u %8u  "
     "%5lu %5lu %5lu  %5lu %5lu %5lu  %5lu %5lu %5lu\n",
     (long unsigned)VAR_4->skc_flags,
     (long unsigned)(VAR_4->skc_slab_size * VAR_4->skc_slab_total),
     (long unsigned)(VAR_4->skc_obj_size * VAR_4->skc_obj_alloc),
     (unsigned)VAR_4->skc_slab_size,
     (unsigned)VAR_4->skc_obj_size,
     (long unsigned)VAR_4->skc_slab_total,
     (long unsigned)VAR_4->skc_slab_alloc,
     (long unsigned)VAR_4->skc_slab_max,
     (long unsigned)VAR_4->skc_obj_total,
     (long unsigned)VAR_4->skc_obj_alloc,
     (long unsigned)VAR_4->skc_obj_max,
     (long unsigned)VAR_4->skc_obj_deadlock,
     (long unsigned)VAR_4->skc_obj_emergency,
     (long unsigned)VAR_4->skc_obj_emergency_max);
 FUNC_3(&VAR_4->skc_lock);
 return (0);
}
