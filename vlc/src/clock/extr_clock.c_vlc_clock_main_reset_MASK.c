
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float coeff; float rate; int cond; int last; int wait_sync_ref; int wait_sync_ref_priority; int offset; int coeff_avg; } ;
typedef TYPE_1__ vlc_clock_main_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(vlc_clock_main_t *VAR_2)
{
    FUNC_0(&VAR_2->coeff_avg);
    VAR_2->coeff = 1.0f;
    VAR_2->rate = 1.0f;
    VAR_2->offset = VAR_1;

    VAR_2->wait_sync_ref_priority = VAR_0;
    VAR_2->wait_sync_ref =
        VAR_2->last = FUNC_1(VAR_1, VAR_1);
    FUNC_2(&VAR_2->cond);
}
