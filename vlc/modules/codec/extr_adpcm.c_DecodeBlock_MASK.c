
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_18__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_19__ {scalar_t__ i_block; int codec; int i_samplesperblock; int end_date; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_20__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_buffer; scalar_t__ i_length; scalar_t__ p_buffer; } ;
typedef TYPE_3__ block_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 TYPE_3__* FUNC_11 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static block_t *FUNC_13( decoder_t *VAR_3, block_t **VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_3->p_sys;
    block_t *VAR_6;

    if( !*VAR_4 ) return ((void*)0);

    VAR_6 = *VAR_4;

    if( VAR_6->i_flags & (VAR_1|VAR_0) )
    {
        FUNC_6( VAR_3 );
        if( VAR_6->i_flags & VAR_0 )
            goto drop;
    }

    if( VAR_6->i_pts != VAR_2 &&
        VAR_6->i_pts != FUNC_8( &VAR_5->end_date ) )
    {
        FUNC_10( &VAR_5->end_date, VAR_6->i_pts );
    }
    else if( FUNC_8( &VAR_5->end_date ) == VAR_2 )

        goto drop;


    VAR_6->i_pts = VAR_2;

    if( VAR_6->i_buffer >= VAR_5->i_block )
    {
        block_t *VAR_7;

        if( FUNC_12( VAR_3 ) )
            goto drop;
        VAR_7 = FUNC_11( VAR_3, VAR_5->i_samplesperblock );
        if( VAR_7 == ((void*)0) )
            goto drop;

        VAR_7->i_pts = FUNC_8( &VAR_5->end_date );
        VAR_7->i_length = FUNC_9( &VAR_5->end_date,
                                     VAR_5->i_samplesperblock ) - VAR_7->i_pts;

        switch( VAR_5->codec )
        {
        case 130:
            FUNC_3( VAR_3, (int16_t*)VAR_7->p_buffer,
                              VAR_6->p_buffer );
            break;
        case 129:
            FUNC_4( VAR_3, (int16_t*)VAR_7->p_buffer,
                               VAR_6->p_buffer );
            break;
        case 128:
            FUNC_5( VAR_3, (int16_t*)VAR_7->p_buffer,
                           VAR_6->p_buffer );
            break;
        case 132:
            FUNC_1( VAR_3, (int16_t*)VAR_7->p_buffer,
                            VAR_6->p_buffer );
            break;
        case 133:
            FUNC_0( VAR_3, (int16_t*)VAR_7->p_buffer,
                            VAR_6->p_buffer );
            break;
        case 131:
            FUNC_2( VAR_3, (int16_t*)VAR_7->p_buffer,
                           VAR_6->p_buffer );
        default:
            break;
        }

        VAR_6->p_buffer += VAR_5->i_block;
        VAR_6->i_buffer -= VAR_5->i_block;
        return VAR_7;
    }

drop:
    FUNC_7( VAR_6 );
    *VAR_4 = ((void*)0);
    return ((void*)0);
}
