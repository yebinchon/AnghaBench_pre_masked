
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int * p_buffer; } ;
typedef TYPE_2__ block_t ;
struct TYPE_10__ {scalar_t__ i_position; scalar_t__ i_header; scalar_t__ i_media_used; size_t i_media; size_t i_packet_length; int * p_media; int * p_header; scalar_t__ b_eof; } ;
typedef TYPE_3__ access_sys_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,size_t) ;
 TYPE_2__* FUNC_1 (size_t const) ;
 int FUNC_2 (int *,int *,size_t const) ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static block_t *FUNC_5( stream_t *VAR_1, bool *restrict VAR_2 )
{
    access_sys_t *VAR_3 = VAR_1->p_sys;

    if( VAR_3->b_eof )
    {
        *VAR_2 = 1;
        return ((void*)0);
    }

    if( VAR_3->i_position < VAR_3->i_header )
    {
        const size_t VAR_4 = VAR_3->i_header - VAR_3->i_position;

        block_t *VAR_5 = FUNC_1( VAR_4 );
        if( !VAR_5 )
            return ((void*)0);

        FUNC_2( VAR_5->p_buffer, &VAR_3->p_header[VAR_3->i_position], VAR_4 );
        VAR_3->i_position += VAR_4;
        return VAR_5;
    }
    else if( VAR_3->p_media && VAR_3->i_media_used < FUNC_0( VAR_3->i_media, VAR_3->i_packet_length ) )
    {
        size_t VAR_6 = 0;
        size_t VAR_7 = 0;

        if( VAR_3->i_media_used < VAR_3->i_media )
            VAR_6 = VAR_3->i_media - VAR_3->i_media_used;
        if( FUNC_0( VAR_3->i_media, VAR_3->i_media_used ) < VAR_3->i_packet_length )
            VAR_7 = VAR_3->i_packet_length - FUNC_0( VAR_3->i_media, VAR_3->i_media_used );

        block_t *VAR_8 = FUNC_1( VAR_6 + VAR_7 );
        if( !VAR_8 )
            return ((void*)0);

        if( VAR_6 > 0 )
            FUNC_2( &VAR_8->p_buffer[0], &VAR_3->p_media[VAR_3->i_media_used], VAR_6 );
        if( VAR_7 > 0 )
            FUNC_3( &VAR_8->p_buffer[VAR_6], 0, VAR_7 );

        VAR_3->i_media_used += VAR_6 + VAR_7;
        VAR_3->i_position += VAR_6 + VAR_7;
        return VAR_8;
    }

    FUNC_4( VAR_1, VAR_0 );
    return ((void*)0);
}
