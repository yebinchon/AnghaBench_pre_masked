
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ skm_magic; scalar_t__ skm_avail; scalar_t__ skm_size; void** skm_objs; int skm_refill; } ;
typedef TYPE_1__ spl_kmem_magazine_t ;
struct TYPE_9__ {scalar_t__ skc_magic; int skc_flags; scalar_t__ skc_obj_emergency; TYPE_1__** skc_mag; int skc_lock; int skc_obj_alloc; int skc_linux_cache; int skc_private; int (* skc_dtor ) (void*,int ) ;} ;
typedef TYPE_2__ spl_kmem_cache_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 size_t FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,void*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (void*,int ) ;
 int FUNC_12 (int ,int*) ;
 scalar_t__ FUNC_13 (int) ;

void
FUNC_14(spl_kmem_cache_t *VAR_4, void *VAR_5)
{
 spl_kmem_magazine_t *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_0(VAR_4->skc_magic == VAR_2);
 FUNC_0(!FUNC_12(VAR_0, &VAR_4->skc_flags));




 if (VAR_4->skc_dtor)
  VAR_4->skc_dtor(VAR_5, VAR_4->skc_private);




 if (VAR_4->skc_flags & VAR_1) {
  FUNC_2(VAR_4->skc_linux_cache, VAR_5);
  FUNC_6(&VAR_4->skc_lock);
  VAR_4->skc_obj_alloc--;
  FUNC_7(&VAR_4->skc_lock);
  return;
 }







 if (!FUNC_1(VAR_5)) {
  FUNC_6(&VAR_4->skc_lock);
  VAR_9 = (VAR_4->skc_obj_emergency > 0);
  FUNC_7(&VAR_4->skc_lock);

  if (VAR_9 && (FUNC_9(VAR_4, VAR_5) == 0))
   return;
 }

 FUNC_4(VAR_7);







 VAR_6 = VAR_4->skc_mag[FUNC_5()];
 FUNC_0(VAR_6->skm_magic == VAR_3);






 if (FUNC_13(VAR_6->skm_avail >= VAR_6->skm_size)) {
  FUNC_8(VAR_4, VAR_6, VAR_6->skm_refill);
  VAR_8 = 1;
 }


 VAR_6->skm_objs[VAR_6->skm_avail++] = VAR_5;

 FUNC_3(VAR_7);

 if (VAR_8)
  FUNC_10(VAR_4);
}
