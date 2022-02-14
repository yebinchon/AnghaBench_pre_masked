
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_refcnt; } ;
typedef TYPE_1__ arc_prune_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

void
FUNC_20(void)
{
 arc_prune_t *VAR_12;






 FUNC_1(((void*)0), VAR_1);

 VAR_5 = VAR_0;

 if (VAR_6 != ((void*)0)) {
  FUNC_7(VAR_6);
  VAR_6 = ((void*)0);
 }

 FUNC_15(VAR_10);
 FUNC_14(VAR_10);

 FUNC_12(&VAR_9);
 while ((VAR_12 = FUNC_9(&VAR_8)) != ((void*)0)) {
  FUNC_10(&VAR_8, VAR_12);
  FUNC_17(&VAR_12->p_refcnt, &VAR_8);
  FUNC_16(&VAR_12->p_refcnt);
  FUNC_6(VAR_12, sizeof (*VAR_12));
 }
 FUNC_13(&VAR_9);

 FUNC_8(&VAR_8);
 FUNC_11(&VAR_9);

 (void) FUNC_18(VAR_4);
 (void) FUNC_18(VAR_11);

 FUNC_11(&VAR_2);
 FUNC_5(&VAR_3);






 FUNC_4();
 FUNC_3();






 FUNC_19(VAR_4);
 FUNC_19(VAR_11);

 FUNC_0(VAR_7);
}
