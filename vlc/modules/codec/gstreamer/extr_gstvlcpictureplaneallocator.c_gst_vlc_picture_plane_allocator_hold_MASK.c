
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_planes; int * p; } ;
typedef TYPE_1__ picture_t ;
typedef int decoder_t ;
struct TYPE_8__ {int * p_plane; TYPE_1__* p_pic; } ;
struct TYPE_7__ {int * p_dec; } ;
typedef TYPE_2__ GstVlcPicturePlaneAllocator ;
typedef TYPE_3__ GstVlcPicturePlane ;
typedef int GstBuffer ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;

bool FUNC_4(
    GstVlcPicturePlaneAllocator *VAR_0, GstBuffer *VAR_1 )
{
    picture_t* VAR_2 = ((void*)0);
    decoder_t* VAR_3 = VAR_0->p_dec;
    GstVlcPicturePlane *VAR_4;
    int VAR_5;

    if( !FUNC_1( VAR_3 ) )
        VAR_2 = FUNC_0( VAR_3 );
    if( !VAR_2 )
    {
        FUNC_3( VAR_0->p_dec, "failed to acquire picture from vout" );
        return 0;
    }

    for( VAR_5 = 0; VAR_5 < VAR_2->i_planes; VAR_5++ )
    {
        VAR_4 = (GstVlcPicturePlane*) FUNC_2 ( VAR_1,
                VAR_5 );
        VAR_4->p_pic = VAR_2;
        VAR_4->p_plane = &VAR_2->p[ VAR_5 ];
    }

    return 1;
}
