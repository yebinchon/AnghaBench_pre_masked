
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int no_interact; struct vlc_logger* logger; } ;
typedef TYPE_1__ vlc_object_t ;
typedef int video_format_t ;
struct TYPE_8__ {int * p_picture; } ;
typedef TYPE_2__ subpicture_region_t ;
struct vlc_logger {int dummy; } ;
typedef int picture_t ;
typedef int image_handler_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static inline subpicture_region_t *
FUNC_5( vlc_object_t *VAR_0, video_format_t *VAR_1,
                             const char *VAR_2 )
{
    picture_t *VAR_3 = ((void*)0);
    struct vlc_logger *VAR_4 = VAR_0->logger;
    bool VAR_5 = VAR_0->no_interact;
    VAR_0->logger = ((void*)0);
    VAR_0->no_interact = 1;
    image_handler_t *VAR_6 = FUNC_0( VAR_0 );
    if( VAR_6 )
    {
        VAR_3 = FUNC_2( VAR_6, VAR_2, VAR_1 );
        FUNC_1( VAR_6 );
    }
    VAR_0->no_interact = VAR_5;
    VAR_0->logger = VAR_4;

    if(!VAR_3)
        return ((void*)0);

    subpicture_region_t *VAR_7 = FUNC_4(VAR_1);
    if (!VAR_7)
    {
        FUNC_3( VAR_3 );
        return ((void*)0);
    }

    FUNC_3( VAR_7->p_picture );
    VAR_7->p_picture = VAR_3;

    return VAR_7;
}
