
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_8__ {int p_context; } ;
typedef TYPE_1__ vlc_tls_st_t ;
struct TYPE_9__ {int sys; } ;
typedef TYPE_2__ vlc_tls_client_t ;
typedef scalar_t__ OSStatus ;
typedef int * CFMutableArrayRef ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,char const*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (char const* const*) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_2__*,char*,char const*) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ,int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static vlc_tls_t *FUNC_14(vlc_tls_client_t *VAR_2, vlc_tls_t *VAR_3,
                                 const char *VAR_4, const char *const *VAR_5)
{
    FUNC_7(VAR_2, "open TLS session for %s", VAR_4);

    vlc_tls_t *VAR_6 = FUNC_11(FUNC_5(VAR_2), VAR_2->sys, VAR_3,
                                          0);
    if (VAR_6 == ((void*)0))
        return ((void*)0);

    vlc_tls_st_t *VAR_7 = (vlc_tls_st_t *)VAR_6;

    OSStatus VAR_8 = FUNC_3(VAR_7->p_context, VAR_4, FUNC_13(VAR_4));
    if (VAR_8 != VAR_1) {
        FUNC_8(VAR_2, "cannot set peer domain name");
        goto error;
    }
    if (VAR_5 != ((void*)0)) {

        FUNC_9(VAR_2, "Compiled in SDK without ALPN support. Proxy behavior potentially undefined.");

    }







    VAR_8 = FUNC_4(VAR_7->p_context, VAR_0, 1);
    if (VAR_8 != VAR_1) {
        FUNC_8 (VAR_2, "cannot set session option");
        goto error;
    }


    VAR_8 = FUNC_2(VAR_7->p_context, 0);
    if (VAR_8 != VAR_1) {
        FUNC_8(VAR_2, "error setting enable cert verify");
        goto error;
    }


    return VAR_6;

error:
    FUNC_12(VAR_6, 1);
    FUNC_10(VAR_6);
    return ((void*)0);
}
