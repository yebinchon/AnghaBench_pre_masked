
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char**,char*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*,char*) ;

__attribute__((used)) static inline void FUNC_4 (const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
    char *VAR_4;
    int VAR_5 = FUNC_1 (&VAR_4, "file://%s/%s", VAR_2, VAR_3);
    if (VAR_5 < 0)
        FUNC_0();

    FUNC_3 (VAR_0, VAR_1, VAR_4);
    FUNC_2(VAR_4);
}
