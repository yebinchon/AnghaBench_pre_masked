
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef char uint8_t ;
typedef int uint32_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_5__ {char* p_buffer; int i_dts; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char const*,char*) ;
 int FUNC_13 (char**,char*) ;

int FUNC_14( sout_stream_id_sys_t *VAR_3, const char *VAR_4,
                               vlc_tick_t VAR_5 )
{
    if (VAR_4 == ((void*)0))
        return VAR_0;


    char *VAR_6 = FUNC_12(VAR_4, "configuration=");
    FUNC_3(VAR_6 != ((void*)0));
    VAR_6 += sizeof("configuration=") - 1;
    char *VAR_7 = FUNC_11(VAR_6, ';');
    FUNC_3(VAR_7 != ((void*)0));
    size_t VAR_8 = VAR_7 - VAR_6;

    char *VAR_9 = FUNC_6(VAR_8 + 1);
    if(!VAR_9)
        return VAR_0;

    FUNC_7(VAR_9, VAR_6, VAR_8);
    VAR_9[VAR_8] = '\0';

    int VAR_10 = FUNC_8 (VAR_3) - 6;

    uint8_t *VAR_11, *VAR_12;
    int VAR_13;

    VAR_13 = FUNC_13(&VAR_11, VAR_9);
    FUNC_5(VAR_9);
    if (VAR_13 <= 9)
    {
        FUNC_5(VAR_11);
        return VAR_0;
    }
    VAR_12 = VAR_11 + 9;
    VAR_13 -= 9;

    int VAR_14 = ( VAR_13 + VAR_10 - 1 ) / VAR_10;

    for( int VAR_15 = 0; VAR_15 < VAR_14; VAR_15++ )
    {
        int VAR_16 = FUNC_2( VAR_10, VAR_13 );
        block_t *VAR_17 = FUNC_4( 18 + VAR_16 );

        unsigned VAR_18, VAR_19;
        if (VAR_14 == 1)
        {
            VAR_18 = 0;
            VAR_19 = 1;
        }
        else
        {
            VAR_19 = 0;
            if (VAR_15 == 0)
                VAR_18 = 1;
            else if (VAR_15 == VAR_14 - 1)
                VAR_18 = 3;
            else
                VAR_18 = 2;
        }

        uint32_t VAR_20 = ((VAR_2 & 0xffffff) << 8) |
                          (VAR_18 << 6) | (1 << 4) | VAR_19;


        FUNC_9( VAR_3, VAR_17, 0, VAR_5 );

        FUNC_0( VAR_17->p_buffer + 12, VAR_20);
        FUNC_1( VAR_17->p_buffer + 16, VAR_16);
        FUNC_7( &VAR_17->p_buffer[18], VAR_12, VAR_16 );

        VAR_17->i_dts = VAR_5;

        FUNC_10( VAR_3, VAR_17 );

        VAR_12 += VAR_16;
        VAR_13 -= VAR_16;
    }

    FUNC_5(VAR_11);

    return VAR_1;
}
