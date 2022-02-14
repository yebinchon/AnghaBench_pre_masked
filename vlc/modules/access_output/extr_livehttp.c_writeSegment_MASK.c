
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int ssize_t ;
struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_12__ {size_t stuffing_size; int i_handle; int aes_ctx; int * stuffing_bytes; scalar_t__ key_uri; int current_segment_length; TYPE_3__* full_segments; TYPE_3__** full_segments_end; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
typedef scalar_t__ gcry_error_t ;
struct TYPE_13__ {size_t i_buffer; int * p_buffer; struct TYPE_13__* p_next; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,int *,int *) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,size_t,size_t) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *,size_t,int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_10( sout_access_out_t *VAR_3 )
{
    sout_access_out_sys_t *VAR_4 = VAR_3->p_sys;
    FUNC_6( VAR_3, "Writing all full segments" );

    block_t *VAR_5 = VAR_4->full_segments;
    VAR_4->full_segments = ((void*)0);
    VAR_4->full_segments_end = &VAR_4->full_segments;

    vlc_tick_t VAR_6 = 0;
    FUNC_0( VAR_5, ((void*)0), ((void*)0), &VAR_6 );

    ssize_t VAR_7=0;
    bool VAR_8 = 0;
    VAR_4->current_segment_length = VAR_6;
    while( VAR_5 )
    {
        if( VAR_4->key_uri && !VAR_8 )
        {
            if( VAR_4->stuffing_size )
            {
                VAR_5 = FUNC_1( VAR_5, VAR_4->stuffing_size, VAR_5->i_buffer );
                if( FUNC_8(!VAR_5 ) )
                    return VAR_1;
                FUNC_5( VAR_5->p_buffer, VAR_4->stuffing_bytes, VAR_4->stuffing_size );
                VAR_4->stuffing_size = 0;
            }
            size_t VAR_9 = VAR_5->i_buffer;
            size_t VAR_10 = (VAR_5->i_buffer + 15 ) & ~15;
            size_t VAR_11 = VAR_10 - VAR_9;
            if( VAR_11 )
            {
                VAR_4->stuffing_size = 16-VAR_11;
                VAR_5->i_buffer -= VAR_4->stuffing_size;
                FUNC_5(VAR_4->stuffing_bytes, &VAR_5->p_buffer[VAR_5->i_buffer], VAR_4->stuffing_size);
            }

            gcry_error_t VAR_12 = FUNC_3( VAR_4->aes_ctx,
                                VAR_5->p_buffer, VAR_5->i_buffer, ((void*)0), 0 );
            if( VAR_12 )
            {
                FUNC_7( VAR_3, "Encryption failure: %s ", FUNC_4(VAR_12) );
                return -1;
            }
            VAR_8=1;

        }

        ssize_t VAR_13 = FUNC_9( VAR_4->i_handle, VAR_5->p_buffer, VAR_5->i_buffer );
        if ( VAR_13 == -1 )
        {
           if ( VAR_2 == VAR_0 )
              continue;
           return -1;
        }


        if ( (size_t)VAR_13 >= VAR_5->i_buffer )
        {
           block_t *VAR_14 = VAR_5->p_next;
           FUNC_2 (VAR_5);
           VAR_5 = VAR_14;
           VAR_8=0;
        }
        else
        {
           VAR_5->p_buffer += VAR_13;
           VAR_5->i_buffer -= VAR_13;
        }
        VAR_7 += VAR_13;
    }
    return VAR_7;
}
