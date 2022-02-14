
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_resolve_query ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,char*) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(sd_resolve_query *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3, void *VAR_4) {
        FUNC_0(VAR_0);

        if (VAR_1 != 0) {
                FUNC_2("getnameinfo error: %s %i", FUNC_1(VAR_1), VAR_1);
                return 0;
        }

        FUNC_3("Host: %s — Serv: %s\n", FUNC_4(VAR_2), FUNC_4(VAR_3));
        return 0;
}
