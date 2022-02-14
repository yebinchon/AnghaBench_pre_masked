
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int skm_size; int skm_cpu; int skm_age; TYPE_2__* skm_cache; int skm_refill; scalar_t__ skm_avail; int skm_magic; } ;
typedef TYPE_1__ spl_kmem_magazine_t ;
struct TYPE_7__ {int skc_mag_size; int skc_mag_refill; } ;
typedef TYPE_2__ spl_kmem_cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static spl_kmem_magazine_t *
FUNC_2(spl_kmem_cache_t *VAR_3, int VAR_4)
{
 spl_kmem_magazine_t *VAR_5;
 int VAR_6 = sizeof (spl_kmem_magazine_t) +
     sizeof (void *) * VAR_3->skc_mag_size;

 VAR_5 = FUNC_1(VAR_6, VAR_0, FUNC_0(VAR_4));
 if (VAR_5) {
  VAR_5->skm_magic = VAR_1;
  VAR_5->skm_avail = 0;
  VAR_5->skm_size = VAR_3->skc_mag_size;
  VAR_5->skm_refill = VAR_3->skc_mag_refill;
  VAR_5->skm_cache = VAR_3;
  VAR_5->skm_age = VAR_2;
  VAR_5->skm_cpu = VAR_4;
 }

 return (VAR_5);
}
