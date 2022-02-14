
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SocketType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*,char*,char*,char*) ;
 int VAR_5 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

SocketType FUNC_3(const char *VAR_6) {
        FUNC_1(VAR_6);

        if (FUNC_0(VAR_6, "Stream", "Datagram", "SequentialPacket", "Netlink"))
                return VAR_2;
        else if (FUNC_2(VAR_6, "Special"))
                return VAR_3;
        else if (FUNC_2(VAR_6, "MessageQueue"))
                return VAR_1;
        else if (FUNC_2(VAR_6, "FIFO"))
                return VAR_0;
        else if (FUNC_2(VAR_6, "USBFunction"))
                return VAR_4;
        else
                return VAR_5;
}
