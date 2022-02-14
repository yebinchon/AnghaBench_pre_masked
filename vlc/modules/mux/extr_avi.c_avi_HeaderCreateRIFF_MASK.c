
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_18__ {int i_streams; int i_movi_size; int i_idx1_size; int * stream; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_19__ {TYPE_4__* b; } ;
typedef TYPE_3__ bo_t ;
struct TYPE_20__ {int i_buffer; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int,int) ;

__attribute__((used)) static block_t *FUNC_8( sout_mux_t *VAR_1 )
{
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;
    int VAR_3;
    int VAR_4;
    bo_t VAR_5;

    struct
    {
        int i_riffsize;
        int i_hdrllistsize;
        int i_hdrldatastart;
    } VAR_6;

    if (! FUNC_6( &VAR_5, VAR_0 ) )
        return ((void*)0);

    FUNC_5( &VAR_5, "RIFF" );
    VAR_6.i_riffsize = VAR_5.b->i_buffer;
    FUNC_3( &VAR_5, 0xEFBEADDE );
    FUNC_5( &VAR_5, "AVI " );

    FUNC_5( &VAR_5, "LIST" );





    VAR_6.i_hdrllistsize = VAR_5.b->i_buffer;
    FUNC_3( &VAR_5, 0xEFBEADDE );
    FUNC_5( &VAR_5, "hdrl" );
    VAR_6.i_hdrldatastart = VAR_5.b->i_buffer;

    FUNC_1( VAR_1, &VAR_5 );
    for( VAR_3 = 0; VAR_3 < VAR_2->i_streams; VAR_3++ )
    {
        FUNC_2( &VAR_5, &VAR_2->stream[VAR_3] );
    }


    int VAR_7 = ( ( VAR_5.b->i_buffer + 12 + 0xE ) & ~ 0xF );
    VAR_4 = VAR_7 - VAR_5.b->i_buffer;
    FUNC_5( &VAR_5, "JUNK" );
    FUNC_3( &VAR_5, VAR_4 );
    for( int VAR_8=0; VAR_8< VAR_4; VAR_8++ )
    {
        FUNC_4( &VAR_5, 0 );
    }


    FUNC_7( &VAR_5, VAR_6.i_hdrllistsize,
                 VAR_5.b->i_buffer - VAR_6.i_hdrldatastart );

    FUNC_0( VAR_1, &VAR_5 );

    FUNC_5( &VAR_5, "LIST" );
    FUNC_3( &VAR_5, VAR_2->i_movi_size + 4 );
    FUNC_5( &VAR_5, "movi" );


    FUNC_7( &VAR_5, VAR_6.i_riffsize, VAR_5.b->i_buffer - 8
                 + VAR_2->i_movi_size + VAR_2->i_idx1_size );

    return( VAR_5.b );
}
