
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* psz_protocol; char const* psz_username; char const* psz_password; char const* psz_host; unsigned int i_port; char const* psz_path; char const* psz_option; } ;
typedef TYPE_1__ vlc_url_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int VAR_3 ;
 int FUNC_2 (char const*,char const*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_4, bool VAR_5,
                                    const char *VAR_6,
                                    const char *VAR_7, const char *VAR_8,
                                    const char *VAR_9, unsigned VAR_10,
                                    const char *VAR_11, const char *VAR_12)
{
    vlc_url_t VAR_13;
    int VAR_14 = VAR_5 ? FUNC_5(&VAR_13, VAR_4) : FUNC_4(&VAR_13, VAR_4);



    if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0) && VAR_8 == ((void*)0) && VAR_9 == ((void*)0)
     && VAR_10 == 0 && VAR_11 == ((void*)0) && VAR_12 == ((void*)0))
    {
        FUNC_3(&VAR_13);

        if (VAR_14 != -1)
        {
            FUNC_1(VAR_3, "\"%s\" accepted, expected rejection\n", VAR_4);
            FUNC_0(2);
        }
        return;
    }

    FUNC_2(VAR_4, VAR_6, VAR_13.psz_protocol);
    FUNC_2(VAR_4, VAR_7, VAR_13.psz_username);
    FUNC_2(VAR_4, VAR_8, VAR_13.psz_password);

    if (VAR_14 != 0 && VAR_1 == VAR_0)
    {
        FUNC_2(VAR_4, ((void*)0), VAR_13.psz_host);
        VAR_2 = 77;
    }
    else
        FUNC_2(VAR_4, VAR_13.psz_host, VAR_9);

    if (VAR_13.i_port != VAR_10)
    {
        FUNC_1(VAR_3, "\"%s\" returned %u, expected %u\n", VAR_4, VAR_13.i_port,
                VAR_10);
        FUNC_0(2);
    }

    FUNC_2(VAR_4, VAR_11, VAR_13.psz_path);
    FUNC_2(VAR_4, VAR_12, VAR_13.psz_option);
    FUNC_3(&VAR_13);
}
