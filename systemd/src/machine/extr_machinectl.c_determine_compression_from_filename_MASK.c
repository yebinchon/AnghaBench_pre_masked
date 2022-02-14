
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1) {
        if (VAR_0)
                return;

        if (!VAR_1)
                return;

        if (FUNC_0(VAR_1, ".xz"))
                VAR_0 = "xz";
        else if (FUNC_0(VAR_1, ".gz"))
                VAR_0 = "gzip";
        else if (FUNC_0(VAR_1, ".bz2"))
                VAR_0 = "bzip2";
}
