
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int zio_t ;
typedef int spa_t ;
struct TYPE_17__ {int ddt_checksum; int ddt_repair_tree; int * ddt_spa; } ;
typedef TYPE_1__ ddt_t ;
struct TYPE_18__ {int dde_key; } ;
typedef TYPE_2__ ddt_entry_t ;
typedef int blkptr_t ;
typedef int avl_tree_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(ddt_t *VAR_0, zio_t *VAR_1)
{
 spa_t *VAR_2 = VAR_0->ddt_spa;
 ddt_entry_t *VAR_3, *VAR_4, *VAR_5;
 avl_tree_t *VAR_6 = &VAR_0->ddt_repair_tree;
 blkptr_t VAR_7;

 if (FUNC_9(VAR_2) > 1)
  return;

 FUNC_4(VAR_0);
 for (VAR_5 = FUNC_1(VAR_6); VAR_5 != ((void*)0); VAR_5 = VAR_4) {
  VAR_4 = FUNC_0(VAR_6, VAR_5);
  FUNC_2(&VAR_0->ddt_repair_tree, VAR_5);
  FUNC_5(VAR_0);
  FUNC_3(VAR_0->ddt_checksum, &VAR_5->dde_key, ((void*)0), &VAR_7);
  VAR_3 = FUNC_8(VAR_0, &VAR_7);
  FUNC_7(VAR_0, VAR_3, VAR_5, VAR_1);
  FUNC_6(VAR_0, VAR_3);
  FUNC_4(VAR_0);
 }
 FUNC_5(VAR_0);
}
