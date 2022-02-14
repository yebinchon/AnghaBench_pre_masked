
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_3 ;

const char* FUNC_5(void) {
        const char *VAR_4;

        FUNC_4();


        VAR_4 = FUNC_3("SYSTEMD_CATALOG_DIR");
        if (!VAR_4)
                VAR_4 = VAR_2;
        if (FUNC_0(VAR_4, VAR_1) < 0) {
                FUNC_2(VAR_3, "ERROR: $SYSTEMD_CATALOG_DIR directory [%s] does not exist\n", VAR_4);
                FUNC_1(VAR_0);
        }
        return VAR_4;
}
