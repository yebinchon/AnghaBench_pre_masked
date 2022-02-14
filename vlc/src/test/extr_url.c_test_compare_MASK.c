
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char const*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
    if (VAR_3 == ((void*)0))
    {
        if (VAR_2 != ((void*)0))
            FUNC_1(VAR_0, "\"%s\" returned NULL, expected \"%s\"\n",
                    VAR_1, VAR_2);
        else
            return;
    }
    else
    {
        if (VAR_2 == ((void*)0))
            FUNC_1(VAR_0, "\"%s\" returned \"%s\", expected NULL\n",
                    VAR_1, VAR_3);
        else
        if (FUNC_2(VAR_3, VAR_2))
            FUNC_1(VAR_0, "\"%s\" returned \"%s\", expected \"%s\"\n",
                    VAR_1, VAR_3, VAR_2);
        else
            return;
    }
    FUNC_0(2);
}
