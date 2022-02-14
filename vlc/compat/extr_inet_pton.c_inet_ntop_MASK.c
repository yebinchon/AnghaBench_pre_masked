
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,unsigned char const,unsigned char const,unsigned char const,unsigned char const) ;

const char *FUNC_1 (int VAR_3, const void *VAR_4, char *VAR_5, socklen_t VAR_6)
{
    const unsigned char *VAR_7 = VAR_4;

    switch (VAR_3)
    {
        case 128:
            if (FUNC_0 (VAR_5, VAR_6, "%hhu.%hhu.%hhu.%hhu",
                          VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3]) >= VAR_6)
            {
                VAR_2 = VAR_1;
                return ((void*)0);
            }
            return VAR_5;
    }
    VAR_2 = VAR_0;
    return ((void*)0);
}
