
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int i_width; int i_visible_width; int i_height; int i_visible_height; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_8__ {int i_x; int i_y; int i_align; } ;
typedef TYPE_2__ subpicture_region_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *,TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static subpicture_region_t * FUNC_2( vlc_object_t *VAR_3,
                                            int VAR_4, int VAR_5, int VAR_6, int VAR_7,
                                            const char *VAR_8 )
{
    video_format_t VAR_9;
    FUNC_1( &VAR_9, VAR_2 );
    VAR_9.i_width = VAR_9.i_visible_width = VAR_6;
    VAR_9.i_height = VAR_9.i_visible_height = VAR_7;

    subpicture_region_t *VAR_10 =
            FUNC_0( VAR_3, &VAR_9, VAR_8 );
    if( VAR_10 )
    {
        VAR_10->i_x = VAR_4;
        VAR_10->i_y = VAR_5;
        VAR_10->i_align = VAR_0|VAR_1;
    }
    return VAR_10;
}
