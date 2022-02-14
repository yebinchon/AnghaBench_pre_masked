
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_t ;
typedef int uint8_t ;
typedef int pppsz_info ;
typedef enum cdtext_charset_e { ____Placeholder_cdtext_charset_e } cdtext_charset_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,int,size_t*,size_t*,char*,int*,char***) ;
 int ** FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char***,int ,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,char const*) ;

__attribute__((used)) static int FUNC_10( vlc_meta_t ***VAR_6, int *VAR_7,
                        const uint8_t *VAR_8, int VAR_9 )
{
    char *VAR_10[VAR_2 + 1][0x10];
    int VAR_11 = -1;
    if( VAR_9 < 4 )
        return -1;

    VAR_8 += 4;
    VAR_9 -= 4;


    const uint8_t *VAR_12[3] = { ((void*)0), ((void*)0), ((void*)0) };
    for( int VAR_13 = 0; VAR_13 < VAR_9/VAR_4; VAR_13++ )
    {
        const uint8_t *VAR_14 = &VAR_8[VAR_4*VAR_13];
        const uint8_t VAR_15 = (VAR_14[3] >> 4) & 0x07;
        if( VAR_15 > 0 )
            continue;
        if( VAR_14[0] == 0x8f )
        {
            const int VAR_16 = VAR_14[1] & 0x7f;

            if( VAR_16 > 2 )
                return -1;

            if( VAR_12[VAR_16] != ((void*)0) )
                return -1;

            VAR_12[VAR_16] = &VAR_14[VAR_3];
        }
    }

    if( (!VAR_12[0] ^ !VAR_12[1]) ||
        (!VAR_12[1] ^ !VAR_12[2]) )
        return -1;

    FUNC_3( VAR_10, 0, sizeof(VAR_10) );

    enum cdtext_charset_e VAR_17;
    if( VAR_12[0] )
    {
        VAR_17 = VAR_12[0][0];

        if( VAR_17 == VAR_0 )
            VAR_17 = VAR_1;
    }
    else VAR_17 = VAR_0;


    char VAR_18[VAR_5];
    size_t VAR_19 = 0;
    size_t VAR_20 = 0;
    uint8_t VAR_21 = 0x00;

    for( int VAR_22 = 0; VAR_22 < VAR_9/VAR_4; VAR_22++ )
    {
        const uint8_t *VAR_23 = &VAR_8[VAR_4*VAR_22];
        const uint8_t VAR_24 = VAR_23[0];

        const uint8_t VAR_25 = (VAR_23[3] >> 4) & 0x07;



        if(VAR_19 && VAR_24 != VAR_21)
        {
            VAR_19 = 0;
            VAR_20 = 0;
        }
        VAR_21 = VAR_24;

        uint8_t VAR_26 = VAR_23[1] & 0x7f;
        if( VAR_26 > VAR_2 ||
            (VAR_23[1] & 0x80) ||
            VAR_25 > 0
           )
        {
            VAR_21 = 0x00;
            continue;
        }


        switch( VAR_24 )
        {
            case 0x80:
            case 0x81:
            case 0x85:
            case 0x87:
            {
                FUNC_0( VAR_23, VAR_17,
                                     &VAR_19, &VAR_20, VAR_18,
                                     &VAR_11, VAR_10 );
                break;
            }
            case 0x82:
            case 0x83:
            case 0x84:
            case 0x86:
            case 0x8d:
            case 0x8e:
            default:
                continue;
        }
    }

    if( VAR_11 < 0 )
        return -1;

    vlc_meta_t **VAR_27 = FUNC_1( VAR_11+1, sizeof(*VAR_27) );
    if( !VAR_27 )
        goto exit;

    for( int VAR_28 = 0; VAR_28 < 0x10; VAR_28++ )
    {
        for( int VAR_29 = 0; VAR_29 <= VAR_11; VAR_29++ )
        {

            const char *VAR_30 = VAR_10[0][VAR_28];
            const char *VAR_31 = VAR_10[VAR_29][VAR_28];

            if( !VAR_31 && !VAR_30 )
                continue;
            vlc_meta_t *VAR_32 = VAR_27[VAR_29];
            if( !VAR_32 )
            {
                VAR_32 = VAR_27[VAR_29] = FUNC_4();
                if( !VAR_32 )
                    continue;
            }
            switch( 0x80 + VAR_28 )
            {
            case 0x80:
                if( VAR_29 == 0 )
                {
                    FUNC_5( VAR_32, VAR_31 );
                }
                else
                {
                    if( VAR_31 )
                        FUNC_9( VAR_32, VAR_31 );
                    if( VAR_30 )
                        FUNC_5( VAR_32, VAR_30 );
                }
                break;
            case 0x81:
                FUNC_6( VAR_32,
                                    VAR_31 ? VAR_31 : VAR_30 );
                break;
            case 0x85:
                FUNC_7( VAR_32,
                                         VAR_31 ? VAR_31 : VAR_30 );
                break;
            case 0x87:
                FUNC_8( VAR_32,
                                   VAR_31 ? VAR_31 : VAR_30 );
                break;





            }
        }
    }

exit:
    for( int VAR_33 = 0; VAR_33 < 0x10; VAR_33++ )
        for( int VAR_34 = 0; VAR_34 <= VAR_11; VAR_34++ )
            FUNC_2( VAR_10[VAR_34][VAR_33] );

    *VAR_6 = VAR_27;
    *VAR_7 = VAR_11+1;
    return VAR_27 ? 0 : -1;
}
