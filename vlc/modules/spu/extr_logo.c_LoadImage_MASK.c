
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int video_format_t ;
typedef int picture_t ;
typedef int image_handler_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (char const*,int *) ;

__attribute__((used)) static picture_t *FUNC_7( vlc_object_t *VAR_1, const char *VAR_2 )
{
    if( !VAR_2 )
        return ((void*)0);

    image_handler_t *VAR_3 = FUNC_1( VAR_1 );
    if( !VAR_3 )
        return ((void*)0);

    video_format_t VAR_4;
    FUNC_5( &VAR_4, VAR_0 );

    char *VAR_5 = FUNC_6( VAR_2, ((void*)0) );
    picture_t *VAR_6 = FUNC_3( VAR_3, VAR_5, &VAR_4 );
    FUNC_0( VAR_5 );
    FUNC_2( VAR_3 );
    FUNC_4( &VAR_4 );

    return VAR_6;
}
