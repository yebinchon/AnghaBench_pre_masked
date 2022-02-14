
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int uint64_t ;
typedef int rtt_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 () ;
 char* FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ,int) ;
 int FUNC_4 (char*,char*,...) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(uint64_t VAR_8, usec_t VAR_9) {
        char VAR_10[VAR_0];

        if (!VAR_7)
                return;

        if (VAR_8 == 0)
                return;

        FUNC_4("\n%s-- Information acquired via", FUNC_0());

        if (VAR_8 != 0)
                FUNC_4(" protocol%s%s%s%s%s",
                       VAR_8 & VAR_2 ? " DNS" :"",
                       VAR_8 & VAR_3 ? " LLMNR/IPv4" : "",
                       VAR_8 & VAR_4 ? " LLMNR/IPv6" : "",
                       VAR_8 & VAR_5 ? " mDNS/IPv4" : "",
                       VAR_8 & VAR_6 ? " mDNS/IPv6" : "");

        FUNC_2(FUNC_3(VAR_10, sizeof(VAR_10), VAR_9, 100));

        FUNC_4(" in %s.%s\n"
               "%s-- Data is authenticated: %s%s\n",
               VAR_10, FUNC_1(),
               FUNC_0(), FUNC_5(VAR_8 & VAR_1), FUNC_1());
}
