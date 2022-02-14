
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_dialog_question_type ;
struct TYPE_5__ {int (* pf_display_question ) (int ,int *,char const*,char*,int ,char const*,char const*,char const*) ;int * pf_cancel; } ;
struct TYPE_6__ {int lock; int p_cbs_data; TYPE_1__ cbs; } ;
typedef TYPE_2__ vlc_dialog_provider ;
typedef int vlc_dialog_id ;
typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,char const*,char*,int ,char const*,char const*,char const*) ;
 int FUNC_3 (char**,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(vlc_dialog_provider *VAR_4, vlc_dialog_id **VAR_5,
                           vlc_dialog_question_type VAR_6,
                           const char *VAR_7, const char *VAR_8,
                           const char *VAR_9, const char *VAR_10,
                           const char *VAR_11, va_list VAR_12)
{
    FUNC_4(&VAR_4->lock);
    if (VAR_4->cbs.pf_display_question == ((void*)0)
     || VAR_4->cbs.pf_cancel == ((void*)0))
    {
        FUNC_5(&VAR_4->lock);
        return VAR_1;
    }

    char *VAR_13;
    if (FUNC_3(&VAR_13, VAR_11, VAR_12) == -1)
    {
        FUNC_5(&VAR_4->lock);
        return VAR_2;
    }

    vlc_dialog_id *VAR_14 = FUNC_0(VAR_4, VAR_0);
    if (VAR_14 == ((void*)0))
    {
        FUNC_1(VAR_13);
        FUNC_5(&VAR_4->lock);
        return VAR_2;
    }
    VAR_4->cbs.pf_display_question(VAR_4->p_cbs_data, VAR_14, VAR_10,
                                        VAR_13, VAR_6, VAR_7, VAR_8,
                                        VAR_9);
    FUNC_1(VAR_13);
    FUNC_5(&VAR_4->lock);
    *VAR_5 = VAR_14;

    return VAR_3;
}
