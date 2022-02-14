
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int skm_avail; } ;
typedef TYPE_1__ spl_kmem_magazine_t ;
struct TYPE_8__ {scalar_t__ skc_magic; int skc_flags; scalar_t__ skc_slab_total; scalar_t__ skc_slab_alloc; scalar_t__ skc_obj_alloc; int skc_ref; TYPE_1__** skc_mag; int skc_private; int (* skc_reclaim ) (int ) ;int skc_lock; } ;
typedef TYPE_2__ spl_kmem_cache_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 size_t FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int*) ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int*,int ) ;

void
FUNC_17(spl_kmem_cache_t *VAR_7, int VAR_8)
{
 FUNC_0(VAR_7->skc_magic == VAR_4);
 FUNC_0(!FUNC_15(VAR_0, &VAR_7->skc_flags));

 FUNC_2(&VAR_7->skc_ref);




 if (VAR_7->skc_flags & VAR_3) {
  if (VAR_7->skc_reclaim)
   VAR_7->skc_reclaim(VAR_7->skc_private);
  goto out;
 }




 if (FUNC_14(VAR_1, &VAR_7->skc_flags))
  goto out;
 if (VAR_7->skc_reclaim) {
  uint64_t VAR_9 = VAR_5;
  int VAR_10;

  do {
   FUNC_8(&VAR_7->skc_lock);
   VAR_10 =
       (VAR_7->skc_slab_total > 0) &&
       ((VAR_7->skc_slab_total-VAR_7->skc_slab_alloc) == 0) &&
       (VAR_7->skc_obj_alloc < VAR_9);

   VAR_9 = VAR_7->skc_obj_alloc;
   FUNC_9(&VAR_7->skc_lock);

   if (VAR_10)
    VAR_7->skc_reclaim(VAR_7->skc_private);

  } while (VAR_10);
 }


 if (VAR_6 & VAR_2) {
  spl_kmem_magazine_t *VAR_11;
  unsigned long VAR_12;

  FUNC_5(VAR_12);
  VAR_11 = VAR_7->skc_mag[FUNC_7()];
  FUNC_10(VAR_7, VAR_11, VAR_11->skm_avail);
  FUNC_4(VAR_12);
 }

 FUNC_11(VAR_7);
 FUNC_3(VAR_1, &VAR_7->skc_flags);
 FUNC_6();
 FUNC_16(&VAR_7->skc_flags, VAR_1);
out:
 FUNC_1(&VAR_7->skc_ref);
}
