
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void spl_kmem_obj_t ;
struct TYPE_3__ {int skc_obj_align; int skc_obj_size; } ;
typedef TYPE_1__ spl_kmem_cache_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline spl_kmem_obj_t *
FUNC_1(spl_kmem_cache_t *VAR_1, void *VAR_2)
{
 return (VAR_2 + FUNC_0(VAR_1->skc_obj_size,
     VAR_1->skc_obj_align, VAR_0));
}
