
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum cc_payload_type_e { ____Placeholder_cc_payload_type_e } cc_payload_type_e ;
struct TYPE_4__ {scalar_t__ i_payload_type; int i_payload_other_count; scalar_t__ i_data; int b_reorder; } ;
typedef TYPE_1__ cc_data_t ;
typedef int bs_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const FUNC_0 (int const) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int const,int const*) ;

__attribute__((used)) static inline void FUNC_5( cc_data_t *VAR_6, enum cc_payload_type_e VAR_7,
                               bool VAR_8, const uint8_t *VAR_9, int VAR_10 )
{
    if( VAR_6->i_payload_type != VAR_3 && VAR_6->i_payload_type != VAR_7 )
    {
        VAR_6->i_payload_other_count++;
        if( VAR_6->i_payload_other_count < 50 )
            return;
    }
    VAR_6->i_payload_type = VAR_7;
    VAR_6->i_payload_other_count = 0;

    if( VAR_7 == VAR_4 )
    {
        for( int VAR_11 = 0; VAR_11 + 2 < VAR_10; VAR_11 += 3 )
        {
            if( VAR_6->i_data + 3 > VAR_0 )
                break;

            const uint8_t *VAR_12 = &VAR_9[VAR_11];
            FUNC_4( VAR_6, VAR_12[0], &VAR_12[1] );
        }
        VAR_6->b_reorder = 1;
    }
    else if( VAR_7 == VAR_2 )
    {
        const uint8_t *VAR_13 = &VAR_9[0];
        const int VAR_14 = VAR_13[0]&0x1f;
        int VAR_15;

        if( !(VAR_13[0]&0x40) )
            return;
        if( VAR_10 < 1+1 + VAR_14*3 + 1)
            return;
        if( VAR_14 <= 0 )
            return;
        if( VAR_13[2+VAR_14 * 3] != 0xff )
            return;
        VAR_13 += 2;

        for( VAR_15 = 0; VAR_15 < VAR_14; VAR_15++, VAR_13 += 3 )
        {
            if( VAR_6->i_data + 3 > VAR_0 )
                break;

            FUNC_4( VAR_6, VAR_13[0], &VAR_13[1] );
        }
        VAR_6->b_reorder = 1;
    }
    else if( VAR_7 == VAR_1 )
    {
        const int VAR_16 = VAR_9[4] & 0x01;
        const int VAR_17 = (VAR_9[4] & 0x80) ? 0 : 1;
        const int VAR_18 = (VAR_9[4] >> 1) & 0xf;
        const uint8_t *VAR_19 = &VAR_9[5];
        int VAR_20;

        if( VAR_10 < 4+1+6*VAR_18 - ( VAR_16 ? 3 : 0) )
            return;
        for( VAR_20 = 0; VAR_20 < VAR_18; VAR_20++ )
        {
            int VAR_21;
            for( VAR_21 = 0; VAR_21 < 2; VAR_21++, VAR_19 += 3 )
            {
                const int VAR_22 = VAR_21 == VAR_17 ? 0 : 1;

                if( VAR_16 && VAR_20 == VAR_18 - 1 && VAR_21 == 1 )
                    break;
                if( (VAR_19[0] & 0xfe) != 0xfe )
                    continue;
                if( VAR_6->i_data + 3 > VAR_0 )
                    continue;

                FUNC_4( VAR_6, FUNC_0(VAR_22), &VAR_19[1] );
            }
        }
        VAR_6->b_reorder = 0;
    }
    else if( VAR_7 == VAR_5 )
    {
        const uint8_t *VAR_23 = &VAR_9[0];
        for( int VAR_24 = VAR_10 >> 2; VAR_24 > 0;
             VAR_24--, VAR_23 += 4 )
        {
            if( VAR_6->i_data + 3 > VAR_0 )
                return;
            uint8_t VAR_25 = (VAR_23[0] & 0x02) >> 1;
            FUNC_4( VAR_6, FUNC_0(VAR_25), &VAR_23[2] );
        }
        VAR_6->b_reorder = 0;
    }
    else
    {
        bs_t VAR_26;
        FUNC_1( &VAR_26, &VAR_9[2], VAR_10 - 2 );
        const int VAR_27 = FUNC_2( &VAR_26, 5 );
        for( int VAR_28 = 0; VAR_28 < VAR_27; VAR_28++ )
        {
            FUNC_3( &VAR_26, 2 );
            const int VAR_29 = FUNC_2( &VAR_26, 2 );
            FUNC_3( &VAR_26, 5 );
            uint8_t VAR_30[2];
            for( int VAR_31 = 0; VAR_31 < 2; VAR_31++ )
            {
                VAR_30[VAR_31] = 0;
                for( int VAR_32 = 0; VAR_32 < 8; VAR_32++ )
                    VAR_30[VAR_31] |= FUNC_2( &VAR_26, 1 ) << VAR_32;
            }
            FUNC_3( &VAR_26, 1 );

            if( VAR_29 == 0 )
                continue;
            if( VAR_6->i_data + 2*3 > VAR_0 )
                continue;


            int VAR_33 = ((VAR_29 - 1) & 1);
            if (!VAR_8)
                VAR_33 ^= 1;

            FUNC_4( VAR_6, FUNC_0(VAR_33), &VAR_30[0] );
        }
        VAR_6->b_reorder = 1;
    }
}
