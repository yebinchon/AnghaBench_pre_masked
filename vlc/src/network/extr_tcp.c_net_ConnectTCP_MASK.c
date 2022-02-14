
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int,char*,char*,char const*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,char const*,int,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char const*,int,int ,int ) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (int *,char*) ;

int (FUNC_9)(vlc_object_t *VAR_2, const char *VAR_3, int VAR_4)
{
    const char *VAR_5;
    int VAR_6;

    char *VAR_7 = FUNC_8(VAR_2, "socks");
    if (VAR_7 != ((void*)0))
    {
        VAR_5 = VAR_7;

        char *VAR_8 = FUNC_7(VAR_7, ':');
        if (VAR_8 != ((void*)0))
        {
            *(VAR_8++) = '\0';
            VAR_6 = FUNC_1(VAR_8);
        }
        else
            VAR_6 = 1080;

        FUNC_3(VAR_2, "net: connecting to %s port %d (SOCKS) "
                "for %s port %d", VAR_5, VAR_6, VAR_3, VAR_4);
    }
    else
    {
        FUNC_3(VAR_2, "net: connecting to %s port %d", VAR_3, VAR_4);
        VAR_5 = VAR_3;
        VAR_6 = VAR_4;
    }

    int VAR_9 = FUNC_6(VAR_2, VAR_5, VAR_6, VAR_1, VAR_0);

    if (VAR_7 != ((void*)0) && VAR_9 != -1)
    {

        char *VAR_10 = FUNC_8(VAR_2, "socks-user");
        char *VAR_11 = FUNC_8(VAR_2, "socks-pwd");

        if (FUNC_0(VAR_2, VAR_9, 5, VAR_10, VAR_11, VAR_3, VAR_4))
        {
            FUNC_4(VAR_2, "SOCKS handshake failed");
            FUNC_5(VAR_9);
            VAR_9 = -1;
        }

        FUNC_2(VAR_11);
        FUNC_2(VAR_10);
    }

    return VAR_9;
}
