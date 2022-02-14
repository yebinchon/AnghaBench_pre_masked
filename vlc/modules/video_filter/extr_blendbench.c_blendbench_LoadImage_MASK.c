
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
typedef int video_format_t ;
struct TYPE_6__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef int image_handler_t ;
struct TYPE_5__ {int i_visible_lines; int i_visible_pitch; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,char const*,int ,int ) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7( vlc_object_t *VAR_3, picture_t **VAR_4,
                                 vlc_fourcc_t VAR_5, char *VAR_6, const char *VAR_7 )
{
    image_handler_t *VAR_8;
    video_format_t VAR_9;

    FUNC_6( &VAR_9, VAR_5 );

    VAR_8 = FUNC_0( VAR_3 );
    *VAR_4 = FUNC_2( VAR_8, VAR_6, &VAR_9 );
    FUNC_5( &VAR_9 );
    FUNC_1( VAR_8 );

    if( *VAR_4 == ((void*)0) )
    {
        FUNC_4( VAR_3, "Unable to load %s image", VAR_7 );
        return VAR_0;
    }

    FUNC_3( VAR_3, "%s image has dim %d x %d (Y plane)", VAR_7,
             (*VAR_4)->p[VAR_2].i_visible_pitch,
             (*VAR_4)->p[VAR_2].i_visible_lines );

    return VAR_1;
}
