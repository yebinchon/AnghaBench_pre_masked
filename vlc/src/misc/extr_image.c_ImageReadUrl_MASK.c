
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
typedef int video_format_t ;
typedef scalar_t__ uint64_t ;
typedef int stream_t ;
typedef int picture_t ;
struct TYPE_4__ {int p_parent; } ;
typedef TYPE_1__ image_handler_t ;
typedef int es_format_t ;
typedef int block_t ;


 int * FUNC_0 (TYPE_1__*,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,char const*) ;
 char* FUNC_7 (int *) ;
 int * FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,scalar_t__*) ;
 int * FUNC_11 (int ,char const*) ;

__attribute__((used)) static picture_t *FUNC_12( image_handler_t *VAR_2, const char *VAR_3,
                                video_format_t *VAR_4 )
{
    block_t *VAR_5;
    picture_t *VAR_6;
    stream_t *VAR_7 = ((void*)0);
    uint64_t VAR_8;

    VAR_7 = FUNC_11( VAR_2->p_parent, VAR_3 );

    if( !VAR_7 )
    {
        FUNC_6( VAR_2->p_parent, "could not open %s for reading",
                 VAR_3 );
        return ((void*)0);
    }

    if( FUNC_10( VAR_7, &VAR_8 ) || VAR_8 > VAR_0 )
    {
        FUNC_6( VAR_2->p_parent, "could not read %s", VAR_3 );
        goto error;
    }

    VAR_5 = FUNC_8( VAR_7, VAR_8 );
    if( VAR_5 == ((void*)0) )
        goto error;

    vlc_fourcc_t VAR_9 = 0;
    char *VAR_10 = FUNC_7( VAR_7 );
    if( VAR_10 != ((void*)0) )
    {
        VAR_9 = FUNC_5( VAR_10 );
        FUNC_3( VAR_10 );
    }
    if( !VAR_9 )
    {

       VAR_9 = FUNC_4( VAR_3 );
    }
    FUNC_9( VAR_7 );


    es_format_t VAR_11;
    FUNC_2( &VAR_11, VAR_1, VAR_9 );
    VAR_6 = FUNC_0( VAR_2, VAR_5, &VAR_11, VAR_4 );

    FUNC_1( &VAR_11 );

    return VAR_6;
error:
    FUNC_9( VAR_7 );
    return ((void*)0);
}
