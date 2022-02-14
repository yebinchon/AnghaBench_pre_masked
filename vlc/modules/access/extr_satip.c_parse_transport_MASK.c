
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {char* udp_address; int udp_port; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_8(stream_t *VAR_2, char *VAR_3) {
    access_sys_t *VAR_4 = VAR_2->p_sys;
    char *VAR_5;
    char *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_7(VAR_3, ";", &VAR_5);
    if (VAR_6 == ((void*)0) || FUNC_5(VAR_6, "RTP/AVP", 7) != 0)
        return VAR_1;

    VAR_6 = FUNC_7(((void*)0), ";", &VAR_5);
    if (VAR_6 == ((void*)0) || FUNC_5(VAR_6, "multicast", 9) != 0)
        return 0;

    while ((VAR_6 = FUNC_7(((void*)0), ";", &VAR_5)) != ((void*)0)) {
        if (FUNC_5(VAR_6, "destination=", 12) == 0) {
            FUNC_1(VAR_4->udp_address, VAR_6 + 12, FUNC_0(FUNC_4(VAR_6 + 12), VAR_0 - 1));
        } else if (FUNC_5(VAR_6, "port=", 5) == 0) {
            char VAR_8[6];
            char *VAR_9;

            FUNC_2(VAR_8, 0x00, 6);
            FUNC_1(VAR_8, VAR_6 + 5, FUNC_0(FUNC_4(VAR_6 + 5), 5));
            if ((VAR_9 = FUNC_6(VAR_8, "-")) != ((void*)0))
                *VAR_9 = '\0';
            VAR_7 = FUNC_3(VAR_8, &VAR_4->udp_port);
            if (VAR_7)
                return VAR_7;
        }
    }

    return 0;
}
