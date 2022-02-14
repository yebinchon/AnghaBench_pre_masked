
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_instance_t ;
typedef int input_item_t ;


 int * FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;

libvlc_media_t *FUNC_4( libvlc_instance_t *VAR_0,
                                           const char * VAR_1 )
{
    input_item_t * VAR_2;
    libvlc_media_t * VAR_3;

    VAR_2 = FUNC_0( VAR_1, ((void*)0) );

    if (!VAR_2)
    {
        FUNC_3( "Not enough memory" );
        return ((void*)0);
    }

    VAR_3 = FUNC_2( VAR_0, VAR_2 );


    FUNC_1( VAR_2 );

    return VAR_3;
}
