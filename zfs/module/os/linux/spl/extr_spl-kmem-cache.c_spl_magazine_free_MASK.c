
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ skm_magic; scalar_t__ skm_avail; } ;
typedef TYPE_1__ spl_kmem_magazine_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(spl_kmem_magazine_t *VAR_1)
{
 FUNC_0(VAR_1->skm_magic == VAR_0);
 FUNC_0(VAR_1->skm_avail == 0);
 FUNC_1(VAR_1);
}
