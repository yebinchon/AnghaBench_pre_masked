
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int (* pf_update_progress ) (int ,TYPE_3__*,float,char*) ;} ;
struct TYPE_9__ {int lock; int p_cbs_data; TYPE_1__ cbs; } ;
typedef TYPE_2__ vlc_dialog_provider ;
struct TYPE_10__ {char* psz_progress_text; scalar_t__ b_progress_indeterminate; } ;
typedef TYPE_3__ vlc_dialog_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,TYPE_3__*,float,char*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(vlc_object_t *VAR_2, vlc_dialog_id *VAR_3, float VAR_4,
                       char *VAR_5)
{
    FUNC_0(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));
    vlc_dialog_provider *VAR_6 = FUNC_2(VAR_2, 0);

    FUNC_5(&VAR_6->lock);
    if (VAR_6->cbs.pf_update_progress == ((void*)0) ||
        FUNC_4(VAR_2, VAR_3))
    {
        FUNC_6(&VAR_6->lock);
        FUNC_1(VAR_5);
        return VAR_0;
    }

    if (VAR_3->b_progress_indeterminate)
        VAR_4 = 0.0f;

    if (VAR_5 != ((void*)0))
    {
        FUNC_1(VAR_3->psz_progress_text);
        VAR_3->psz_progress_text = VAR_5;
    }
    VAR_6->cbs.pf_update_progress(VAR_6->p_cbs_data, VAR_3, VAR_4,
                                       VAR_3->psz_progress_text);

    FUNC_6(&VAR_6->lock);
    return VAR_1;
}
