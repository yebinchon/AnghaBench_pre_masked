
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ vlc_tls_gnutls_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(vlc_tls_gnutls_t *VAR_7, int VAR_8)
{
    switch (VAR_8)
    {
        case 129:



            VAR_6 = VAR_0;
            break;

        case 128:



            VAR_6 = VAR_2;
            break;

        default:
            FUNC_3(VAR_7->obj, "%s", FUNC_2 (VAR_8));

            if (!FUNC_1 (VAR_8))
                FUNC_3(VAR_7->obj, "Error above should be handled");




            VAR_6 = VAR_1;
    }
    return -1;
}
