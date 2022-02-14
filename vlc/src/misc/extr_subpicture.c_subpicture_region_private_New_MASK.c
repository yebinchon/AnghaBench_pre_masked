
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_format_t ;
struct TYPE_5__ {int * p_picture; int fmt; } ;
typedef TYPE_1__ subpicture_region_private_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

subpicture_region_private_t *FUNC_3( video_format_t *VAR_1 )
{
    subpicture_region_private_t *VAR_2 = FUNC_1( sizeof(*VAR_2) );

    if( !VAR_2 )
        return ((void*)0);

    if ( FUNC_2( &VAR_2->fmt, VAR_1 ) != VAR_0 )
    {
        FUNC_0( VAR_2 );
        return ((void*)0);
    }

    VAR_2->p_picture = ((void*)0);
    return VAR_2;
}
