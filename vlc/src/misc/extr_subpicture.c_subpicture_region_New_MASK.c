
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ i_chroma; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_10__ {int fmt; int p_picture; } ;
typedef TYPE_2__ subpicture_region_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 TYPE_2__* FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *) ;

subpicture_region_t *FUNC_4( const video_format_t *VAR_1 )
{
    subpicture_region_t *VAR_2 =
        FUNC_2( VAR_1 );
    if( !VAR_2 )
        return ((void*)0);

    if( VAR_1->i_chroma == VAR_0 )
        return VAR_2;

    VAR_2->p_picture = FUNC_1( VAR_1 );
    if( !VAR_2->p_picture )
    {
        FUNC_3( &VAR_2->fmt );
        FUNC_0( VAR_2 );
        return ((void*)0);
    }

    return VAR_2;
}
