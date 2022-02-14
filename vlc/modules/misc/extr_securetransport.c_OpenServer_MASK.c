
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* sys; int * ops; } ;
typedef TYPE_1__ vlc_tls_server_t ;
struct TYPE_11__ {int * whitelist; int * server_cert_chain; } ;
typedef TYPE_2__ vlc_tls_creds_sys_t ;
struct TYPE_13__ {void* member_2; int member_1; int member_0; } ;
struct TYPE_12__ {int member_0; TYPE_4__* member_1; } ;
typedef int SecTrustResultType ;
typedef int * SecTrustRef ;
typedef int * SecPolicyRef ;
typedef int * SecKeychainSearchRef ;
typedef int * SecKeychainItemRef ;
typedef TYPE_3__ SecKeychainAttributeList ;
typedef TYPE_4__ SecKeychainAttribute ;
typedef int * SecIdentityRef ;
typedef int * SecCertificateRef ;
typedef scalar_t__ OSStatus ;
typedef int CSSM_TP_APPLE_EVIDENCE_INFO ;
typedef int * CFMutableArrayRef ;
typedef int CFIndex ;
typedef int * CFArrayRef ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int **) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_3__*,int **) ;
 int * FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int *,int *,int **) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *,int **,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*,char*,...) ;
 int FUNC_16 (TYPE_1__*,char*,...) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19 (vlc_tls_server_t *VAR_9, const char *VAR_10, const char *VAR_11) {





    FUNC_13(VAR_11);
    OSStatus VAR_12;

    FUNC_15(VAR_9, "open st server");







    SecKeychainAttribute VAR_13 = { VAR_6, FUNC_17(VAR_10), (void *)VAR_10 };
    SecKeychainAttributeList VAR_14 = { 1, &VAR_13 };

    SecKeychainSearchRef VAR_15 = ((void*)0);
    VAR_12 = FUNC_8(((void*)0), VAR_5,
                                                 &VAR_14, &VAR_15);
    if (VAR_12 != VAR_7 || VAR_15 == ((void*)0)) {
        FUNC_16(VAR_9, "Cannot find certificate with alias %s", VAR_10);
        return VAR_0;
    }

    SecKeychainItemRef VAR_16 = ((void*)0);
    VAR_12 = FUNC_7(VAR_15, &VAR_16);
    if (VAR_12 != VAR_7) {
        FUNC_16(VAR_9, "Cannot get certificate with alias %s, error: %d", VAR_10, VAR_12);
        return VAR_0;
    }
    FUNC_5(VAR_15);


    SecCertificateRef VAR_17 = (SecCertificateRef)VAR_16;

    SecIdentityRef VAR_18 = ((void*)0);
    VAR_12 = FUNC_6(((void*)0), VAR_17, &VAR_18);
    if (VAR_12 != VAR_7) {
        FUNC_16(VAR_9, "Cannot get private key for certificate");
        FUNC_5(VAR_17);
        return VAR_0;
    }





    SecPolicyRef VAR_19 = FUNC_9(1, ((void*)0));
    SecTrustRef VAR_20 = ((void*)0);
    int VAR_21 = VAR_2;


    VAR_12 = FUNC_10((CFArrayRef)VAR_17, VAR_19, &VAR_20);
    if (VAR_12 != VAR_7) {
        FUNC_16(VAR_9, "Cannot create trust");
        VAR_21 = VAR_0;
        goto out;
    }

    SecTrustResultType VAR_22;
    VAR_12 = FUNC_11(VAR_20, &VAR_22);
    if (VAR_12 != VAR_7) {
        FUNC_16(VAR_9, "Error evaluating trust");
        VAR_21 = VAR_0;
        goto out;
    }

    CFArrayRef VAR_23 = ((void*)0);
    CSSM_TP_APPLE_EVIDENCE_INFO *VAR_24;
    VAR_12 = FUNC_12(VAR_20, &VAR_22, &VAR_23, &VAR_24);
    if (VAR_12 != VAR_7 || !VAR_23) {
        FUNC_16(VAR_9, "error while getting certificate chain");
        VAR_21 = VAR_0;
        goto out;
    }

    CFIndex VAR_25 = FUNC_3(VAR_23);


    CFMutableArrayRef VAR_26 = FUNC_2(VAR_3, VAR_25, &VAR_4);
    FUNC_1(VAR_26, VAR_18);

    FUNC_15(VAR_9, "Found certificate chain with %ld entries for server certificate", VAR_25);
    if (VAR_25 > 1)
        FUNC_0(VAR_26, VAR_23, FUNC_4(1, VAR_25 - 1));
    FUNC_5(VAR_23);

    vlc_tls_creds_sys_t *VAR_27 = FUNC_14(sizeof(*VAR_27));
    if (FUNC_18(VAR_27 == ((void*)0))) {
        FUNC_5(VAR_26);
        VAR_21 = VAR_1;
        goto out;
    }

    VAR_27->server_cert_chain = VAR_26;
    VAR_27->whitelist = ((void*)0);

    VAR_9->ops = &VAR_8;
    VAR_9->sys = VAR_27;

out:
    if (VAR_19)
        FUNC_5(VAR_19);
    if (VAR_20)
        FUNC_5(VAR_20);

    if (VAR_17)
        FUNC_5(VAR_17);
    if (VAR_18)
        FUNC_5(VAR_18);

    return VAR_21;
}
