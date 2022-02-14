
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;


 unsigned int FUNC_0 (char const* const*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 unsigned int FUNC_4 (char const* const) ;

__attribute__((used)) static void FUNC_5(uint16_t VAR_1) {
        unsigned VAR_2, VAR_3, VAR_4 = FUNC_1();
        static const char* const VAR_5[] = {
                "o - Other",
                "p - Repeater",
                "b - Bridge",
                "w - WLAN Access Point",
                "r - Router",
                "t - Telephone",
                "d - DOCSIS cable device",
                "a - Station",
                "c - Customer VLAN",
                "s - Service VLAN",
                "m - Two-port MAC Relay (TPMR)",
        };

        if (VAR_1 == 0)
                return;

        FUNC_2("\nCapability Flags:\n");
        for (VAR_2 = 0, VAR_3 = 0; VAR_3 < FUNC_0(VAR_5); VAR_3++)
                if (VAR_1 & (1U << VAR_3) || VAR_0) {
                        bool VAR_6;

                        VAR_6 = VAR_2 + FUNC_4(VAR_5[VAR_3]) + (VAR_2 == 0 ? 0 : 2) > VAR_4;
                        if (VAR_6)
                                VAR_2 = 0;
                        VAR_2 += FUNC_2("%s%s%s", VAR_6 ? "\n" : "", VAR_2 == 0 ? "" : "; ", VAR_5[VAR_3]);
                }
        FUNC_3("");
}
