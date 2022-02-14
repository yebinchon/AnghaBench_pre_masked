
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bpl_lock; int bpl_list; } ;
typedef TYPE_1__ bplist_t ;
typedef int bplist_entry_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(bplist_t *VAR_1)
{
 bplist_entry_t *VAR_2;

 FUNC_3(&VAR_1->bpl_lock);
 while ((VAR_2 = FUNC_1(&VAR_1->bpl_list))) {
  VAR_0 = VAR_2;
  FUNC_2(&VAR_1->bpl_list, VAR_2);
  FUNC_0(VAR_2, sizeof (*VAR_2));
 }
 FUNC_4(&VAR_1->bpl_lock);
}
