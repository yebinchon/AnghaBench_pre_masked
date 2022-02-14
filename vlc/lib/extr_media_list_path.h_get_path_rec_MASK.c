
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef int * libvlc_media_list_path_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int * const,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static libvlc_media_list_path_t
FUNC_9( const libvlc_media_list_path_t VAR_0, libvlc_media_list_t * VAR_1, libvlc_media_t * VAR_2 )
{
    int VAR_3 = FUNC_1( VAR_1 );

    for( int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ )
    {
        libvlc_media_t * VAR_5 = FUNC_2( VAR_1, VAR_4 );

        if( VAR_5 == VAR_2 )
            return FUNC_4( VAR_0, VAR_4 );

        libvlc_media_list_t * VAR_6 = FUNC_8( VAR_5 );
        FUNC_7( VAR_5 );
        if( VAR_6 )
        {
            libvlc_media_list_path_t VAR_7 = FUNC_4( VAR_0, VAR_4 );
            FUNC_3( VAR_6 );
            libvlc_media_list_path_t VAR_8 = FUNC_9( VAR_7, VAR_6, VAR_2 );
            FUNC_6( VAR_6 );
            FUNC_0( VAR_7 );
            FUNC_5( VAR_6 );
            if( VAR_8 )
                return VAR_8;
        }
    }
    return ((void*)0);
}
