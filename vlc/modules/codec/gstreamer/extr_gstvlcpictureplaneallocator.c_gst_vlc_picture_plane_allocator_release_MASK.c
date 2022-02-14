
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ guint ;
struct TYPE_2__ {int * p_plane; int * p_pic; } ;
typedef int GstVlcPicturePlaneAllocator ;
typedef TYPE_1__ GstVlcPicturePlane ;
typedef int GstBuffer ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;

void FUNC_4(
    GstVlcPicturePlaneAllocator *VAR_0, GstBuffer *VAR_1 )
{
    FUNC_0( VAR_0 );

    GstVlcPicturePlane* VAR_2 =
        (GstVlcPicturePlane*) FUNC_2( VAR_1, 0 );
    guint VAR_3;

    if( VAR_2->p_pic )
    {
        FUNC_3( VAR_2->p_pic );

        for( VAR_3 = 0; VAR_3 < FUNC_1( VAR_1 );
                VAR_3++ )
        {
            VAR_2 = (GstVlcPicturePlane*) FUNC_2 ( VAR_1,
                    VAR_3 );
            VAR_2->p_pic = ((void*)0);
            VAR_2->p_plane = ((void*)0);
        }
    }
}
