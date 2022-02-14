
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int os_lock; int os_dnodes; } ;
typedef TYPE_1__ objset_t ;
typedef int dnode_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void
FUNC_15(objset_t *VAR_2)
{
 dnode_t *VAR_3;
 dnode_t *VAR_4;

 VAR_3 = FUNC_7(sizeof (dnode_t), VAR_1);

 FUNC_13(&VAR_2->os_lock);
 VAR_4 = FUNC_9(&VAR_2->os_dnodes);
 while (VAR_4 != ((void*)0)) {





  if (FUNC_4(VAR_4, VAR_0)) {
   FUNC_10(&VAR_2->os_dnodes, VAR_4, VAR_3);
   FUNC_14(&VAR_2->os_lock);

   FUNC_5(VAR_4);
   FUNC_6(VAR_4, VAR_0);

   FUNC_13(&VAR_2->os_lock);
   VAR_4 = FUNC_11(&VAR_2->os_dnodes, VAR_3);
   FUNC_12(&VAR_2->os_dnodes, VAR_3);
  } else {
   VAR_4 = FUNC_11(&VAR_2->os_dnodes, VAR_4);
  }
 }
 FUNC_14(&VAR_2->os_lock);

 FUNC_8(VAR_3, sizeof (dnode_t));

 if (FUNC_3(VAR_2) != ((void*)0)) {
  if (FUNC_2(VAR_2) != ((void*)0))
   FUNC_5(FUNC_2(VAR_2));
  FUNC_5(FUNC_0(VAR_2));
  FUNC_5(FUNC_3(VAR_2));
 }
 FUNC_5(FUNC_1(VAR_2));
}
