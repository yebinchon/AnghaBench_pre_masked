
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rll_readers; int rll_cv; int rll_lock; int * rll_writer; } ;
typedef TYPE_1__ rll_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(rll_t *VAR_0)
{
 FUNC_0(VAR_0->rll_writer == ((void*)0));
 FUNC_0(VAR_0->rll_readers == 0);
 FUNC_2(&VAR_0->rll_lock);
 FUNC_1(&VAR_0->rll_cv);
}
