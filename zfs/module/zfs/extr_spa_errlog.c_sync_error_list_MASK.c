
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_10__ {char* se_name; int se_bookmark; } ;
typedef TYPE_2__ spa_error_entry_t ;
typedef int dmu_tx_t ;
typedef int buf ;
typedef int avl_tree_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,void**) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int *) ;
 int FUNC_8 (int ,scalar_t__,char*,int,scalar_t__,char*,int *) ;

__attribute__((used)) static void
FUNC_9(spa_t *VAR_2, avl_tree_t *VAR_3, uint64_t *VAR_4, dmu_tx_t *VAR_5)
{
 spa_error_entry_t *VAR_6;
 char VAR_7[64];
 void *VAR_8;

 if (FUNC_3(VAR_3) != 0) {

  if (*VAR_4 == 0)
   *VAR_4 = FUNC_7(VAR_2->spa_meta_objset,
       VAR_0, VAR_1,
       0, VAR_5);


  for (VAR_6 = FUNC_2(VAR_3); VAR_6 != ((void*)0); VAR_6 = FUNC_0(VAR_3, VAR_6)) {
   char *VAR_9 = VAR_6->se_name ? VAR_6->se_name : "";

   FUNC_4(&VAR_6->se_bookmark, VAR_7, sizeof (VAR_7));

   (void) FUNC_8(VAR_2->spa_meta_objset,
       *VAR_4, VAR_7, 1, FUNC_6(VAR_9) + 1, VAR_9, VAR_5);
  }


  VAR_8 = ((void*)0);
  while ((VAR_6 = FUNC_1(VAR_3, &VAR_8)) != ((void*)0))
   FUNC_5(VAR_6, sizeof (spa_error_entry_t));
 }
}
