
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int * psz_token; scalar_t__ psz_file_template; } ;
typedef TYPE_2__ filter_sys_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char**,char const*,char const*,...) ;

__attribute__((used)) static char *FUNC_2( filter_t *VAR_1, int VAR_2, int VAR_3, const char *VAR_4 )
{
    filter_sys_t *VAR_5 = VAR_1->p_sys;
    char *VAR_6;
    FUNC_0(VAR_2);FUNC_0(VAR_3);

    if( VAR_5->psz_file_template )
    {
        if( FUNC_1( &VAR_6, "%s%s%s",
                      VAR_5->psz_file_template,
                      VAR_4,
                      &VAR_5->psz_token[VAR_0] ) < 0 )
            VAR_6 = ((void*)0);
    }
    else
    {


        const char *VAR_7 = "<?xml version='1.0' encoding='UTF-8' standalone='no'?>"
                    "<svg preserveAspectRatio='xMinYMin meet'>"
                    "<rect fill='none' width='100%%' height='100%%'></rect>"
                    "<text fill='white' font-family='sans-serif' font-size='32px'>%s</text>"
                    "</svg>";
        if( FUNC_1( &VAR_6, VAR_7, VAR_4 ) < 0 )
            VAR_6 = ((void*)0);
    }

    return VAR_6;
}
