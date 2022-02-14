
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_4__ {int session; int * obj; } ;
typedef TYPE_1__ vlc_tls_gnutls_t ;
typedef int vlc_object_t ;
typedef int gnutls_session_t ;
struct TYPE_5__ {int size; scalar_t__ data; } ;
typedef TYPE_2__ gnutls_datum_t ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*,int ) ;
 char* FUNC_10 (char*,int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(vlc_tls_t *VAR_4, char **restrict VAR_5)
{
    vlc_tls_gnutls_t *VAR_6 = (vlc_tls_gnutls_t *)VAR_4;
    vlc_object_t *VAR_7 = VAR_6->obj;
    gnutls_session_t VAR_8 = VAR_6->session;
    int VAR_9 = FUNC_2(VAR_8);

    if (FUNC_1(VAR_9))
    {
        FUNC_8(VAR_7, "TLS handshake error: %s", FUNC_5(VAR_9));
        return -1;
    }

    switch (VAR_9)
    {
        case 128:
            break;
        case 130:
        case 129:

            return 1 + FUNC_3(VAR_8);
        default:
            FUNC_9(VAR_7, "TLS handshake error: %s", FUNC_5(VAR_9));
            return 1;
    }

    FUNC_7(VAR_7, "TLS handshake complete");

    unsigned VAR_10 = FUNC_4(VAR_8);

    if (VAR_10 & VAR_3)
        FUNC_7(VAR_7, " - safe renegotiation (RFC5746) enabled");
    if (VAR_10 & VAR_1)
        FUNC_7(VAR_7, " - extended master secret (RFC7627) enabled");
    if (VAR_10 & VAR_0)
        FUNC_7(VAR_7, " - encrypt then MAC (RFC7366) enabled");
    if (VAR_10 & VAR_2)
        FUNC_7(VAR_7, " - false start (RFC7918) enabled");

    if (VAR_5 != ((void*)0))
    {
        gnutls_datum_t VAR_11;

        VAR_9 = FUNC_0 (VAR_8, &VAR_11);
        if (VAR_9 == 0)
        {
            if (FUNC_6 (VAR_11.data, 0, VAR_11.size) != ((void*)0))
                return -1;

            *VAR_5 = FUNC_10 ((char *)VAR_11.data, VAR_11.size);
            if (FUNC_11(*VAR_5 == ((void*)0)))
                return -1;
        }
        else
            *VAR_5 = ((void*)0);
    }
    return 0;
}
