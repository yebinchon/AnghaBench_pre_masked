
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sks_list; scalar_t__ sks_objs; } ;
typedef TYPE_1__ spl_kmem_slab_t ;
struct TYPE_7__ {int skc_lock; int skc_waitq; int skc_flags; int skc_partial_list; int skc_obj_total; int skc_slab_total; } ;
typedef TYPE_2__ spl_kmem_cache_t ;
typedef int fstrans_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(spl_kmem_cache_t *VAR_2, int VAR_3)
{
 spl_kmem_slab_t *VAR_4;

 fstrans_cookie_t VAR_5 = FUNC_6();
 VAR_4 = FUNC_8(VAR_2, VAR_3);
 FUNC_7(VAR_5);

 FUNC_4(&VAR_2->skc_lock);
 if (VAR_4) {
  VAR_2->skc_slab_total++;
  VAR_2->skc_obj_total += VAR_4->sks_objs;
  FUNC_1(&VAR_4->sks_list, &VAR_2->skc_partial_list);

  FUNC_3();
  FUNC_0(VAR_1, &VAR_2->skc_flags);
  FUNC_2();
  FUNC_9(&VAR_2->skc_waitq);
 }
 FUNC_5(&VAR_2->skc_lock);

 return (VAR_4 == ((void*)0) ? -VAR_0 : 0);
}
