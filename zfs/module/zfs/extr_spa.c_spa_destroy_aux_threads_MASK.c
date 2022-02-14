
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * spa_livelist_condense_zthr; int * spa_livelist_delete_zthr; int * spa_checkpoint_discard_zthr; int * spa_condense_zthr; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(spa_t *VAR_0)
{
 if (VAR_0->spa_condense_zthr != ((void*)0)) {
  FUNC_0(VAR_0->spa_condense_zthr);
  VAR_0->spa_condense_zthr = ((void*)0);
 }
 if (VAR_0->spa_checkpoint_discard_zthr != ((void*)0)) {
  FUNC_0(VAR_0->spa_checkpoint_discard_zthr);
  VAR_0->spa_checkpoint_discard_zthr = ((void*)0);
 }
 if (VAR_0->spa_livelist_delete_zthr != ((void*)0)) {
  FUNC_0(VAR_0->spa_livelist_delete_zthr);
  VAR_0->spa_livelist_delete_zthr = ((void*)0);
 }
 if (VAR_0->spa_livelist_condense_zthr != ((void*)0)) {
  FUNC_0(VAR_0->spa_livelist_condense_zthr);
  VAR_0->spa_livelist_condense_zthr = ((void*)0);
 }
}
