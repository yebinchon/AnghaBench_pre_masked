
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_media_list_t ;
typedef int* libvlc_media_list_path_t ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static libvlc_media_list_t *
FUNC_5( libvlc_media_list_t * VAR_0, const libvlc_media_list_path_t VAR_1 )
{
    libvlc_media_list_t * VAR_2 = VAR_0;

    for( int VAR_3 = 0; VAR_1[VAR_3] != -1; VAR_3++ )
    {
        if( VAR_2 != VAR_0 )
            FUNC_1( VAR_2 );

        if( VAR_1[VAR_3+1] == -1 )
        {
            FUNC_2(VAR_2);
            return VAR_2;
        }

        libvlc_media_t* VAR_4 = FUNC_0( VAR_2, VAR_1[VAR_3] );

        VAR_2 = FUNC_4( VAR_4 );
        FUNC_3( VAR_4 );

        if( !VAR_2 )
            return ((void*)0);


    }

    if( VAR_2 != VAR_0 )
        FUNC_1( VAR_2 );
    return ((void*)0);
}
