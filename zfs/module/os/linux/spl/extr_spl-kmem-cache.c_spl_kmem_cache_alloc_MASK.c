
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kmem_cache {int dummy; } ;
struct TYPE_6__ {scalar_t__ skm_magic; size_t skm_avail; int skm_age; void** skm_objs; } ;
typedef TYPE_1__ spl_kmem_magazine_t ;
struct TYPE_7__ {scalar_t__ skc_magic; int skc_flags; int skc_private; int (* skc_ctor ) (void*,int ,int) ;int skc_obj_align; TYPE_1__** skc_mag; int skc_lock; int skc_obj_alloc; struct kmem_cache* skc_linux_cache; } ;
typedef TYPE_2__ spl_kmem_cache_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (struct kmem_cache*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (void*) ;
 size_t FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_13 (void*,int ,int) ;
 int FUNC_14 (int ,int*) ;

void *
FUNC_15(spl_kmem_cache_t *VAR_7, int VAR_8)
{
 spl_kmem_magazine_t *VAR_9;
 void *VAR_10 = ((void*)0);

 FUNC_1(VAR_8 & ~VAR_3);
 FUNC_0(VAR_7->skc_magic == VAR_4);
 FUNC_0(!FUNC_14(VAR_0, &VAR_7->skc_flags));






 if (VAR_7->skc_flags & VAR_1) {
  struct kmem_cache *VAR_11 = VAR_7->skc_linux_cache;
  do {
   VAR_10 = FUNC_3(VAR_11, FUNC_4(VAR_8));
  } while ((VAR_10 == ((void*)0)) && !(VAR_8 & VAR_2));

  if (VAR_10 != ((void*)0)) {






   FUNC_10(&VAR_7->skc_lock);
   VAR_7->skc_obj_alloc++;
   FUNC_11(&VAR_7->skc_lock);
  }
  goto ret;
 }

 FUNC_6();

restart:






 VAR_9 = VAR_7->skc_mag[FUNC_9()];
 FUNC_0(VAR_9->skm_magic == VAR_5);

 if (FUNC_5(VAR_9->skm_avail)) {

  VAR_10 = VAR_9->skm_objs[--VAR_9->skm_avail];
  VAR_9->skm_age = VAR_6;
 } else {
  VAR_10 = FUNC_12(VAR_7, VAR_9, VAR_8);
  if ((VAR_10 == ((void*)0)) && !(VAR_8 & VAR_2))
   goto restart;

  FUNC_7();
  goto ret;
 }

 FUNC_7();
 FUNC_0(VAR_10);
 FUNC_0(FUNC_2(VAR_10, VAR_7->skc_obj_align));

ret:

 if (VAR_10) {
  if (VAR_10 && VAR_7->skc_ctor)
   VAR_7->skc_ctor(VAR_10, VAR_7->skc_private, VAR_8);
  else
   FUNC_8(VAR_10);
 }

 return (VAR_10);
}
