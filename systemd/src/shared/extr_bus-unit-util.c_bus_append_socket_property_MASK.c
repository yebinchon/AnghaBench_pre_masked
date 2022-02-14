
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,char*,...) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (int *,char const*,char const*) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int *,char const*,char const*) ;
 int FUNC_8 (int *,char const*,char const*,int) ;
 int FUNC_9 (int *,char const*,char const*) ;
 int FUNC_10 (int *,char const*,char const*) ;
 int FUNC_11 (int *,char const*,char const*) ;
 int FUNC_12 (int *,char const*,char const*) ;
 int FUNC_13 (int *,char const*,char const*,int ) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (char const*) ;
 int FUNC_16 (int *,char*,char*,char*,int,...) ;
 scalar_t__ FUNC_17 (char const*,char*) ;

__attribute__((used)) static int FUNC_18(sd_bus_message *VAR_1, const char *VAR_2, const char *VAR_3) {
        int VAR_4;

        if (FUNC_1(VAR_2,
                       "Accept", "Writable", "KeepAlive", "NoDelay", "FreeBind", "Transparent", "Broadcast",
                       "PassCredentials", "PassSecurity", "ReusePort", "RemoveOnStop", "SELinuxContextFromNet"))
                return FUNC_4(VAR_1, VAR_2, VAR_3);

        if (FUNC_1(VAR_2, "Priority", "IPTTL", "Mark"))
                return FUNC_9(VAR_1, VAR_2, VAR_3);

        if (FUNC_17(VAR_2, "IPTOS"))
                return FUNC_3(VAR_1, VAR_2, VAR_3);

        if (FUNC_1(VAR_2, "Backlog", "MaxConnections", "MaxConnectionsPerSource", "KeepAliveProbes", "TriggerLimitBurst"))
                return FUNC_11(VAR_1, VAR_2, VAR_3);

        if (FUNC_1(VAR_2, "SocketMode", "DirectoryMode"))
                return FUNC_6(VAR_1, VAR_2, VAR_3);

        if (FUNC_1(VAR_2, "MessageQueueMaxMessages", "MessageQueueMessageSize"))
                return FUNC_10(VAR_1, VAR_2, VAR_3);

        if (FUNC_1(VAR_2, "TimeoutSec", "KeepAliveTimeSec", "KeepAliveIntervalSec", "DeferAcceptSec", "TriggerLimitIntervalSec"))
                return FUNC_7(VAR_1, VAR_2, VAR_3);

        if (FUNC_1(VAR_2, "ReceiveBuffer", "SendBuffer", "PipeSize"))
                return FUNC_8(VAR_1, VAR_2, VAR_3, 1024);

        if (FUNC_1(VAR_2, "ExecStartPre", "ExecStartPost", "ExecReload", "ExecStopPost"))
                return FUNC_2(VAR_1, VAR_2, VAR_3);

        if (FUNC_1(VAR_2,
                       "SmackLabel", "SmackLabelIPIn", "SmackLabelIPOut", "TCPCongestion",
                       "BindToDevice", "BindIPv6Only", "FileDescriptorName",
                       "SocketUser", "SocketGroup"))
                return FUNC_12(VAR_1, VAR_2, VAR_3);

        if (FUNC_17(VAR_2, "Symlinks"))
                return FUNC_13(VAR_1, VAR_2, VAR_3, VAR_0);

        if (FUNC_17(VAR_2, "SocketProtocol"))
                return FUNC_5(VAR_1, VAR_2, VAR_3);

        if (FUNC_1(VAR_2,
                       "ListenStream", "ListenDatagram", "ListenSequentialPacket", "ListenNetlink",
                       "ListenSpecial", "ListenMessageQueue", "ListenFIFO", "ListenUSBFunction")) {
                if (FUNC_15(VAR_3))
                        VAR_4 = FUNC_16(VAR_1, "(sv)", "Listen", "a(ss)", 0);
                else
                        VAR_4 = FUNC_16(VAR_1, "(sv)", "Listen", "a(ss)", 1, VAR_2 + FUNC_0("Listen"), VAR_3);
                if (VAR_4 < 0)
                        return FUNC_14(VAR_4);

                return 1;
        }

        return 0;
}
