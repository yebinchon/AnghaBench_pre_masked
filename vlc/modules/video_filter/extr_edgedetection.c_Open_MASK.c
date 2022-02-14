
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int * p_sys; int pf_video_filter; int fmt_in; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {TYPE_1__* sys; int * video; } ;
typedef TYPE_2__ filter_owner_t ;
typedef int filter_chain_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_4 )
{
    int VAR_5;
    filter_t *VAR_6 = (filter_t *)VAR_4;
    filter_owner_t VAR_7 = {
        .video = &VAR_3,
        .sys = VAR_6,
    };

    filter_chain_t *VAR_8 = FUNC_2( VAR_6, 1, &VAR_7 );
    if ( VAR_8 == ((void*)0))
    {
        FUNC_4( VAR_6, "Could not allocate filter chain" );
        return VAR_1;
    }

    FUNC_3( VAR_8, &VAR_6->fmt_in, &VAR_6->fmt_in);

    VAR_5 = FUNC_0( VAR_8, "adjust{saturation=0}" );
    if ( VAR_5 == -1 )
    {
        FUNC_4( VAR_6, "Could not append filter to filter chain" );
        FUNC_1( VAR_8 );
        return VAR_1;
    }

    VAR_5 = FUNC_0( VAR_8, "gaussianblur{deviation=1}" );
    if ( VAR_5 == -1 )
    {
        FUNC_4( VAR_6, "Could not append filter to filter chain" );
        FUNC_1( VAR_8 );
        return VAR_1;
    }

    VAR_6->pf_video_filter = VAR_0;
    VAR_6->p_sys = VAR_8;
    return VAR_2;
}
