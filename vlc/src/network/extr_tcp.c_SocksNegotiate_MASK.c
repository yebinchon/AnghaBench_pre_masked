
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,char const*,int const) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int,int*,int) ;
 int FUNC_4 (int *,int,int*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_2,
                           int VAR_3, int VAR_4,
                           const char *VAR_5,
                           const char *VAR_6 )
{
    uint8_t VAR_7[128+2*256];
    int VAR_8;
    bool VAR_9 = 0;

    if( VAR_4 != 5 )
        return VAR_1;


    VAR_7[0] = VAR_4;
    if( VAR_5 != ((void*)0) && VAR_6 != ((void*)0) )
    {
        VAR_7[1] = 2;
        VAR_7[2] = 0x00;
        VAR_7[3] = 0x02;
        VAR_8 = 4;
        VAR_9 = 1;
    }
    else
    {
        VAR_7[1] = 1;
        VAR_7[2] = 0x00;
        VAR_8 = 3;
    }

    if( FUNC_4( VAR_2, VAR_3, VAR_7, VAR_8 ) != VAR_8 )
        return VAR_0;
    if( FUNC_3( VAR_2, VAR_3, VAR_7, 2) != 2 )
        return VAR_0;

    FUNC_1( VAR_2, "socks: v=%d method=%x", VAR_7[0], VAR_7[1] );

    if( VAR_7[1] == 0x00 )
    {
        FUNC_1( VAR_2, "socks: no authentication required" );
    }
    else if( VAR_7[1] == 0x02 )
    {
        if( VAR_5 == ((void*)0) || VAR_6 == ((void*)0) )
        {
            FUNC_2( VAR_2, "socks: server mandates authentication but "
                            "a username and/or password was not supplied" );
            return VAR_0;
        }

        int const VAR_10 = FUNC_5( VAR_5 );
        int const VAR_11 = FUNC_5( VAR_6 );

        if( VAR_10 > 255 || VAR_11 > 255 )
        {
            FUNC_2( VAR_2, "socks: rejecting username and/or password due to "
                            "violation of RFC1929 (longer than 255 bytes)" );
            return VAR_0;
        }

        FUNC_1( VAR_2, "socks: username/password authentication" );

        VAR_7[0] = VAR_4;
        VAR_7[1] = VAR_10;
        FUNC_0( &VAR_7[2], VAR_5, VAR_10 );
        VAR_7[2+VAR_10] = VAR_11;
        FUNC_0( &VAR_7[2+VAR_10+1], VAR_6, VAR_11 );

        VAR_8 = 3 + VAR_10 + VAR_11;

        if( FUNC_4( VAR_2, VAR_3, VAR_7, VAR_8 ) != VAR_8 )
            return VAR_0;

        if( FUNC_3( VAR_2, VAR_3, VAR_7, 2 ) != 2 )
            return VAR_0;

        FUNC_1( VAR_2, "socks: v=%d status=%x", VAR_7[0], VAR_7[1] );
        if( VAR_7[1] != 0x00 )
        {
            FUNC_2( VAR_2, "socks: authentication rejected" );
            return VAR_0;
        }
    }
    else
    {
        if( VAR_9 )
            FUNC_2( VAR_2, "socks: unsupported authentication method %x",
                     VAR_7[0] );
        else
            FUNC_2( VAR_2, "socks: authentication needed" );
        return VAR_0;
    }

    return VAR_1;
}
