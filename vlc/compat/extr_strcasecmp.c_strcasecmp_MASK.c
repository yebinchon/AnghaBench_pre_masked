
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (unsigned char) ;

int FUNC_3 (const char *VAR_0, const char *VAR_1)
{



    for (size_t VAR_2 = 0;; VAR_2++)
    {
        unsigned char VAR_3 = VAR_0[VAR_2], VAR_4 = VAR_1[VAR_2];
        int VAR_5 = FUNC_2 (VAR_3) - FUNC_2 (VAR_4);
        if (VAR_5 || !VAR_3)
            return VAR_5;
        FUNC_0 (VAR_4);
    }

}
