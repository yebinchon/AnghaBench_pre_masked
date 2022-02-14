
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef int libvlc_instance_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,int) ;

libvlc_media_t * FUNC_6( libvlc_instance_t *VAR_1,
                                           const char * VAR_2 )
{
    input_item_t * VAR_3;
    libvlc_media_t * VAR_4;
    libvlc_media_list_t * VAR_5;

    VAR_3 = FUNC_0( VAR_0, VAR_2 );

    if (!VAR_3)
    {
        FUNC_4( "Not enough memory" );
        return ((void*)0);
    }

    VAR_4 = FUNC_2( VAR_1, VAR_3 );
    FUNC_1( VAR_3 );

    VAR_5 = FUNC_5( VAR_4, 1 );
    if( VAR_5 == ((void*)0)) {
        FUNC_3( VAR_4 );
        return ((void*)0);
    }

    return VAR_4;
}
