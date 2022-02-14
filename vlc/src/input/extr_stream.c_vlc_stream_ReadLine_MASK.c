
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vlc_iconv_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_12__ {int * pf_block; int * pf_read; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_11__ {scalar_t__ conv; int little_endian; int char_width; } ;
struct TYPE_13__ {TYPE_1__ text; } ;
typedef TYPE_3__ stream_priv_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int const*,char,int) ;
 int FUNC_5 (int const*,char*,int) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 int FUNC_7 (TYPE_2__*,char*,...) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 char* FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int) ;
 size_t FUNC_11 (scalar_t__,char const**,size_t*,char**,size_t*) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (char*,char const*) ;
 int FUNC_14 (TYPE_2__*,int const**,int) ;
 int FUNC_15 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ) ;

char *FUNC_18( stream_t *VAR_3 )
{
    stream_priv_t *VAR_4 = (stream_priv_t *)VAR_3;
    char *VAR_5 = ((void*)0);
    int VAR_6 = 0, VAR_7 = 0;


    if( VAR_3->pf_read == ((void*)0) && VAR_3->pf_block == ((void*)0) )
        return ((void*)0);

    for( ;; )
    {
        char *VAR_8;
        const uint8_t *VAR_9;
        int VAR_10;
        int64_t VAR_11;


        VAR_10 = FUNC_14( VAR_3, &VAR_9, VAR_1 );
        if( VAR_10 <= 0 ) break;


        VAR_11 = FUNC_16( VAR_3 );
        if( VAR_11 == 0 && VAR_10 >= 2 )
        {
            const char *VAR_12 = ((void*)0);

            if( FUNC_10(VAR_4->text.conv != (vlc_iconv_t)-1) )
            {
                FUNC_12( VAR_4->text.conv );
                VAR_4->text.conv = (vlc_iconv_t)-1;
            }

            if( !FUNC_5( VAR_9, "\xFF\xFE", 2 ) )
            {
                VAR_12 = "UTF-16LE";
                VAR_4->text.little_endian = 1;
            }
            else if( !FUNC_5( VAR_9, "\xFE\xFF", 2 ) )
            {
                VAR_12 = "UTF-16BE";
            }


            if( VAR_12 != ((void*)0) )
            {
                FUNC_6( VAR_3, "UTF-16 BOM detected" );
                VAR_4->text.conv = FUNC_13( "UTF-8", VAR_12 );
                if( FUNC_10(VAR_4->text.conv == (vlc_iconv_t)-1) )
                {
                    FUNC_7( VAR_3, "iconv_open failed" );
                    goto error;
                }
                VAR_4->text.char_width = 2;
            }
        }

        if( VAR_10 % VAR_4->text.char_width )
        {

            VAR_10 = VAR_10 - ( VAR_10 % VAR_4->text.char_width );
            FUNC_8( VAR_3, "the read is not i_char_width compatible");
        }

        if( VAR_10 == 0 )
            break;


        if( VAR_4->text.char_width == 1 )
        {

            VAR_8 = FUNC_4( VAR_9, '\n', VAR_10 );
            if( VAR_8 == ((void*)0) )

                VAR_8 = FUNC_4( VAR_9, '\r', VAR_10 );
        }
        else
        {
            const uint8_t *VAR_13 = VAR_9 + VAR_10 - VAR_4->text.char_width;
            uint16_t VAR_14 = VAR_4->text.little_endian ? 0x0A00 : 0x00A0;

            FUNC_1( VAR_4->text.char_width == 2 );
            VAR_8 = ((void*)0);

            for( const uint8_t *VAR_15 = VAR_9; VAR_15 <= VAR_13; VAR_15 += 2 )
            {
                if( FUNC_0( VAR_15 ) == VAR_14 )
                {
                     VAR_8 = (char *)VAR_15 + 1;
                     break;
                }
            }

            if( VAR_8 == ((void*)0) )
            {
                VAR_14 = VAR_4->text.little_endian ? 0x0D00 : 0x00D0;
                for( const uint8_t *VAR_16 = VAR_9; VAR_16 <= VAR_13; VAR_16 += 2 )
                {
                    if( FUNC_0( VAR_16 ) == VAR_14 )
                    {
                        VAR_8 = (char *)VAR_16 + 1;
                        break;
                    }
                }
            }
        }

        if( VAR_8 )
        {
            VAR_10 = (VAR_8 - (char *)VAR_9) + 1;
            VAR_5 = FUNC_9( VAR_5,
                        VAR_6 + VAR_10 + VAR_4->text.char_width );
            if( !VAR_5 )
                goto error;
            VAR_10 = FUNC_15( VAR_3, &VAR_5[VAR_6], VAR_10 );
            if( VAR_10 <= 0 ) break;
            VAR_6 += VAR_10 - VAR_4->text.char_width; ;
            VAR_7 += VAR_10;


            break;
        }


        VAR_5 = FUNC_9( VAR_5,
                          VAR_6 + VAR_1 + VAR_4->text.char_width );
        if( !VAR_5 )
            goto error;
        VAR_10 = FUNC_15( VAR_3, &VAR_5[VAR_6], VAR_1 );
        if( VAR_10 <= 0 ) break;
        VAR_6 += VAR_10;
        VAR_7 += VAR_10;

        if( VAR_7 >= VAR_0 )
            goto error;
    }

    if( VAR_7 > 0 )
    {
        if( VAR_4->text.char_width > 1 )
        {
            int VAR_17 = 0;
            size_t VAR_18 = 0, VAR_19 = 0;
            const char * VAR_20 = ((void*)0);
            char * VAR_21 = ((void*)0);
            char * VAR_22 = ((void*)0);



            VAR_17 = VAR_6 * 3 / 2 + 1;
            VAR_22 = FUNC_3( VAR_17 );
            if( VAR_22 == ((void*)0) )
                goto error;
            VAR_18 = (size_t)VAR_6;
            VAR_19 = (size_t)VAR_17;
            VAR_20 = VAR_5;
            VAR_21 = VAR_22;

            if( FUNC_11( VAR_4->text.conv, &VAR_20, &VAR_18, &VAR_21, &VAR_19 ) == (size_t)-1 )
            {
                FUNC_7( VAR_3, "conversion error: %s", FUNC_17( VAR_2 ) );
                FUNC_6( VAR_3, "original: %d, in %zu, out %zu", VAR_6, VAR_18, VAR_19 );
            }
            FUNC_2( VAR_5 );
            VAR_5 = VAR_22;
            VAR_6 = (size_t)VAR_17 - VAR_19;
        }


        while( VAR_6 >= 1 &&
               (VAR_5[VAR_6 - 1] == '\r' || VAR_5[VAR_6 - 1] == '\n') )
            VAR_6--;


        VAR_5[VAR_6] = '\0';

        return VAR_5;
    }

error:

    FUNC_2( VAR_5 );


    if( VAR_4->text.conv != (vlc_iconv_t)(-1) )
    {
        FUNC_12( VAR_4->text.conv );
        VAR_4->text.conv = (vlc_iconv_t)(-1);
    }
    return ((void*)0);
}
