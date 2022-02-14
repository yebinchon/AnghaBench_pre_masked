
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ strmtyp; } ;
struct TYPE_18__ {TYPE_1__ eac3; } ;
struct TYPE_21__ {size_t const i_size; scalar_t__ i_blocks_per_sync_frame; TYPE_2__ bs; int b_eac3; } ;
typedef TYPE_5__ vlc_a52_header_t ;
typedef int const uint8_t ;
struct TYPE_22__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ filter_t ;
struct TYPE_20__ {int i_nb_blocks; } ;
struct TYPE_23__ {scalar_t__ i_out_offset; TYPE_4__ eac3; TYPE_3__* p_out_buf; } ;
typedef TYPE_7__ filter_sys_t ;
struct TYPE_24__ {size_t const i_buffer; int const* p_buffer; } ;
typedef TYPE_8__ block_t ;
struct TYPE_19__ {scalar_t__ i_buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int const*,size_t const) ;
 int FUNC_1 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_8__*,int,int) ;

__attribute__((used)) static int FUNC_4( filter_t *VAR_7, block_t *VAR_8 )
{
    filter_sys_t *VAR_9 = VAR_7->p_sys;
    vlc_a52_header_t VAR_10;
    if( FUNC_0( &VAR_10, VAR_8->p_buffer, VAR_8->i_buffer )
        != VAR_6 || VAR_10 > VAR_8->i_buffer )
        return VAR_3;

    if( VAR_8->i_buffer > VAR_10 )
    {

        vlc_a52_header_t VAR_11;
        const uint8_t *VAR_12 = &VAR_8->p_buffer[VAR_10];
        const size_t VAR_13 = VAR_8->i_buffer - VAR_10;

        if( FUNC_0( &VAR_11, VAR_12, VAR_13 ) != VAR_6
         || VAR_11.i_size > VAR_13
         || !VAR_11.b_eac3 || VAR_11.bs.eac3.strmtyp != VAR_1
         || VAR_8->i_buffer > VAR_10 + VAR_11.i_size )
            return VAR_3;
    }

    if( !VAR_9->p_out_buf
     && FUNC_3( VAR_7, VAR_8, VAR_0 * 4, VAR_0 ) )
        return VAR_3;
    if( VAR_8->i_buffer > VAR_9->p_out_buf->i_buffer - VAR_9->i_out_offset )
        return VAR_3;

    FUNC_1( VAR_7, VAR_8 );


    VAR_9->eac3.i_nb_blocks += VAR_10;

    if( VAR_9->eac3.i_nb_blocks < 6 )
        return VAR_4;
    else if ( VAR_9->eac3.i_nb_blocks > 6 )
        return VAR_3;

    FUNC_2( VAR_7, VAR_2, 1 );
    VAR_9->eac3.i_nb_blocks = 0;
    return VAR_5;
}
