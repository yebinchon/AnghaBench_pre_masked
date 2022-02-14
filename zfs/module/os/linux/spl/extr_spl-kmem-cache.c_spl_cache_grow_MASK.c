
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ skc_magic; int skc_flags; int skc_lock; int skc_obj_deadlock; int skc_waitq; int skc_ref; } ;
typedef TYPE_1__ spl_kmem_cache_t ;
struct TYPE_10__ {int ska_flags; int ska_tqe; TYPE_1__* ska_cache; } ;
typedef TYPE_2__ spl_kmem_alloc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int*) ;
 TYPE_2__* FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_13 (TYPE_1__*,int,void**) ;
 int VAR_14 ;
 int FUNC_14 (int*,int ,int ) ;
 int FUNC_15 (int ,int ,TYPE_2__*,int ,int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ,int*) ;
 scalar_t__ FUNC_18 (int ,int*) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int
FUNC_21(spl_kmem_cache_t *VAR_15, int VAR_16, void **VAR_17)
{
 int VAR_18, VAR_19 = 0;

 FUNC_1(VAR_16 & ~VAR_10);
 FUNC_0(VAR_15->skc_magic == VAR_11);
 FUNC_0((VAR_15->skc_flags & VAR_7) == 0);
 FUNC_7();
 *VAR_17 = ((void*)0);





 if (FUNC_18(VAR_5, &VAR_15->skc_flags)) {
  VAR_19 = FUNC_14(&VAR_15->skc_flags, VAR_5,
      VAR_12);
  return (VAR_19 ? VAR_19 : -VAR_0);
 }
 if (!(VAR_15->skc_flags & VAR_8) && !(VAR_15->skc_flags & VAR_6)) {
  VAR_19 = FUNC_2(VAR_15, VAR_16 | VAR_9);
  if (VAR_19 == 0)
   return (0);
 }







 if (FUNC_17(VAR_4, &VAR_15->skc_flags) == 0) {
  spl_kmem_alloc_t *VAR_20;

  VAR_20 = FUNC_5(sizeof (*VAR_20), FUNC_6(VAR_16));
  if (VAR_20 == ((void*)0)) {
   FUNC_4(VAR_4, &VAR_15->skc_flags);
   FUNC_9();
   FUNC_20(&VAR_15->skc_waitq);
   return (-VAR_1);
  }

  FUNC_3(&VAR_15->skc_ref);
  VAR_20->ska_cache = VAR_15;
  VAR_20->ska_flags = VAR_16;
  FUNC_16(&VAR_20->ska_tqe);
  FUNC_15(VAR_14,
      VAR_13, VAR_20, 0, &VAR_20->ska_tqe);
 }
 if (FUNC_18(VAR_3, &VAR_15->skc_flags)) {
  VAR_19 = FUNC_13(VAR_15, VAR_16, VAR_17);
 } else {
  VAR_18 = FUNC_19(VAR_15->skc_waitq,
      FUNC_12(VAR_15), VAR_2 / 10);

  if (!VAR_18) {
   FUNC_10(&VAR_15->skc_lock);
   if (FUNC_18(VAR_4, &VAR_15->skc_flags)) {
    FUNC_8(VAR_3, &VAR_15->skc_flags);
    VAR_15->skc_obj_deadlock++;
   }
   FUNC_11(&VAR_15->skc_lock);
  }

  VAR_19 = -VAR_1;
 }

 return (VAR_19);
}
