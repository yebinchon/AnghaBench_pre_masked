
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sout_mux_t ;
struct TYPE_13__ {TYPE_4__* p_first; } ;
struct TYPE_10__ {int i_pes_used; scalar_t__ i_pes_dts; scalar_t__ i_pes_length; TYPE_8__ chain_pes; } ;
struct TYPE_9__ {int i_pid; int i_continuity_counter; int b_discontinuity; } ;
struct TYPE_11__ {TYPE_2__ state; TYPE_1__ ts; } ;
typedef TYPE_3__ sout_input_sys_t ;
struct TYPE_12__ {int i_buffer; int i_flags; int* p_buffer; int i_length; struct TYPE_12__* p_next; scalar_t__ i_dts; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,int,int) ;

__attribute__((used)) static block_t *FUNC_7( sout_mux_t *VAR_4, sout_input_sys_t *VAR_5,
                       bool VAR_6 )
{
    FUNC_1(VAR_4);
    block_t *VAR_7 = VAR_5->state.chain_pes.p_first;

    bool VAR_8 = 0;
    bool VAR_9 = 0;

    int VAR_10 = 184 - ( VAR_6 ? 8 : 0 );

    if( VAR_5->state.i_pes_used <= 0 )
    {
        VAR_8 = 1;
    }
    int VAR_11 = FUNC_2( (int)VAR_7->i_buffer - VAR_5->state.i_pes_used,
                       VAR_10 );

    if( VAR_6 || VAR_11 < VAR_10 )
    {
        VAR_9 = 1;
    }

    block_t *VAR_12 = FUNC_3( 188 );

    if (VAR_8 && !(VAR_7->i_flags & VAR_2) && VAR_7->i_flags & VAR_3)
    {
        VAR_12->i_flags |= VAR_3;
    }

    VAR_12->i_dts = VAR_7->i_dts;

    VAR_12->p_buffer[0] = 0x47;
    VAR_12->p_buffer[1] = ( VAR_8 ? 0x40 : 0x00 ) |
        ( ( VAR_5->ts.i_pid >> 8 )&0x1f );
    VAR_12->p_buffer[2] = VAR_5->ts.i_pid & 0xff;
    VAR_12->p_buffer[3] = ( VAR_9 ? 0x30 : 0x10 ) |
        VAR_5->ts.i_continuity_counter;

    VAR_5->ts.i_continuity_counter = (VAR_5->ts.i_continuity_counter+1)%16;
    VAR_5->ts.b_discontinuity = VAR_7->i_flags & VAR_1;

    if( VAR_9 )
    {
        int VAR_13 = VAR_10 - VAR_11;
        if( VAR_6 )
        {
            VAR_12->i_flags |= VAR_0;

            VAR_12->p_buffer[4] = 7 + VAR_13;
            VAR_12->p_buffer[5] = 1 << 4;
            if( VAR_5->ts.b_discontinuity )
            {
                VAR_12->p_buffer[5] |= 0x80;
                VAR_5->ts.b_discontinuity = 0;
            }
            FUNC_6(&VAR_12->p_buffer[12], 0xff, VAR_13);
        }
        else
        {
            VAR_12->p_buffer[4] = --VAR_13;
            if( VAR_13-- )
            {
                VAR_12->p_buffer[5] = 0;
                FUNC_6(&VAR_12->p_buffer[6], 0xff, VAR_13);
            }
        }
    }


    FUNC_5( &VAR_12->p_buffer[188 - VAR_11],
            &VAR_7->p_buffer[VAR_5->state.i_pes_used], VAR_11 );

    VAR_5->state.i_pes_used += VAR_11;
    VAR_5->state.i_pes_dts = VAR_7->i_dts + VAR_7->i_length *
        VAR_5->state.i_pes_used / VAR_7->i_buffer;
    VAR_5->state.i_pes_length -= VAR_7->i_length * VAR_11 / VAR_7->i_buffer;

    if( VAR_5->state.i_pes_used >= (int)VAR_7->i_buffer )
    {
        FUNC_4(FUNC_0( &VAR_5->state.chain_pes ));

        VAR_7 = VAR_5->state.chain_pes.p_first;
        VAR_5->state.i_pes_length = 0;
        if( VAR_7 )
        {
            VAR_5->state.i_pes_dts = VAR_7->i_dts;
            while( VAR_7 )
            {
                VAR_5->state.i_pes_length += VAR_7->i_length;
                VAR_7 = VAR_7->p_next;
            }
        }
        else
        {
            VAR_5->state.i_pes_dts = 0;
        }
        VAR_5->state.i_pes_used = 0;
    }

    return VAR_12;
}
