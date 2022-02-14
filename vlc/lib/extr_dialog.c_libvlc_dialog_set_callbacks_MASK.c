
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * pf_update_progress; int * pf_cancel; int * pf_display_progress; int * pf_display_question; int * pf_display_login; int * pf_display_error; } ;
typedef TYPE_2__ vlc_dialog_cbs ;
typedef int libvlc_int_t ;
struct TYPE_12__ {int * pf_update_progress; int * pf_cancel; int * pf_display_progress; int * pf_display_question; int pf_display_login; int * pf_display_error; } ;
struct TYPE_9__ {void* data; TYPE_4__ cbs; } ;
struct TYPE_11__ {int instance_lock; TYPE_1__ dialog; int * p_libvlc_int; } ;
typedef TYPE_3__ libvlc_instance_t ;
typedef TYPE_4__ libvlc_dialog_cbs ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(libvlc_instance_t *VAR_6,
                            const libvlc_dialog_cbs *VAR_7, void *VAR_8)
{
    libvlc_int_t *VAR_9 = VAR_6->p_libvlc_int;

    FUNC_1(&VAR_6->instance_lock);
    if (VAR_7 != ((void*)0))
    {
        const vlc_dialog_cbs VAR_10 = {
            .pf_display_error = VAR_7->pf_display_error != ((void*)0) ?
                                VAR_1 : ((void*)0),
            .pf_display_login = VAR_7->pf_display_login ?
                                VAR_2 : ((void*)0),
            .pf_display_question = VAR_7->pf_display_question != ((void*)0) ?
                                   VAR_4 : ((void*)0),
            .pf_display_progress = VAR_7->pf_display_progress != ((void*)0) ?
                                   VAR_3 : ((void*)0),
            .pf_cancel = VAR_7->pf_cancel != ((void*)0) ? VAR_0 : ((void*)0),
            .pf_update_progress = VAR_7->pf_update_progress != ((void*)0) ?
                                  VAR_5 : ((void*)0),
        };

        VAR_6->dialog.cbs = *VAR_7;
        VAR_6->dialog.data = VAR_8;

        FUNC_0(VAR_9, &VAR_10, VAR_6);
    }
    else
        FUNC_0(VAR_9, ((void*)0), ((void*)0));
    FUNC_2(&VAR_6->instance_lock);
}
