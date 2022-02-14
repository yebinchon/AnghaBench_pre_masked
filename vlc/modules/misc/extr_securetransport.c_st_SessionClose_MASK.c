
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_3__ {int obj; scalar_t__ p_context; } ;
typedef TYPE_1__ vlc_tls_st_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_5 (vlc_tls_t *VAR_1) {

    vlc_tls_st_t *VAR_2 = (vlc_tls_st_t *)VAR_1;
    FUNC_3(VAR_2->obj, "close TLS session");

    if (VAR_2->p_context) {



        if (FUNC_1(VAR_2->p_context) != VAR_0) {
            FUNC_4(VAR_2->obj, "error deleting context");
        }

    }
    FUNC_2(VAR_2);
}
