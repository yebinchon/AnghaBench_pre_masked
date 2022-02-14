
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_2__ {int b_server_mode; int b_handshaked; int obj; scalar_t__ b_blocking_send; int p_context; } ;
typedef TYPE_1__ vlc_tls_st_t ;
typedef scalar_t__ OSStatus ;
typedef int * CFArrayRef ;


 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;




 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,...) ;

 int FUNC_6 (int *,char const*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8 (vlc_tls_t *VAR_1,
                         const char *VAR_2, const char *VAR_3,
                         char **restrict VAR_4) {

    vlc_tls_st_t *VAR_5 = (vlc_tls_st_t *)VAR_1;

    FUNC_3(VAR_3);

    OSStatus VAR_6 = FUNC_2(VAR_5->p_context);
    if (VAR_4 != ((void*)0)) {
        *VAR_4 = ((void*)0);
    }



    if (VAR_6 == VAR_0) {
        FUNC_4(VAR_5->obj, "handshake is blocked, try again later");
        return 1 + (VAR_5->b_blocking_send ? 1 : 0);
    }

    switch (VAR_6) {
        case 128:
            if (VAR_5->b_server_mode == 0 && FUNC_6(VAR_1, VAR_2) != 0) {
                return -1;
            }
            FUNC_4(VAR_5->obj, "handshake completed successfully");
            VAR_5->b_handshaked = 1;
            return 0;

        case 129:
            FUNC_4(VAR_5->obj, "SSLHandshake returned errSSLServerAuthCompleted, continuing handshake");
            return FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4);

        case 132:
            FUNC_5(VAR_5->obj, "connection was refused");
            return -1;
        case 130:
            FUNC_5(VAR_5->obj, "cipher suite negotiation failed");
            return -1;
        case 131:
            FUNC_5(VAR_5->obj, "fatal error occurred during handshake");
            return -1;

        default:
            FUNC_5(VAR_5->obj, "handshake returned error %d", (int)VAR_6);
            return -1;
    }
}
