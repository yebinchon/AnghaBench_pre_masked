
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rc; float coeff; float rate; int output_dejitter; int abort; int coeff_avg; int input_dejitter; void* pause_date; void* last; void* wait_sync_ref; int wait_sync_ref_priority; void* first_pcr; scalar_t__ delay; void* offset; int * master; int cond; int lock; } ;
typedef TYPE_1__ vlc_clock_main_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* FUNC_1 (void*,void*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

vlc_clock_main_t *FUNC_5(void)
{
    vlc_clock_main_t *VAR_4 = FUNC_2(sizeof(vlc_clock_main_t));

    if (VAR_4 == ((void*)0))
        return ((void*)0);

    FUNC_4(&VAR_4->lock);
    FUNC_3(&VAR_4->cond);
    VAR_4->master = ((void*)0);
    VAR_4->rc = 1;

    VAR_4->coeff = 1.0f;
    VAR_4->rate = 1.0f;
    VAR_4->offset = VAR_3;
    VAR_4->delay = 0;

    VAR_4->first_pcr =
        FUNC_1(VAR_3, VAR_3);
    VAR_4->wait_sync_ref_priority = VAR_2;
    VAR_4->wait_sync_ref = VAR_4->last =
        FUNC_1(VAR_3, VAR_3);

    VAR_4->pause_date = VAR_3;
    VAR_4->input_dejitter = VAR_1;
    VAR_4->output_dejitter = VAR_0 * 2;
    VAR_4->abort = 0;

    FUNC_0(&VAR_4->coeff_avg, 10);

    return VAR_4;
}
