
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_9__ {int session; int * obj; } ;
typedef TYPE_1__ vlc_tls_gnutls_t ;
typedef int vlc_object_t ;
typedef int time_t ;
typedef int gnutls_x509_crt_t ;
typedef int gnutls_session_t ;
struct TYPE_10__ {int data; } ;
typedef TYPE_2__ gnutls_datum_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 char* FUNC_0 (char*) ;
 int VAR_6 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char**) ;
 TYPE_2__* FUNC_4 (int ,unsigned int*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned int,int ,TYPE_2__*,int ) ;
 int FUNC_7 (int ,char const*,unsigned int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,char const*,char const*,int ,TYPE_2__ const*,int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int *,char const*,char const*,int ,TYPE_2__ const*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,TYPE_2__ const*,int ) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int ,TYPE_2__*) ;
 int FUNC_16 (int *,char*,...) ;
 int FUNC_17 (int *,char*,...) ;
 int FUNC_18 (int*) ;
 int FUNC_19 (int *,int ,int *,int *,int *,int *,int *,char const*,int ) ;
 int FUNC_20 (char const*) ;

__attribute__((used)) static int FUNC_21(vlc_tls_t *VAR_7,
                                  const char *VAR_8, const char *VAR_9,
                                  char **restrict VAR_10)
{
    vlc_tls_gnutls_t *VAR_11 = (vlc_tls_gnutls_t *)VAR_7;
    vlc_object_t *VAR_12 = VAR_11->obj;

    int VAR_13 = FUNC_3(VAR_7, VAR_10);
    if (VAR_13)
        return VAR_13;


    gnutls_session_t VAR_14 = VAR_11->session;
    unsigned VAR_15;

    VAR_13 = FUNC_7 (VAR_14, VAR_8, &VAR_15);
    if (VAR_13)
    {
        FUNC_17(VAR_12, "Certificate verification error: %s",
                FUNC_10(VAR_13));
        goto error;
    }

    if (VAR_15 == 0)
        return 0;


    gnutls_datum_t VAR_16;

    if (FUNC_6(VAR_15,
                         FUNC_5 (VAR_14), &VAR_16, 0) == 0)
    {
        FUNC_17(VAR_12, "Certificate verification failure: %s", VAR_16.data);
        FUNC_8 (VAR_16.data);
    }

    VAR_15 &= ~VAR_0;
    VAR_15 &= ~VAR_1;
    VAR_15 &= ~VAR_2;

    if (VAR_15 != 0 || VAR_8 == ((void*)0))
        goto error;


    const gnutls_datum_t *VAR_17;
    unsigned VAR_18;

    VAR_17 = FUNC_4 (VAR_14, &VAR_18);
    if (VAR_17 == ((void*)0) || VAR_18 == 0)
    {
        FUNC_17(VAR_12, "Peer certificate not available");
        goto error;
    }

    FUNC_16(VAR_12, "%u certificate(s) in the list", VAR_18);
    VAR_13 = FUNC_11 (((void*)0), ((void*)0), VAR_8, VAR_9,
                                       VAR_4, VAR_17, 0);
    const char *VAR_19;
    switch (VAR_13)
    {
        case 0:
            FUNC_16(VAR_12, "certificate key match for %s", VAR_8);
            return 0;
        case 128:
            FUNC_16(VAR_12, "no known certificates for %s", VAR_8);
            VAR_19 = FUNC_0("However, the security certificate presented by the "
                "server is unknown and could not be authenticated by any "
                "trusted Certificate Authority.");
            break;
        case 129:
            FUNC_16(VAR_12, "certificate keys mismatch for %s", VAR_8);
            VAR_19 = FUNC_0("However, the security certificate presented by the "
                "server changed since the previous visit and was not "
                "authenticated by any trusted Certificate Authority.");
            break;
        default:
            FUNC_17(VAR_12, "certificate key match error for %s: %s", VAR_8,
                    FUNC_10(VAR_13));
            goto error;
    }

    if (FUNC_19(VAR_12, VAR_6,
            FUNC_1("Abort"), FUNC_1("View certificate"), ((void*)0),
            FUNC_1("Insecure site"),
            FUNC_1("You attempted to reach %s. %s\n"
            "This problem may be stem from an attempt to breach your security, "
            "compromise your privacy, or a configuration error.\n\n"
            "If in doubt, abort now.\n"), VAR_8, FUNC_20(VAR_19)) != 1)
        goto error;

    gnutls_x509_crt_t VAR_20;

    if (FUNC_14 (&VAR_20))
        goto error;
    if (FUNC_13 (VAR_20, VAR_17, VAR_5)
     || FUNC_15 (VAR_20, VAR_3, &VAR_16))
    {
        FUNC_12 (VAR_20);
        goto error;
    }
    FUNC_12 (VAR_20);

    VAR_13 = FUNC_19(VAR_12, VAR_6,
            FUNC_1("Abort"), FUNC_1("Accept 24 hours"), FUNC_1("Accept permanently"),
            FUNC_1("Insecure site"),
            FUNC_1("This is the certificate presented by %s:\n%s\n\n"
            "If in doubt, abort now.\n"), VAR_8, VAR_16.data);
    FUNC_8 (VAR_16.data);

    time_t VAR_21 = 0;
    switch (VAR_13)
    {
        case 1:
            FUNC_18 (&VAR_21);
            VAR_21 += 24 * 60 * 60;

        case 2:
            VAR_13 = FUNC_9 (((void*)0), ((void*)0), VAR_8, VAR_9,
                                       VAR_4, VAR_17, VAR_21, 0);
            if (VAR_13)
                FUNC_17(VAR_12, "cannot store X.509 certificate: %s",
                         FUNC_10 (VAR_13));
            break;
        default:
            goto error;
    }
    return 0;

error:
    if (VAR_10 != ((void*)0))
        FUNC_2(*VAR_10);
    return -1;
}
