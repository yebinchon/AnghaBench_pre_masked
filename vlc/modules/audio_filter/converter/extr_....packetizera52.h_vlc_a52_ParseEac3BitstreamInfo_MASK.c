
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int strmtyp; int i_substreamid; int i_frmsiz; int i_fscod2; int i_numblkscod; } ;
struct vlc_a52_bitstream_info {int i_fscod; int i_acmod; int i_bsid; int i_bsmod; TYPE_1__ eac3; scalar_t__ i_lfeon; } ;
typedef int bs_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static inline int FUNC_5( struct vlc_a52_bitstream_info *VAR_3,
                                                  const uint8_t *VAR_4, size_t VAR_5 )
{
    bs_t VAR_6;
    FUNC_1( &VAR_6, VAR_4, VAR_5 );
    VAR_3->eac3.strmtyp = FUNC_2( &VAR_6, 2 );
    VAR_3->eac3.i_substreamid = FUNC_2( &VAR_6, 3 );

    VAR_3->eac3.i_frmsiz = FUNC_2( &VAR_6, 11 );
    if( VAR_3->eac3.i_frmsiz < 2 )
        return VAR_1;

    VAR_3->i_fscod = FUNC_2( &VAR_6, 2 );
    if( VAR_3->i_fscod == 0x03 )
    {
        VAR_3->eac3.i_fscod2 = FUNC_2( &VAR_6, 2 );
        if( VAR_3->eac3.i_fscod2 == 0x03 )
            return VAR_1;
        VAR_3->eac3.i_numblkscod = 0x03;
    }
    else VAR_3->eac3.i_numblkscod = FUNC_2( &VAR_6, 2 );

    VAR_3->i_acmod = FUNC_2( &VAR_6, 3 );
    VAR_3->i_lfeon = FUNC_3( &VAR_6 );
    VAR_3->i_bsid = FUNC_2( &VAR_6, 5 );

    if( VAR_5 <= VAR_0 )
    {
        VAR_3->i_bsmod = 0;
        return VAR_2;
    }

    FUNC_4( &VAR_6, 5 );
    if(FUNC_3( &VAR_6 ))
        FUNC_4( &VAR_6, 8 );

    if( VAR_3->i_acmod == 0x00 )
    {
        FUNC_4( &VAR_6, 5 );
        if(FUNC_3( &VAR_6 ))
            FUNC_4( &VAR_6, 8 );
    }

    if( VAR_3->eac3.strmtyp == 0x01 && FUNC_3( &VAR_6 ) )
        FUNC_4( &VAR_6, 16 );

    if( FUNC_3( &VAR_6 ) )
    {
        if( VAR_3->i_acmod > 0x02 )
        {
            FUNC_4( &VAR_6, 2 );
            if( VAR_3->i_acmod & 0x01 )
                FUNC_4( &VAR_6, 6 );
            if( VAR_3->i_acmod & 0x04 )
                FUNC_4( &VAR_6, 6 );
        }

        if( VAR_3->i_lfeon && FUNC_3( &VAR_6 ) )
            FUNC_4( &VAR_6, 5 );

        if( VAR_3->eac3.strmtyp == 0x00 )
        {
            if( FUNC_3( &VAR_6 ) )
                FUNC_4( &VAR_6, 6 );
            if( VAR_3->i_acmod == 0x00 && FUNC_3( &VAR_6 ) )
                FUNC_4( &VAR_6, 6 );
            if(FUNC_3( &VAR_6 ))
                FUNC_4( &VAR_6, 6 );
            const uint8_t VAR_7 = FUNC_2( &VAR_6, 2 );
            if( VAR_7 == 0x01 )
                FUNC_4( &VAR_6, 5 );
            else if( VAR_7 == 0x02 )
                FUNC_4( &VAR_6, 12 );
            else if( VAR_7 == 0x03 )
            {
                const unsigned VAR_8 = FUNC_2( &VAR_6, 5 ) + 2;
                for(size_t VAR_9=0; VAR_9<VAR_8; VAR_9++)
                    FUNC_4( &VAR_6, 8 );
                FUNC_0( &VAR_6 );
            }
            if( VAR_3->i_acmod < 0x02 )
            {
                if( FUNC_3( &VAR_6 ) )
                    FUNC_4( &VAR_6, 14 );
                if( VAR_3->i_acmod == 0x00 && FUNC_3( &VAR_6 ) )
                    FUNC_4( &VAR_6, 14 );
            }
            if( FUNC_3( &VAR_6 ) )
            {
                const uint8_t VAR_10[] = { 0+1, 1, 2, 6 };
                const size_t VAR_11 = VAR_10[VAR_3->eac3.i_numblkscod];
                for(size_t VAR_12=0; VAR_12<VAR_11; VAR_12++)
                {
                    if( VAR_3->eac3.i_numblkscod == 0x00 )
                        FUNC_4( &VAR_6, 5 );
                }
            }
        }
    }

    if( FUNC_3( &VAR_6 ) )
    {
        VAR_3->i_bsmod = FUNC_2( &VAR_6, 3 );

    }
    else VAR_3->i_bsmod = 0;

    return VAR_2;
}
