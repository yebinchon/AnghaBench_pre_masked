
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {TYPE_2__* p_block; int p_chain; } ;
struct TYPE_21__ {int i_state; int i_offset; size_t i_au_prepend; size_t i_au_min_size; TYPE_9__ bytestream; int p_private; int (* pf_validate ) (int ,TYPE_2__*) ;TYPE_2__* (* pf_parse ) (int ,int*,TYPE_2__*) ;int p_au_prepend; int i_startcode; int pf_startcode_helper; int p_startcode; int (* pf_reset ) (int ,int) ;} ;
typedef TYPE_1__ packetizer_t ;
struct TYPE_22__ {int i_flags; size_t i_buffer; void* i_pts; void* i_dts; int * p_buffer; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* VAR_3 ;
 TYPE_2__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*) ;
 TYPE_2__* FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*,int*,int ,int ,int ,int *) ;
 int FUNC_7 (TYPE_9__*,int *,size_t) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_9__*,int) ;
 int FUNC_10 (int *,int ,size_t) ;
 int FUNC_11 (int ,int) ;
 TYPE_2__* FUNC_12 (int ,int*,TYPE_2__*) ;
 int FUNC_13 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static block_t *FUNC_15( packetizer_t *VAR_4, block_t **VAR_5 )
{
    block_t *VAR_6 = ( VAR_5 ) ? *VAR_5 : ((void*)0);

    if( VAR_6 == ((void*)0) && VAR_4->bytestream.p_block == ((void*)0) )
        return ((void*)0);

    if( VAR_6 && FUNC_14( VAR_6->i_flags&(VAR_2|VAR_1) ) )
    {
        block_t *VAR_7 = FUNC_15( VAR_4, ((void*)0) );
        if( VAR_7 )
            return VAR_7;

        VAR_4->i_state = 128;
        FUNC_1( &VAR_4->bytestream );
        VAR_4->i_offset = 0;
        VAR_4->pf_reset( VAR_4->p_private, 0 );
    }

    if( VAR_6 )
        FUNC_4( &VAR_4->bytestream, VAR_6 );

    for( ;; )
    {
        bool VAR_8;
        block_t *VAR_9;

        switch( VAR_4->i_state )
        {
        case 128:

            if( !FUNC_6( &VAR_4->bytestream, &VAR_4->i_offset,
                                                VAR_4->p_startcode, VAR_4->i_startcode,
                                                VAR_4->pf_startcode_helper, ((void*)0) ) )
                VAR_4->i_state = 129;

            if( VAR_4->i_offset )
            {
                FUNC_9( &VAR_4->bytestream, VAR_4->i_offset );
                VAR_4->i_offset = 0;
                FUNC_2( &VAR_4->bytestream );
            }

            if( VAR_4->i_state != 129 )
                return ((void*)0);

            VAR_4->i_offset = 1;


        case 129:

            if( FUNC_6( &VAR_4->bytestream, &VAR_4->i_offset,
                                               VAR_4->p_startcode, VAR_4->i_startcode,
                                               VAR_4->pf_startcode_helper, ((void*)0) ) )
            {
                if( VAR_5 || !VAR_4->bytestream.p_chain )
                    return ((void*)0);



                VAR_4->i_offset = FUNC_5(&VAR_4->bytestream);
                if( VAR_4->i_offset == 0 )
                    return ((void*)0);

                if( VAR_4->i_offset <= (size_t)VAR_4->i_startcode &&
                    (VAR_4->bytestream.p_block->i_flags & VAR_0) == 0 )
                    return ((void*)0);
            }

            FUNC_2( &VAR_4->bytestream );


            block_t *VAR_10 = VAR_4->bytestream.p_block;

            VAR_9 = FUNC_0( VAR_4->i_offset + VAR_4->i_au_prepend );
            VAR_9->i_pts = VAR_10->i_pts;
            VAR_9->i_dts = VAR_10->i_dts;


            if( (VAR_10->i_flags & VAR_0) &&
                 VAR_10->i_buffer == VAR_4->i_offset )
            {
                VAR_9->i_flags |= VAR_0;
            }

            FUNC_7( &VAR_4->bytestream, &VAR_9->p_buffer[VAR_4->i_au_prepend],
                            VAR_9->i_buffer - VAR_4->i_au_prepend );
            if( VAR_4->i_au_prepend > 0 )
                FUNC_10( VAR_9->p_buffer, VAR_4->p_au_prepend, VAR_4->i_au_prepend );

            VAR_4->i_offset = 0;


            if( VAR_9->i_buffer < VAR_4->i_au_min_size )
            {
                FUNC_8( VAR_9 );
                VAR_9 = ((void*)0);
            }
            else
            {
                VAR_9 = VAR_4->pf_parse( VAR_4->p_private, &VAR_8, VAR_9 );
                if( VAR_8 )
                {
                    VAR_10->i_dts = VAR_3;
                    VAR_10->i_pts = VAR_3;
                }
            }

            if( !VAR_9 )
            {
                VAR_4->i_state = 128;
                break;
            }
            if( VAR_4->pf_validate( VAR_4->p_private, VAR_9 ) )
            {
                VAR_4->i_state = 128;
                FUNC_8( VAR_9 );
                break;
            }


            if( VAR_5 )
                *VAR_5 = FUNC_3( &VAR_4->bytestream );

            VAR_4->i_state = 128;

            return VAR_9;
        }
    }
}
