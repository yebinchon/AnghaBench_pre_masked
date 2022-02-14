
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int sout_mux_t ;
typedef int ogg_stream_state ;
struct TYPE_10__ {scalar_t__ body_len; int body; scalar_t__ header_len; int header; } ;
typedef TYPE_1__ ogg_page ;
struct TYPE_11__ {scalar_t__ i_length; scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ p_buffer; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__**,TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static block_t *FUNC_5( sout_mux_t *VAR_0,
                                  ogg_stream_state *VAR_1, vlc_tick_t VAR_2,
                                  bool VAR_3 )
{
    (void)VAR_0;
    block_t *VAR_4, *VAR_5 = ((void*)0);
    ogg_page VAR_6;
    int (*VAR_7)( ogg_stream_state*, ogg_page* ) = VAR_3 ? FUNC_3 : FUNC_4;

    while( VAR_7( VAR_1, &VAR_6 ) )
    {

        VAR_4 = FUNC_0( VAR_6.header_len + VAR_6.body_len );

        FUNC_2( VAR_4->p_buffer, VAR_6.header, VAR_6.header_len );
        FUNC_2( VAR_4->p_buffer + VAR_6.header_len, VAR_6.body, VAR_6.body_len );
        VAR_4->i_dts = 0;
        VAR_4->i_pts = VAR_2;
        VAR_4->i_length = 0;

        VAR_2 = 0;

        FUNC_1( &VAR_5, VAR_4 );
    }

    return VAR_5;
}
