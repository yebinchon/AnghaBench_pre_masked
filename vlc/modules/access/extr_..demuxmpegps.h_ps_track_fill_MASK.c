
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ i_cat; int b_packetized; int i_priority; scalar_t__* psz_language; void* i_original_fourcc; } ;
struct TYPE_4__ {int i_skip; int i_id; TYPE_3__ fmt; } ;
typedef TYPE_1__ ps_track_t ;
typedef int ps_psm_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_0 (char,char,char,char) ;
 int VAR_24 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int const*,size_t) ;

__attribute__((used)) static inline int FUNC_7( ps_track_t *VAR_25, ps_psm_t *VAR_26,
                                 int VAR_27,
                                 const uint8_t *VAR_28, size_t VAR_29,
                                 bool VAR_30 )
{
    VAR_25->i_skip = 0;
    VAR_25->i_id = VAR_27;

    if( ( VAR_27&0xff00 ) == 0xbd00 )
    {
        if( ( VAR_27&0xf8 ) == 0x88 ||
            ( VAR_27&0xf8 ) == 0x98 )
        {
            FUNC_1( &VAR_25->fmt, VAR_0, VAR_6 );
            VAR_25->i_skip = 4;
        }
        else if( ( VAR_27&0xf8 ) == 0x80 ||
                 ( VAR_27&0xf0 ) == 0xc0 )
        {
            bool VAR_31 = 0;
            if( ( VAR_27&0xf0 ) == 0xc0 )
            {
                if( VAR_28 == ((void*)0) || VAR_29 < 9 )
                    return VAR_23;

                unsigned VAR_32 = 9 + VAR_28[8];
                if( VAR_32 + 9 < VAR_29 )
                {

                    if( VAR_28[VAR_32 + 4] == 0x0b ||
                        VAR_28[VAR_32 + 5] == 0x77 )
                    {
                        int VAR_33 = VAR_28[VAR_32 + 9] >> 3;
                        if( VAR_33 > 10 )
                            VAR_31 = 1;
                    }
                }
            }

            FUNC_1( &VAR_25->fmt, VAR_0, VAR_31 ? VAR_9 : VAR_4 );
            VAR_25->i_skip = 4;
        }
        else if( ( VAR_27&0xfc ) == 0x00 )
        {
            FUNC_1( &VAR_25->fmt, VAR_1, VAR_5 );
        }
        else if( ( VAR_27&0xff ) == 0x10 )
        {
            FUNC_1( &VAR_25->fmt, VAR_1, VAR_20 );
        }
        else if( ( VAR_27&0xe0 ) == 0x20 )
        {
            FUNC_1( &VAR_25->fmt, VAR_1, VAR_19 );
            VAR_25->i_skip = 1;
        }
        else if( ( VAR_27&0xff ) == 0x70 )
        {
            FUNC_1( &VAR_25->fmt, VAR_1, VAR_18 );
        }
        else if( ( VAR_27&0xf0 ) == 0xa0 )
        {
            FUNC_1( &VAR_25->fmt, VAR_0, VAR_8 );
            VAR_25->i_skip = 1;
        }
        else if( ( VAR_27&0xf0 ) == 0xb0 )
        {
            FUNC_1( &VAR_25->fmt, VAR_0, VAR_21 );
            VAR_25->i_skip = 5;
        }
        else
        {
            FUNC_1( &VAR_25->fmt, VAR_2, 0 );
            return VAR_23;
        }
    }
    else if( (VAR_27&0xff00) == 0xfd00 )
    {
        uint8_t VAR_34 = VAR_27 & 0xff;
        if( ( VAR_34 >= 0x55 && VAR_34 <= 0x5f ) ||
            ( VAR_34 >= 0x75 && VAR_34 <= 0x7f ) )
        {
            FUNC_1( &VAR_25->fmt, VAR_3, VAR_22 );
        }
        else
        {
            FUNC_1( &VAR_25->fmt, VAR_2, 0 );
            return VAR_23;
        }
    }
    else if( (VAR_27&0xff00) == 0xa000 )
    {
        uint8_t VAR_35 = VAR_27 & 0x07;
        if( VAR_35 == 0 )
        {
            FUNC_1( &VAR_25->fmt, VAR_0, VAR_7 );
            VAR_25->i_skip = 1;
        }
        else if( VAR_35 == 1 )
        {
            FUNC_1( &VAR_25->fmt, VAR_0, VAR_12 );
            VAR_25->i_skip = -1;
        }
        else
        {
            FUNC_1( &VAR_25->fmt, VAR_2, 0 );
            return VAR_23;
        }
    }
    else
    {
        int VAR_36 = FUNC_5( VAR_26 , VAR_27 );

        FUNC_1( &VAR_25->fmt, VAR_2, 0 );

        if( (VAR_27&0xf0) == 0xe0 )
        {
            if( VAR_36 == 0x01 )
            {
                FUNC_1( &VAR_25->fmt, VAR_3, VAR_17 );
                VAR_25->fmt.i_original_fourcc = VAR_13;
            }
            else if( VAR_36 == 0x02 )
            {
                FUNC_1( &VAR_25->fmt, VAR_3, VAR_17 );
            }
            else if( VAR_36 == 0x10 )
            {
                FUNC_1( &VAR_25->fmt, VAR_3, VAR_15 );
            }
            else if( VAR_36 == 0x1b )
            {
                FUNC_1( &VAR_25->fmt, VAR_3, VAR_10 );
            }
            else if( VAR_36 == 0x24 )
            {
                FUNC_1( &VAR_25->fmt, VAR_3, VAR_11 );
            }
            else if( VAR_27 == 0xe2 ||
                     VAR_27 == 0xe3 )
            {
                FUNC_1( &VAR_25->fmt, VAR_3, VAR_10 );
            }
            else if( VAR_28 && VAR_36 == 0x00 &&
                     VAR_29 > 9 + 5 &&
                     VAR_29 > 9U + 5 + VAR_28[8] &&
                     FUNC_6( &VAR_28[ 9 + VAR_28[8] ],
                                  VAR_29 - 9 - VAR_28[8] ) )
            {
                FUNC_1( &VAR_25->fmt, VAR_3, VAR_10 );
            }
            else if( VAR_25->fmt.i_cat == VAR_2 &&
                     ( VAR_28 != ((void*)0) || VAR_30 ) )
            {
                FUNC_1( &VAR_25->fmt, VAR_3, VAR_17 );
            }
        }
        else if( ( VAR_27&0xe0 ) == 0xc0 )
        {
            if( VAR_36 == 0x03 ||
                VAR_36 == 0x04 )
            {
                FUNC_1( &VAR_25->fmt, VAR_0, VAR_16 );
            }
            else if( VAR_36 == 0x0f )
            {
                FUNC_1( &VAR_25->fmt, VAR_0, VAR_14 );
                VAR_25->fmt.i_original_fourcc = FUNC_0('A','D','T','S');
            }
            else if( VAR_36 == 0x11 )
            {
                FUNC_1( &VAR_25->fmt, VAR_0, VAR_14 );
                VAR_25->fmt.i_original_fourcc = FUNC_0('L','A','T','M');
            }
            else if( VAR_25->fmt.i_cat == VAR_2 )
            {
                FUNC_1( &VAR_25->fmt, VAR_0, VAR_16 );
            }
        }
        else if( VAR_25->fmt.i_cat == VAR_2 ) return VAR_23;
    }


    VAR_25->fmt.b_packetized = 0;
    VAR_25->fmt.i_priority = ~VAR_27 & 0x0F;

    if( FUNC_4( VAR_26, VAR_27 ) )
    {
        VAR_25->fmt.psz_language = FUNC_2( 4 );
        if( VAR_25->fmt.psz_language )
        {
            FUNC_3( VAR_25->fmt.psz_language, FUNC_4( VAR_26 , VAR_27 ), 3 );
            VAR_25->fmt.psz_language[3] = 0;
        }
    }

    return (VAR_25->fmt.i_cat != VAR_2 || VAR_28) ? VAR_24 : VAR_23;
}
