
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ taskqid_t ;
struct TYPE_5__ {scalar_t__ skc_magic; int skc_flags; int skc_delay; int skc_ref; int skc_lock; scalar_t__ skc_taskqid; } ;
typedef TYPE_1__ spl_kmem_cache_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,void (*) (void*),TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_9)
{
 spl_kmem_cache_t *VAR_10 = (spl_kmem_cache_t *)VAR_9;
 taskqid_t VAR_11 = 0;

 FUNC_0(VAR_10->skc_magic == VAR_4);


 if (!(VAR_6 & VAR_2))
  return;

 FUNC_2(&VAR_10->skc_ref);

 if (!(VAR_10->skc_flags & VAR_3))
  FUNC_4(VAR_8, VAR_10, 1);

 FUNC_7(VAR_10);

 while (!FUNC_10(VAR_1, &VAR_10->skc_flags) && !VAR_11) {
  VAR_11 = FUNC_9(
      VAR_7, FUNC_11, VAR_10, VAR_5,
      FUNC_3() + VAR_10->skc_delay / 3 * VAR_0);


  if (FUNC_10(VAR_1, &VAR_10->skc_flags) && VAR_11)
   FUNC_8(VAR_7, VAR_11);
 }

 FUNC_5(&VAR_10->skc_lock);
 VAR_10->skc_taskqid = VAR_11;
 FUNC_6(&VAR_10->skc_lock);

 FUNC_1(&VAR_10->skc_ref);
}
