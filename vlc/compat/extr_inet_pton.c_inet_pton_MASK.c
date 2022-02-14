
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;

int FUNC_1 (int VAR_2, const char *VAR_3, void *VAR_4)
{
    unsigned char *VAR_5 = VAR_4;

    switch (VAR_2)
    {
        case 128:
            return FUNC_0 (VAR_3, "%hhu.%hhu.%hhu.%hhu",
                           VAR_5 + 0, VAR_5 + 1, VAR_5 + 2, VAR_5 + 3) == 4;
    }
    VAR_1 = VAR_0;
    return -1;
}
