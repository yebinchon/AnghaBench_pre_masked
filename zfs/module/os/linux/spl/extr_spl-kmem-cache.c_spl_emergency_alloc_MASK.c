
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ske_obj; } ;
typedef TYPE_1__ spl_kmem_emergency_t ;
struct TYPE_8__ {scalar_t__ skc_obj_emergency; scalar_t__ skc_obj_emergency_max; int skc_lock; int skc_obj_total; int skc_emergency_tree; int skc_partial_list; int skc_obj_size; } ;
typedef TYPE_2__ spl_kmem_cache_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(spl_kmem_cache_t *VAR_3, int VAR_4, void **VAR_5)
{
 gfp_t VAR_6 = FUNC_5(VAR_4);
 spl_kmem_emergency_t *VAR_7;
 int VAR_8 = FUNC_2(VAR_3->skc_obj_size);
 int VAR_9;


 FUNC_8(&VAR_3->skc_lock);
 VAR_9 = FUNC_7(&VAR_3->skc_partial_list);
 FUNC_9(&VAR_3->skc_lock);
 if (!VAR_9)
  return (-VAR_0);

 VAR_7 = FUNC_4(sizeof (*VAR_7), VAR_6);
 if (VAR_7 == ((void*)0))
  return (-VAR_2);

 VAR_7->ske_obj = FUNC_0(VAR_6, VAR_8);
 if (VAR_7->ske_obj == 0) {
  FUNC_3(VAR_7);
  return (-VAR_2);
 }

 FUNC_8(&VAR_3->skc_lock);
 VAR_9 = FUNC_10(&VAR_3->skc_emergency_tree, VAR_7);
 if (FUNC_6(VAR_9)) {
  VAR_3->skc_obj_total++;
  VAR_3->skc_obj_emergency++;
  if (VAR_3->skc_obj_emergency > VAR_3->skc_obj_emergency_max)
   VAR_3->skc_obj_emergency_max = VAR_3->skc_obj_emergency;
 }
 FUNC_9(&VAR_3->skc_lock);

 if (FUNC_11(!VAR_9)) {
  FUNC_1(VAR_7->ske_obj, VAR_8);
  FUNC_3(VAR_7);
  return (-VAR_1);
 }

 *VAR_5 = (void *)VAR_7->ske_obj;

 return (0);
}
