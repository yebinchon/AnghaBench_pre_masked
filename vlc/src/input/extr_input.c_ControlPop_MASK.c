
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int input_thread_t ;
struct TYPE_5__ {int i_control; int lock_control; TYPE_2__* control; int wait_control; scalar_t__ is_stopped; } ;
typedef TYPE_1__ input_thread_private_t ;
typedef int input_control_param_t ;
struct TYPE_6__ {int i_type; int param; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline int FUNC_7( input_thread_t *VAR_2,
                              int *VAR_3, input_control_param_t *VAR_4,
                              vlc_tick_t VAR_5, bool VAR_6 )
{
    input_thread_private_t *VAR_7 = FUNC_1(VAR_2);

    FUNC_5( &VAR_7->lock_control );
    while( VAR_7->i_control <= 0 ||
           ( VAR_6 && FUNC_0( VAR_7->control[0].i_type ) ) )
    {
        if( VAR_7->is_stopped )
        {
            FUNC_6( &VAR_7->lock_control );
            return VAR_0;
        }

        if( VAR_5 >= 0 )
        {
            if( FUNC_3( &VAR_7->wait_control, &VAR_7->lock_control,
                                    VAR_5 ) )
            {
                FUNC_6( &VAR_7->lock_control );
                return VAR_0;
            }
        }
        else
            FUNC_4( &VAR_7->wait_control, &VAR_7->lock_control );
    }


    *VAR_3 = VAR_7->control[0].i_type;
    *VAR_4 = VAR_7->control[0].param;

    VAR_7->i_control --;
    if( VAR_7->i_control > 0 )
        FUNC_2( &VAR_7->control[0], &VAR_7->control[1],
                 sizeof(*VAR_7->control) * VAR_7->i_control );
    FUNC_6( &VAR_7->lock_control );

    return VAR_1;
}
