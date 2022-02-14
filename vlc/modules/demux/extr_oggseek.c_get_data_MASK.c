
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {scalar_t__ i_total_length; scalar_t__ i_input_position; int oy; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 char* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static int64_t FUNC_5( demux_t *VAR_1, int64_t VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_1->p_sys;

    char *VAR_4;
    int64_t VAR_5;

    if ( VAR_3->i_total_length > 0 )
    {
        if ( VAR_3->i_input_position + VAR_2 > VAR_3->i_total_length )
        {
            VAR_2 = VAR_3->i_total_length - VAR_3->i_input_position;
            if ( VAR_2 <= 0 ) {
                return 0;
            }
        }
    }

    VAR_2 = FUNC_0( VAR_2, VAR_0 );

    FUNC_3 ( VAR_1, VAR_3->i_input_position );

    VAR_4 = FUNC_1( &VAR_3->oy, VAR_2 );

    VAR_5 = FUNC_4( VAR_1->s, VAR_4, VAR_2 );

    FUNC_2( &VAR_3->oy, VAR_5 );
    return VAR_5;
}
