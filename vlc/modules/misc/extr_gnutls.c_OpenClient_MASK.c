
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sys; int * ops; } ;
typedef TYPE_1__ vlc_tls_client_t ;
typedef int gnutls_certificate_credentials_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,char*,int,char*) ;
 int FUNC_9 (TYPE_1__*,char*,char*,...) ;
 scalar_t__ FUNC_10 (TYPE_1__*,char*) ;
 char* FUNC_11 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_12(vlc_tls_client_t *VAR_5)
{
    gnutls_certificate_credentials_t VAR_6;

    FUNC_2(FUNC_0(VAR_5));

    int VAR_7 = FUNC_3 (&VAR_6);
    if (VAR_7 != 0)
    {
        FUNC_9 (VAR_5, "cannot allocate credentials: %s",
                 FUNC_7 (VAR_7));
        return VAR_2;
    }

    if (FUNC_10(VAR_5, "gnutls-system-trust"))
    {
        VAR_7 = FUNC_5(VAR_6);
        if (VAR_7 < 0)
            FUNC_9(VAR_5, "cannot load trusted Certificate Authorities "
                    "from %s: %s", "system", FUNC_7(VAR_7));
        else
            FUNC_8(VAR_5, "loaded %d trusted CAs from %s", VAR_7, "system");
    }

    char *VAR_8 = FUNC_11(VAR_5, "gnutls-dir-trust");
    if (VAR_8 != ((void*)0))
    {
        VAR_7 = FUNC_6(VAR_6, VAR_8,
                                                    VAR_1);
        if (VAR_7 < 0)
            FUNC_9(VAR_5, "cannot load trusted Certificate Authorities "
                    "from %s: %s", VAR_8, FUNC_7(VAR_7));
        else
            FUNC_8(VAR_5, "loaded %d trusted CAs from %s", VAR_7, VAR_8);
        FUNC_1(VAR_8);
    }

    FUNC_4 (VAR_6,
                                         VAR_0);

    VAR_5->ops = &VAR_4;
    VAR_5->sys = VAR_6;
    return VAR_3;
}
