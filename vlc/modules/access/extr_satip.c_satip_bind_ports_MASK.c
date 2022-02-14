
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int udp_port; scalar_t__ udp_sock; scalar_t__ rtcp_sock; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 void* FUNC_2 (TYPE_1__*,char*,int,int *,int ,int ) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static int FUNC_4(stream_t *VAR_2)
{
    access_sys_t *VAR_3 = VAR_2->p_sys;
    uint8_t VAR_4;

    FUNC_3(&VAR_4, 1);
    VAR_3->udp_port = 9000 + (VAR_4 * 2);
    while (VAR_3->udp_sock < 0) {
        VAR_3->udp_sock = FUNC_2(VAR_2, "0.0.0.0", VAR_3->udp_port, ((void*)0),
                0, VAR_0);
        if (VAR_3->udp_sock < 0) {
            if (VAR_3->udp_port == 65534)
                break;

            VAR_3->udp_port += 2;
            continue;
        }

        VAR_3->rtcp_sock = FUNC_2(VAR_2, "0.0.0.0", VAR_3->udp_port + 1, ((void*)0),
                0, VAR_0);
        if (VAR_3->rtcp_sock < 0) {
            FUNC_0(VAR_3->udp_sock);
            VAR_3->udp_port += 2;
            continue;
        }
    }

    if (VAR_3->udp_sock < 0) {
        FUNC_1(VAR_2, "Could not open two adjacent ports for RTP and RTCP data");
        return VAR_1;
    }

    return 0;
}
