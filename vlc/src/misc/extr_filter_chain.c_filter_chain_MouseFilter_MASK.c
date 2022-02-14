
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_mouse_t ;
struct TYPE_6__ {scalar_t__ (* pf_video_mouse ) (TYPE_1__*,int *,int *,int *) ;} ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {TYPE_3__* last; } ;
typedef TYPE_2__ filter_chain_t ;
struct TYPE_8__ {int * mouse; TYPE_1__ filter; struct TYPE_8__* prev; } ;
typedef TYPE_3__ chained_filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int *,int *) ;

int FUNC_1( filter_chain_t *VAR_2, vlc_mouse_t *VAR_3, const vlc_mouse_t *VAR_4 )
{
    vlc_mouse_t VAR_5 = *VAR_4;

    for( chained_filter_t *VAR_6 = VAR_2->last; VAR_6 != ((void*)0); VAR_6 = VAR_6->prev )
    {
        filter_t *VAR_7 = &VAR_6->filter;
        vlc_mouse_t *VAR_8 = VAR_6->mouse;

        if( VAR_7->pf_video_mouse && VAR_8 )
        {
            vlc_mouse_t VAR_9 = *VAR_8;
            vlc_mouse_t VAR_10;

            *VAR_8 = VAR_5;
            if( VAR_7->pf_video_mouse( VAR_7, &VAR_10, &VAR_9, &VAR_5 ) )
                return VAR_0;
            VAR_5 = VAR_10;
        }
    }

    *VAR_3 = VAR_5;
    return VAR_1;
}
