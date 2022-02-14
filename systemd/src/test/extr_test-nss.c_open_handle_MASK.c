
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (char const*,int) ;
 int FUNC_3 (char*,char const*,int ) ;
 char* FUNC_4 (char const*,char const*,char const*,...) ;

__attribute__((used)) static void* FUNC_5(const char* VAR_1, const char* VAR_2, int VAR_3) {
        const char *VAR_4 = ((void*)0);
        void *VAR_5;

        if (VAR_1)
                VAR_4 = FUNC_4(VAR_1, "/libnss_", VAR_2, ".so.2");
        if (!VAR_4 || FUNC_0(VAR_4, VAR_0) < 0)
                VAR_4 = FUNC_4("libnss_", VAR_2, ".so.2");

        VAR_5 = FUNC_2(VAR_4, VAR_3);
        if (!VAR_5)
                FUNC_3("Failed to load module %s: %s", VAR_2, FUNC_1());
        return VAR_5;
}
