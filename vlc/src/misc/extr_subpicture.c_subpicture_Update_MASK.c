
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int video_format_t ;
struct TYPE_7__ {int (* pf_update ) (TYPE_2__*,int const*,int const*,int ) ;int (* pf_validate ) (TYPE_2__*,int,int const*,int,int const*,int ) ;} ;
typedef TYPE_1__ subpicture_updater_t ;
struct TYPE_8__ {int * p_region; TYPE_3__* p_private; TYPE_1__ updater; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_9__ {int dst; int src; } ;
typedef TYPE_3__ subpicture_private_t ;


 int FUNC_0 (TYPE_2__*,int,int const*,int,int const*,int ) ;
 int FUNC_1 (TYPE_2__*,int const*,int const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int const*,int *) ;

void FUNC_6( subpicture_t *VAR_0,
                        const video_format_t *VAR_1,
                        const video_format_t *VAR_2,
                        vlc_tick_t VAR_3 )
{
    subpicture_updater_t *VAR_4 = &VAR_0->updater;
    subpicture_private_t *VAR_5 = VAR_0->p_private;

    if( !VAR_4->pf_validate )
        return;
    if( !VAR_4->pf_validate( VAR_0,
                          !FUNC_5( VAR_1,
                                                   &VAR_5->src ), VAR_1,
                          !FUNC_5( VAR_2,
                                                   &VAR_5->dst ), VAR_2,
                          VAR_3 ) )
        return;

    FUNC_2( VAR_0->p_region );
    VAR_0->p_region = ((void*)0);

    VAR_4->pf_update( VAR_0, VAR_1, VAR_2, VAR_3 );

    FUNC_3( &VAR_5->src );
    FUNC_3( &VAR_5->dst );

    FUNC_4( &VAR_5->src, VAR_1 );
    FUNC_4( &VAR_5->dst, VAR_2 );
}
