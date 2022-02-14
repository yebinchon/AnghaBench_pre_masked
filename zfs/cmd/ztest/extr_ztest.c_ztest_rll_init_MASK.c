
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rll_cv; int rll_lock; scalar_t__ rll_readers; int * rll_writer; } ;
typedef TYPE_1__ rll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_2(rll_t *VAR_2)
{
 VAR_2->rll_writer = ((void*)0);
 VAR_2->rll_readers = 0;
 FUNC_1(&VAR_2->rll_lock, ((void*)0), VAR_1, ((void*)0));
 FUNC_0(&VAR_2->rll_cv, ((void*)0), VAR_0, ((void*)0));
}
