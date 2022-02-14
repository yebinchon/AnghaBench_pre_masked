
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_4__ {TYPE_1__* p_cred; int obj; int p_context; } ;
typedef TYPE_2__ vlc_tls_st_t ;
struct TYPE_3__ {void const* whitelist; } ;
typedef int SecTrustResultType ;
typedef void const* SecTrustRef ;
typedef void const* SecCertificateRef ;
typedef scalar_t__ OSStatus ;
typedef void const* CFStringRef ;
typedef scalar_t__ CFIndex ;
typedef void const* CFDictionaryRef ;
typedef void const* CFArrayRef ;


 int FUNC_0 (void const*,void const*) ;
 scalar_t__ FUNC_1 (void const*) ;
 void* FUNC_2 (void const*,scalar_t__) ;
 void* FUNC_3 (int ,void const**,void const**,int,int *,int *) ;
 scalar_t__ FUNC_4 (void const*,void const*) ;
 scalar_t__ FUNC_5 (void const*,void const*) ;
 int FUNC_6 (void const*) ;
 int FUNC_7 (void const*) ;
 void* FUNC_8 (int ,char const*,int ) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,void const**) ;
 scalar_t__ FUNC_11 (int ,void const**) ;
 scalar_t__ FUNC_12 (void const*,int*) ;
 void* FUNC_13 (void const*,int ) ;
 scalar_t__ FUNC_14 (void const*) ;
 scalar_t__ FUNC_15 (void const*,int *) ;
 int VAR_0 ;
 int FUNC_16 (char*) ;
 void const* VAR_1 ;
 void const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_17 (int ,char*,int) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_20 (int ,int ,int ,int ,int *,int ,int ,char const*) ;
 int FUNC_21 (char const*) ;

__attribute__((used)) static int FUNC_22 (vlc_tls_t *VAR_8, const char *VAR_9) {

    vlc_tls_st_t *VAR_10 = (vlc_tls_st_t *)VAR_8;
    int VAR_11 = -1;
    SecCertificateRef VAR_12 = ((void*)0);

    SecTrustRef VAR_13 = ((void*)0);
    OSStatus VAR_14 = FUNC_11(VAR_10->p_context, &VAR_13);
    if (VAR_14 != VAR_7 || VAR_13 == ((void*)0)) {
        FUNC_18(VAR_10->obj, "error getting certifictate chain");
        return -1;
    }

    CFStringRef VAR_15 = FUNC_8(VAR_3,
                                                       VAR_9,
                                                       VAR_4);



    VAR_14 = FUNC_15(VAR_13, ((void*)0));
    if (VAR_14 != VAR_7) {
        FUNC_18(VAR_10->obj, "error setting anchor certificates");
        VAR_11 = -1;
        goto out;
    }

    SecTrustResultType VAR_16 = 0;

    VAR_14 = FUNC_12(VAR_13, &VAR_16);
    if (VAR_14 != VAR_7) {
        FUNC_18(VAR_10->obj, "error calling SecTrustEvaluate");
        VAR_11 = -1;
        goto out;
    }

    switch (VAR_16) {
        case 128:
        case 130:
            FUNC_17(VAR_10->obj, "cerfificate verification successful, result is %d", VAR_16);
            VAR_11 = 0;
            goto out;

        case 129:
        case 131:
        default:
            FUNC_19(VAR_10->obj, "cerfificate verification failed, result is %d", VAR_16);
    }




    CFArrayRef VAR_17 = ((void*)0);
    VAR_14 = FUNC_10(VAR_10->p_context, &VAR_17);
    if (VAR_14 != VAR_7 || !VAR_17) {
        VAR_11 = -1;
        goto out;
    }

    if (FUNC_1(VAR_17) == 0) {
        FUNC_6(VAR_17);
        VAR_11 = -1;
        goto out;
    }

    VAR_12 = (SecCertificateRef)FUNC_2(VAR_17, 0);
    FUNC_7(VAR_12);
    FUNC_6(VAR_17);
    CFIndex VAR_18 = FUNC_1(VAR_10->p_cred->whitelist);
    for (CFIndex VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19) {
        CFDictionaryRef VAR_20 = FUNC_2(VAR_10->p_cred->whitelist, VAR_19);
        CFStringRef VAR_21 = (CFStringRef)FUNC_4(VAR_20, VAR_2);
        SecCertificateRef VAR_22 = (SecCertificateRef)FUNC_4(VAR_20, VAR_1);

        if (!VAR_21 || !VAR_22)
            continue;

        if (FUNC_5(VAR_21, VAR_15) && FUNC_5(VAR_22, VAR_12)) {
            FUNC_19(VAR_10->obj, "certificate already accepted, continuing");
            VAR_11 = 0;
            goto out;
        }
    }
    const char *VAR_23 = FUNC_9("You attempted to reach %s. "
             "However the security certificate presented by the server "
             "is unknown and could not be authenticated by any trusted "
             "Certification Authority. "
             "This problem may be caused by a configuration error "
             "or an attempt to breach your security or your privacy.\n\n"
             "If in doubt, abort now.\n");
    int VAR_24 = FUNC_20(VAR_10->obj,
                                          VAR_0, FUNC_16("Abort"),
                                          FUNC_16("Accept certificate temporarily"),
                                          ((void*)0), FUNC_16("Insecure site"),
                                          FUNC_21 (VAR_23), VAR_9);
    if (VAR_24 == 1) {
        FUNC_19(VAR_10->obj, "Proceeding despite of failed certificate validation");


        const void *VAR_25[] = {VAR_2, VAR_1};
        const void *VAR_26[] = {VAR_15, VAR_12};
        CFDictionaryRef VAR_27 = FUNC_3(VAR_3,
                                                   VAR_25, VAR_26, 2,
                                                   &VAR_5,
                                                   &VAR_6);
        if (!VAR_27) {
            FUNC_18(VAR_10->obj, "error creating dict");
            VAR_11 = -1;
            goto out;
        }

        FUNC_0(VAR_10->p_cred->whitelist, VAR_27);
        FUNC_6(VAR_27);

        VAR_11 = 0;
        goto out;

    } else {
        VAR_11 = -1;
        goto out;
    }

out:
    FUNC_6(VAR_13);

    if (VAR_15)
        FUNC_6(VAR_15);
    if (VAR_12)
        FUNC_6(VAR_12);

    return VAR_11;
}
