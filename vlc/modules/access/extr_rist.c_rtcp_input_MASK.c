
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct sockaddr_storage {int dummy; } ;
typedef int sockaddr ;
struct rist_flow {char peer_sockaddr; int reset; int peer_socklen; } ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int b_sendnacks; char* sender_name; int b_ismulticast; int lock; } ;
typedef TYPE_2__ stream_sys_t ;
typedef int socklen_t ;
typedef int new_sender_name ;
typedef size_t int8_t ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,int*,size_t) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,char*,int,...) ;
 int FUNC_4 (TYPE_1__*,char*,char*,...) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (TYPE_1__*,int*,int*) ;
 size_t FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 size_t FUNC_9 (int*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*,int*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(stream_t *VAR_2, struct rist_flow *VAR_3, uint8_t *VAR_4, size_t VAR_5,
    struct sockaddr *VAR_6, socklen_t VAR_7)
{
    stream_sys_t *VAR_8 = VAR_2->p_sys;
    uint8_t VAR_9;
    uint16_t VAR_10 = 0;
    uint16_t VAR_11;
    char VAR_12[VAR_0];
    uint8_t *VAR_13;

    while (VAR_10 < VAR_5) {
        VAR_13 = VAR_4 + VAR_10;

        uint16_t VAR_14 = VAR_5 - VAR_10 + 1;
        if ( VAR_14 < 4 )
        {

            FUNC_3(VAR_2, "Rist rtcp packet must have at least 4 bytes, we have %d",
                VAR_14);
            return;
        }
        else if (!FUNC_10(VAR_13))
        {

            FUNC_3(VAR_2, "Malformed rtcp packet starting with %02x, ignoring.", VAR_13[0]);
            return;
        }

        VAR_9 = FUNC_8(VAR_13);
        VAR_11 = FUNC_7(VAR_13);
        uint16_t VAR_15 = (uint16_t)(4 * (1 + VAR_11));
        if (VAR_15 > VAR_14)
        {

            FUNC_3(VAR_2, "Malformed rtcp packet, wrong len %d, expecting %u bytes in the " "packet, got a buffer of %u bytes.", FUNC_7(VAR_13), VAR_15, VAR_14);

            return;
        }

        switch(VAR_9) {
            case 130:
            case 131:
                break;

            case 132:
                break;

            case 129:
                {
                    if (VAR_8->b_sendnacks == 0)
                        VAR_8->b_sendnacks = 1;
                    if (VAR_8->b_ismulticast)
                        return;

                    int8_t VAR_16 = FUNC_9(VAR_13);
                    if (VAR_16 > VAR_14 || VAR_16 <= 0 ||
                        (size_t)VAR_16 > sizeof(VAR_12))
                    {

                        FUNC_3(VAR_2, "Malformed SDES packet, wrong cname len %d, got a " "buffer of %u bytes.", VAR_16, VAR_14);

                        return;
                    }
                    bool VAR_17 = 0;
                    if (FUNC_11((struct sockaddr *)&VAR_3->peer_sockaddr, VAR_6) != 0)
                    {
                        VAR_17 = 1;
                        if(VAR_3->peer_socklen > 0)
                            FUNC_6(VAR_2,
                                (struct sockaddr *)&VAR_3->peer_sockaddr, VAR_6);
                        else
                            FUNC_5(VAR_2, VAR_6);
                        FUNC_13( &VAR_8->lock );
                        FUNC_1(&VAR_3->peer_sockaddr, VAR_6, sizeof(struct sockaddr_storage));
                        VAR_3->peer_socklen = VAR_7;
                        FUNC_14( &VAR_8->lock );
                    }


                    bool VAR_18 = 0;
                    FUNC_2(VAR_12, 0, VAR_0);
                    FUNC_1(VAR_12, VAR_13 + VAR_1, VAR_16);
                    if (FUNC_0(VAR_12, VAR_8->sender_name, VAR_16) != 0)
                    {
                        VAR_18 = 1;
                        if (FUNC_12(VAR_8->sender_name, "") == 0)
                            FUNC_4(VAR_2, "Peer Name: %s", VAR_12);
                        else
                            FUNC_4(VAR_2, "Peer Name change detected: old Name: %s, new " "Name: %s", VAR_8->sender_name, VAR_12);

                        FUNC_2(VAR_8->sender_name, 0, VAR_0);
                        FUNC_1(VAR_8->sender_name, VAR_13 + VAR_1, VAR_16);
                    }


                    if (VAR_18 || VAR_17)
                    {

                        VAR_3->reset = 1;
                    }
                }
                break;

            case 128:
                if (VAR_8->b_sendnacks == 0)
                    VAR_8->b_sendnacks = 1;
                if (VAR_8->b_ismulticast)
                        return;
                break;

            default:
                FUNC_3(VAR_2, "   Unrecognized RTCP packet with PTYPE=%02x!!", VAR_9);
        }
        VAR_10 += (4 * (1 + VAR_11));
    }
}
