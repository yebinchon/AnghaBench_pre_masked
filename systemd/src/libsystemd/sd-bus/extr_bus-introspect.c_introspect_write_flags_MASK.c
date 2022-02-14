
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct introspect {int f; int trusted; } ;


 scalar_t__ FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct introspect *VAR_10, int VAR_11, uint64_t VAR_12) {
        if (VAR_12 & VAR_0)
                FUNC_1("   <annotation name=\"org.freedesktop.DBus.Deprecated\" value=\"true\"/>\n", VAR_10->f);

        if (VAR_11 == VAR_7 && (VAR_12 & VAR_1))
                FUNC_1("   <annotation name=\"org.freedesktop.DBus.Method.NoReply\" value=\"true\"/>\n", VAR_10->f);

        if (FUNC_0(VAR_11, VAR_8, VAR_9)) {
                if (VAR_12 & VAR_5)
                        FUNC_1("   <annotation name=\"org.freedesktop.systemd1.Explicit\" value=\"true\"/>\n", VAR_10->f);

                if (VAR_12 & VAR_2)
                        FUNC_1("   <annotation name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\" value=\"const\"/>\n", VAR_10->f);
                else if (VAR_12 & VAR_4)
                        FUNC_1("   <annotation name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\" value=\"invalidates\"/>\n", VAR_10->f);
                else if (!(VAR_12 & VAR_3))
                        FUNC_1("   <annotation name=\"org.freedesktop.DBus.Property.EmitsChangedSignal\" value=\"false\"/>\n", VAR_10->f);
        }

        if (!VAR_10->trusted &&
            FUNC_0(VAR_11, VAR_7, VAR_9) &&
            !(VAR_12 & VAR_6))
                FUNC_1("   <annotation name=\"org.freedesktop.systemd1.Privileged\" value=\"true\"/>\n", VAR_10->f);
}
