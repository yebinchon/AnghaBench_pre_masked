
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int jack_nframes_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {unsigned int i_channels; size_t jack_sample_size; scalar_t__* pp_jack_buffer; int p_jack_ringbuffer; int * pp_jack_port_input; } ;
typedef TYPE_2__ demux_sys_t ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 size_t FUNC_1 (int ,char*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

int FUNC_5( jack_nframes_t VAR_0, void *VAR_1 )
{
    demux_t *VAR_2 = ( demux_t* )VAR_1;
    demux_sys_t *VAR_3 = VAR_2->p_sys;


    for ( unsigned VAR_4 = 0; VAR_4 < VAR_3->i_channels ; VAR_4++ )
    {
        VAR_3->pp_jack_buffer[VAR_4] = FUNC_0(
            VAR_3->pp_jack_port_input[VAR_4], VAR_0 );
    }


    for( unsigned VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
    {
        for( unsigned VAR_6 = 0; VAR_6 <VAR_3->i_channels; VAR_6++ )
        {
            if( FUNC_2( VAR_3->p_jack_ringbuffer ) <
                VAR_3->jack_sample_size ) {
                FUNC_3( VAR_2, "buffer overflow");
                return 0;
            }
            size_t VAR_7 = FUNC_1( VAR_3->p_jack_ringbuffer,
                                                    ( char * ) (VAR_3->pp_jack_buffer[VAR_6]+VAR_5),
                                                    VAR_3->jack_sample_size );
            if (VAR_7 != VAR_3->jack_sample_size ) {
                FUNC_4( VAR_2, "error writing on ring buffer");
            }
        }
    }

    return 0;
}
