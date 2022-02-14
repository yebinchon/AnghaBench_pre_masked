
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct TYPE_2__ {int obj; } ;
typedef TYPE_1__ vlc_tls_st_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2 (vlc_tls_t *VAR_3, int VAR_4)
{
    vlc_tls_st_t *VAR_5 = (vlc_tls_st_t *)VAR_3;

    switch (VAR_4)
    {
        case 128:
            VAR_2 = VAR_0;
            break;

        case 129:
        case 130:
            FUNC_0(VAR_5->obj, "Connection closed with code %d", VAR_4);
            VAR_2 = VAR_1;
            break;
        default:
            FUNC_1(VAR_5->obj, "Found error %d", VAR_4);
            VAR_2 = VAR_1;
    }
    return -1;
}
