
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct vlc_demux_private {int * module; } ;
struct TYPE_9__ {int * out; int * psz_filepath; int * psz_location; int * psz_url; int * psz_name; int * p_sys; int * p_input_item; struct TYPE_9__* p_next; } ;
typedef TYPE_1__ demux_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*,char*,char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int ,int,char*) ;
 struct vlc_demux_private* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static demux_t *FUNC_6( demux_t *VAR_1, const char *VAR_2 )
{
    struct vlc_demux_private *VAR_3;
    demux_t *VAR_4 = FUNC_4(FUNC_0(VAR_1),
                                            VAR_0, sizeof (*VAR_3),
                                            "demux filter");
    if (FUNC_3(VAR_4 == ((void*)0)))
        return ((void*)0);

    VAR_3 = FUNC_5(VAR_4);
    VAR_4->p_next = VAR_1;
    VAR_4->p_input_item = ((void*)0);
    VAR_4->p_sys = ((void*)0);
    VAR_4->psz_name = ((void*)0);
    VAR_4->psz_url = ((void*)0);
    VAR_4->psz_location = ((void*)0);
    VAR_4->psz_filepath = ((void*)0);
    VAR_4->out = ((void*)0);

    VAR_3->module = FUNC_1(VAR_4, "demux_filter", VAR_2,
                               VAR_2 != ((void*)0));
    if (VAR_3->module == ((void*)0))
        goto error;

    return VAR_4;
error:
    FUNC_2( VAR_4 );
    return ((void*)0);
}
