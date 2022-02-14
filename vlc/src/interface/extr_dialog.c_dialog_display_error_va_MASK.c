
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pf_display_error ) (int ,char const*,char*) ;} ;
struct TYPE_5__ {int lock; int p_cbs_data; TYPE_1__ cbs; } ;
typedef TYPE_2__ vlc_dialog_provider ;
typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char*) ;
 int FUNC_2 (char**,char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(vlc_dialog_provider *VAR_3, const char *VAR_4,
                        const char *VAR_5, va_list VAR_6)
{
    FUNC_3(&VAR_3->lock);
    if (VAR_3->cbs.pf_display_error == ((void*)0))
    {
        FUNC_4(&VAR_3->lock);
        return VAR_0;
    }

    char *VAR_7;
    if (FUNC_2(&VAR_7, VAR_5, VAR_6) == -1)
    {
        FUNC_4(&VAR_3->lock);
        return VAR_1;
    }

    VAR_3->cbs.pf_display_error(VAR_3->p_cbs_data, VAR_4, VAR_7);
    FUNC_0(VAR_7);
    FUNC_4(&VAR_3->lock);

    return VAR_2;
}
