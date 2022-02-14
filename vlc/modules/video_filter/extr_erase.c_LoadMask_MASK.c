
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_format_t ;
typedef int picture_t ;
typedef int image_handler_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {int * p_mask; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 char* FUNC_8 (char const*,int *) ;

__attribute__((used)) static void FUNC_9( filter_t *VAR_1, const char *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;
    image_handler_t *VAR_4;
    video_format_t VAR_5;
    picture_t *VAR_6 = VAR_3->p_mask;
    FUNC_7( &VAR_5, VAR_0 );
    VAR_4 = FUNC_1( VAR_1 );
    char *VAR_7 = FUNC_8( VAR_2, ((void*)0) );
    VAR_3->p_mask = FUNC_3( VAR_4, VAR_7, &VAR_5 );
    FUNC_0( VAR_7 );
    FUNC_6( &VAR_5 );
    if( VAR_3->p_mask )
    {
        if( VAR_6 )
            FUNC_5( VAR_6 );
    }
    else if( VAR_6 )
    {
        VAR_3->p_mask = VAR_6;
        FUNC_4( VAR_1, "Error while loading new mask. Keeping old mask." );
    }
    else
        FUNC_4( VAR_1, "Error while loading new mask. No mask available." );

    FUNC_2( VAR_4 );
}
