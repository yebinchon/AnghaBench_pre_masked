
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* pf_display_progress ) (int ,TYPE_3__*,char const*,char*,int,float,char const*) ;int * pf_cancel; int * pf_update_progress; } ;
struct TYPE_10__ {int lock; int p_cbs_data; TYPE_1__ cbs; } ;
typedef TYPE_2__ vlc_dialog_provider ;
struct TYPE_11__ {int b_progress_indeterminate; char* psz_progress_text; } ;
typedef TYPE_3__ vlc_dialog_id ;
typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_3__*,char const*,char*,int,float,char const*) ;
 int FUNC_3 (char**,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(vlc_dialog_provider *VAR_4, vlc_dialog_id **VAR_5,
                    bool VAR_6, float VAR_7,
                    const char *VAR_8, const char *VAR_9,
                    const char *VAR_10, va_list VAR_11)
{
    FUNC_4(&VAR_4->lock);
    if (VAR_4->cbs.pf_display_progress == ((void*)0)
     || VAR_4->cbs.pf_update_progress == ((void*)0)
     || VAR_4->cbs.pf_cancel == ((void*)0))
    {
        FUNC_5(&VAR_4->lock);
        return VAR_1;
    }

    char *VAR_12;
    if (FUNC_3(&VAR_12, VAR_10, VAR_11) == -1)
    {
        FUNC_5(&VAR_4->lock);
        return VAR_2;
    }

    vlc_dialog_id *VAR_13 = FUNC_0(VAR_4, VAR_0);
    if (VAR_13 == ((void*)0))
    {
        FUNC_1(VAR_12);
        FUNC_5(&VAR_4->lock);
        return VAR_2;
    }
    VAR_13->b_progress_indeterminate = VAR_6;
    VAR_13->psz_progress_text = VAR_12;
    VAR_4->cbs.pf_display_progress(VAR_4->p_cbs_data, VAR_13, VAR_9,
                                        VAR_12, VAR_6, VAR_7,
                                        VAR_8);
    FUNC_5(&VAR_4->lock);
    *VAR_5 = VAR_13;

    return VAR_3;
}
