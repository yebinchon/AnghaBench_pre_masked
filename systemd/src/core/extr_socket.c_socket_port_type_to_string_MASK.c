
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int type; TYPE_3__ address; } ;
typedef TYPE_1__ SocketPort ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;

const char* FUNC_2(SocketPort *VAR_2) {

        FUNC_0(VAR_2);

        switch (VAR_2->type) {

        case 134:

                switch (VAR_2->address.type) {

                case 128:
                        return "Stream";

                case 131:
                        return "Datagram";

                case 129:
                        return "SequentialPacket";

                case 130:
                        if (FUNC_1(&VAR_2->address) == VAR_0)
                                return "Netlink";

                        VAR_1;
                default:
                        return ((void*)0);
                }

        case 133:
                return "Special";

        case 135:
                return "MessageQueue";

        case 136:
                return "FIFO";

        case 132:
                return "USBFunction";

        default:
                return ((void*)0);
        }
}
