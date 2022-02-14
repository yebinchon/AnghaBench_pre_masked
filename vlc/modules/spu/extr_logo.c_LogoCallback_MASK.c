
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_int; int psz_string; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
struct TYPE_10__ {int i_repeat; int i_alpha; } ;
typedef TYPE_2__ logo_list_t ;
struct TYPE_11__ {int b_spu_update; int lock; int i_pos; int i_pos_y; int i_pos_x; TYPE_2__ list; } ;
typedef TYPE_3__ filter_sys_t ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( vlc_object_t *VAR_1, char const *VAR_2,
                         vlc_value_t VAR_3, vlc_value_t VAR_4, void *VAR_5 )
{
    FUNC_3(VAR_3);
    filter_sys_t *VAR_6 = (filter_sys_t *)VAR_5;
    logo_list_t *VAR_7 = &VAR_6->list;

    FUNC_5( &VAR_6->lock );
    if( !FUNC_4( VAR_2, "logo-file" ) )
    {
        FUNC_1( VAR_7 );
        FUNC_0( VAR_1, VAR_7, VAR_4.psz_string );
    }
    else if ( !FUNC_4( VAR_2, "logo-x" ) )
    {
        VAR_6->i_pos_x = VAR_4.i_int;
    }
    else if ( !FUNC_4( VAR_2, "logo-y" ) )
    {
        VAR_6->i_pos_y = VAR_4.i_int;
    }
    else if ( !FUNC_4( VAR_2, "logo-position" ) )
    {
        VAR_6->i_pos = VAR_4.i_int;
    }
    else if ( !FUNC_4( VAR_2, "logo-opacity" ) )
    {
        VAR_7->i_alpha = FUNC_2( VAR_4.i_int, 0, 255 );
    }
    else if ( !FUNC_4( VAR_2, "logo-repeat" ) )
    {
        VAR_7->i_repeat = VAR_4.i_int;
    }
    VAR_6->b_spu_update = 1;
    FUNC_6( &VAR_6->lock );

    return VAR_0;
}
