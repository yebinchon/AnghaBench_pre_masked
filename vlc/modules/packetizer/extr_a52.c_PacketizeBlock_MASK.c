
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int strmtyp; } ;
struct TYPE_21__ {TYPE_1__ eac3; } ;
struct TYPE_23__ {int i_size; TYPE_2__ bs; int b_eac3; } ;
typedef TYPE_4__ vlc_a52_header_t ;
typedef int uint8_t ;
struct TYPE_22__ {int i_profile; int i_codec; } ;
struct TYPE_24__ {TYPE_3__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_25__ {int i_state; int b_discontuinity; int bytestream; int i_input_size; TYPE_4__ frame; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_26__ {int i_flags; int i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_7__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 TYPE_7__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_7__*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (int *,int ,int*,int) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_5__*,char*) ;
 int FUNC_13 (TYPE_5__*,char*) ;
 int FUNC_14 (TYPE_4__*,int*,int) ;

__attribute__((used)) static block_t *FUNC_15( decoder_t *VAR_8, block_t **VAR_9 )
{
    decoder_sys_t *VAR_10 = VAR_8->p_sys;
    uint8_t VAR_11[VAR_3];
    block_t *VAR_12;

    block_t *VAR_13 = VAR_9 ? *VAR_9 : ((void*)0);

    if( VAR_13 )
    {
        if( VAR_13->i_flags & (VAR_1 | VAR_0) )
        {

            block_t *VAR_14 = FUNC_15( VAR_8, ((void*)0) );
            if(VAR_14)
                return VAR_14;

            FUNC_1( VAR_8 );

            if( VAR_13->i_flags & VAR_0 )
            {
                FUNC_8( VAR_13 );
                return ((void*)0);
            }
        }

        FUNC_4( &VAR_10->bytestream, VAR_13 );
    }

    while( 1 )
    {
        switch( VAR_10->i_state )
        {
        case 130:
            while( FUNC_6( &VAR_10->bytestream, VAR_11, 2 )
                   == VAR_6 )
            {
                if( VAR_11[0] == 0x0b && VAR_11[1] == 0x77 )
                {
                    VAR_10->i_state = 128;
                    break;
                }
                FUNC_9( &VAR_10->bytestream );
            }
            if( VAR_10->i_state != 128 )
            {
                FUNC_2( &VAR_10->bytestream );


                return ((void*)0);
            }


        case 128:
            VAR_10->i_state = 132;


        case 132:

            if( FUNC_6( &VAR_10->bytestream, VAR_11,
                                 VAR_3 ) != VAR_6 )
            {

                return ((void*)0);
            }


            if( FUNC_14( &VAR_10->frame, VAR_11,
                                      VAR_3 ) != VAR_6 )
            {
                FUNC_12( VAR_8, "emulated sync word" );
                FUNC_9( &VAR_10->bytestream );
                VAR_10->i_state = 130;
                break;
            }

            if( VAR_10->frame.b_eac3 && VAR_10->frame.bs.eac3.strmtyp == VAR_2 )
            {
                FUNC_13( VAR_8, "starting with dependent stream, skip it" );
                VAR_10->i_state = 130;
                if( FUNC_10( &VAR_10->bytestream,
                                     VAR_10->frame.i_size ) != VAR_6 )
                    return ((void*)0);
                break;
            }

            VAR_10->i_input_size = VAR_10->frame.i_size;
            VAR_10->i_state = 131;


        case 131:

            if( FUNC_7( &VAR_10->bytestream, VAR_10->i_input_size,
                                       VAR_11, VAR_3 )
                                       != VAR_6 )
            {
                if( VAR_13 == ((void*)0) )
                {
                    VAR_10->i_state = 133;
                    break;
                }

                return ((void*)0);
            }

            if( VAR_11[0] == 0 || VAR_11[1] == 0 )
            {

                VAR_10->i_state = 133;
                break;
            }

            if( VAR_11[0] != 0x0b || VAR_11[1] != 0x77 )
            {
                FUNC_12( VAR_8, "emulated sync word "
                         "(no sync on following frame)" );
                VAR_10->i_state = 130;
                FUNC_9( &VAR_10->bytestream );
                break;
            }

            vlc_a52_header_t VAR_15;
            if( !FUNC_14( &VAR_15, VAR_11, VAR_3 )
             && VAR_15 && VAR_15 == VAR_2 )
            {
                VAR_10->i_input_size += VAR_15;
                VAR_8->fmt_out.i_codec = VAR_5;
                VAR_8->fmt_out.i_profile = VAR_4;
            }

            VAR_10->i_state = 133;
            break;

        case 133:

            if( FUNC_11( &VAR_10->bytestream,
                                 VAR_10->i_input_size ) != VAR_6 )
            {

                return ((void*)0);
            }
            VAR_10->i_state = 129;


        case 129:
            if( !(VAR_12 = FUNC_0( VAR_8 )) )
            {
                return ((void*)0);
            }



            FUNC_5( &VAR_10->bytestream, VAR_12->p_buffer,
                            VAR_12->i_buffer );

            VAR_10->i_state = 130;

            if( VAR_12->i_dts == VAR_7 )
            {
                FUNC_8( VAR_12 );
                return ((void*)0);
            }

            if( VAR_10->b_discontuinity )
            {
                VAR_12->i_flags |= VAR_1;
                VAR_10->b_discontuinity = 0;
            }


            if( VAR_9 )
                *VAR_9 = FUNC_3( &VAR_10->bytestream );

            return VAR_12;
        }
    }
}
