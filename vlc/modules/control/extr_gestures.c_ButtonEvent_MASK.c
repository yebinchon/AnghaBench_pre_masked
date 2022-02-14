
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_int; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_9__ {int i_button_mask; int b_button_pressed; int lock; int i_last_y; int i_last_x; } ;
typedef TYPE_3__ intf_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_1, char const *VAR_2,
                        vlc_value_t VAR_3, vlc_value_t VAR_4, void *VAR_5 )
{
    intf_thread_t *VAR_6 = VAR_5;
    intf_sys_t *VAR_7 = VAR_6->p_sys;

    (void) VAR_2; (void) VAR_3;

    FUNC_2( &VAR_7->lock );
    if( VAR_4.i_int & VAR_7->i_button_mask )
    {
        if( !VAR_7->b_button_pressed )
        {
            VAR_7->b_button_pressed = 1;
            FUNC_1( VAR_1, "mouse-moved",
                           &VAR_7->i_last_x, &VAR_7->i_last_y );
        }
    }
    else
    {
        if( VAR_7->b_button_pressed )
        {
            VAR_7->b_button_pressed = 0;
            FUNC_0( VAR_6 );
        }
    }
    FUNC_3( &VAR_7->lock );

    return VAR_0;
}
