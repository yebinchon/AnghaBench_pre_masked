
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int FILE ;
typedef unsigned int DnsServer ;
typedef int DnsScope ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned int*) ;
 char* FUNC_3 (unsigned int*) ;
 int FUNC_4 (unsigned int*,char*,char*) ;
 int FUNC_5 (char*,unsigned int*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(DnsServer *VAR_1, FILE *VAR_2, unsigned *VAR_3) {
        DnsScope *VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        if (!FUNC_3(VAR_1)) {
                FUNC_7("Out of memory, or invalid DNS address. Ignoring server.");
                return;
        }




        VAR_4 = FUNC_2(VAR_1);
        if (VAR_4 && !FUNC_1(VAR_4)) {
                FUNC_6("Scope of DNS server %s has only route-only domains, not using as global name server", FUNC_3(VAR_1));
                return;
        }

        if (*VAR_3 == VAR_0)
                FUNC_5("# Too many DNS servers configured, the following entries may be ignored.\n", VAR_2);
        (*VAR_3)++;

        FUNC_4(VAR_2, "nameserver %s\n", FUNC_3(VAR_1));
}
