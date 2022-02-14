
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint_t ;
typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ dn_type; scalar_t__ dn_bonuslen; int dn_bonustype; scalar_t__ dn_extra_slots; } ;
typedef TYPE_1__ dnode_phys_t ;
typedef int abd_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (int ,int ,int ) ;

void
FUNC_6(abd_t *VAR_2, uint8_t *VAR_3, uint_t VAR_4)
{
 uint_t VAR_5, VAR_6 = VAR_4 >> VAR_1;
 uint8_t *VAR_7;
 dnode_phys_t *VAR_8, *VAR_9, *VAR_10;

 VAR_7 = FUNC_3(VAR_2, VAR_4);

 VAR_9 = (dnode_phys_t *)VAR_7;
 VAR_10 = (dnode_phys_t *)VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 += VAR_9[VAR_5].dn_extra_slots + 1) {
  VAR_8 = &VAR_9[VAR_5];
  if (VAR_8->dn_type != VAR_0 &&
      FUNC_0(VAR_8->dn_bonustype) &&
      VAR_8->dn_bonuslen != 0) {
   FUNC_5(FUNC_1(VAR_8), FUNC_1(&VAR_10[VAR_5]),
       FUNC_2(VAR_8));
  }
 }

 FUNC_4(VAR_2, VAR_7, VAR_4);
}
