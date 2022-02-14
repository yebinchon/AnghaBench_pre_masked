
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int p_module; int fmt; } ;
typedef TYPE_1__ video_splitter_t ;
typedef int video_format_t ;


 int FUNC_0 (TYPE_1__*,char*,char const*,int) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int,char*) ;

video_splitter_t *FUNC_4( vlc_object_t *VAR_0,
                                      const char *VAR_1,
                                      const video_format_t *VAR_2 )
{
    video_splitter_t *VAR_3 = FUNC_3( VAR_0,
                                       sizeof(*VAR_3), "video splitter" );
    if( !VAR_3 )
        return ((void*)0);

    FUNC_1( &VAR_3->fmt, VAR_2 );


    VAR_3->p_module = FUNC_0( VAR_3, "video splitter", VAR_1, 1 );
    if( ! VAR_3->p_module )
    {
        FUNC_2( VAR_3 );
        return ((void*)0);
    }

    return VAR_3;
}
