
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_10__ {int i_type; int i_size; scalar_t__ i_sequence; int i_size2; int i_data; int * p_data; void* i_unknown; } ;
typedef TYPE_2__ chunk_t ;
struct TYPE_11__ {scalar_t__ i_packet_sequence; int i_packet_length; int * p_packet; scalar_t__ i_packet_used; int * buffer; int stream; } ;
typedef TYPE_3__ access_sys_t ;


 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (int ,int *,int,int) ;

__attribute__((used)) static int FUNC_6( stream_t * VAR_2, chunk_t *VAR_3 )
{
    access_sys_t *VAR_4 = VAR_2->p_sys;
    int VAR_5;


    FUNC_2( VAR_3, 0, sizeof( chunk_t ) );







    if( FUNC_5( VAR_4->stream, VAR_4->buffer, 4, 1 ) < 4 )
    {
       FUNC_3( VAR_2, "cannot read data 2" );
       return VAR_0;
    }

    VAR_3->i_type = FUNC_1( VAR_4->buffer);
    VAR_3->i_size = FUNC_1( VAR_4->buffer + 2);

    VAR_5 = VAR_3->i_size;
    if( VAR_5 > 8 )
        VAR_5 = 8;

    if( FUNC_5( VAR_4->stream, VAR_4->buffer + 4, VAR_5, 1 ) < VAR_5 )
    {
        FUNC_3( VAR_2, "cannot read data 3" );
        return VAR_0;
    }
    VAR_3->i_sequence = FUNC_0( VAR_4->buffer + 4);
    VAR_3->i_unknown = FUNC_1( VAR_4->buffer + 8);





    if( VAR_5 < 8 )
        VAR_3->i_size2 = 8;
    else
        VAR_3->i_size2 = FUNC_1( VAR_4->buffer + 10);

    VAR_3->p_data = VAR_4->buffer + 12;
    VAR_3->i_data = VAR_3->i_size2 - 8;

    if( VAR_3->i_type == 0x4524 )
    {
        if( VAR_3->i_sequence == 0 )
        {
            FUNC_4( VAR_2, "EOF" );
            return VAR_0;
        }
        else
        {
            FUNC_4( VAR_2, "next stream following" );
            return VAR_0;
        }
    }
    else if( VAR_3->i_type == 0x4324 )
    {

        FUNC_4( VAR_2, "next stream following (reset) seq=%d", VAR_3->i_sequence );
        return VAR_0;
    }
    else if( (VAR_3->i_type != 0x4824) && (VAR_3->i_type != 0x4424) )
    {





        FUNC_3( VAR_2, "unrecognized chunk FATAL (0x%x)", VAR_3->i_type );
        return VAR_0;
    }

    if( (VAR_3->i_data > 0) &&
        (FUNC_5( VAR_4->stream, &VAR_4->buffer[12], VAR_3->i_data,
                       1 ) < VAR_3->i_data) )
    {
        FUNC_3( VAR_2, "cannot read data 4" );
        return VAR_0;
    }
    VAR_4->i_packet_sequence = VAR_3->i_sequence + 1;
    VAR_4->i_packet_used = 0;
    VAR_4->i_packet_length = VAR_3->i_data;
    VAR_4->p_packet = VAR_3->p_data;

    return VAR_1;
}
