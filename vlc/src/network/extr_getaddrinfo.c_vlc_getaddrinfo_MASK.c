
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;
typedef int portbuf ;
typedef int hostbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,struct addrinfo const*,struct addrinfo**) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,int,char*,unsigned int) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5 (const char *VAR_2, unsigned VAR_3,
                     const struct addrinfo *VAR_4, struct addrinfo **VAR_5)
{
    char VAR_6[VAR_1], VAR_7[6], *VAR_8;





    if (VAR_3 != 0)
    {
        if (VAR_3 > 65535)
            return VAR_0;

        FUNC_3 (VAR_7, sizeof (VAR_7), "%u", VAR_3);
        VAR_8 = VAR_7;
    }
    else
        VAR_8 = ((void*)0);






    if (VAR_2 != ((void*)0))
    {
        if (VAR_2[0] == '[')
        {
            size_t VAR_9 = FUNC_4 (VAR_2 + 1);
            if ((VAR_9 <= sizeof (VAR_6)) && (VAR_2[VAR_9] == ']'))
            {
                FUNC_0 (VAR_9 > 0);
                FUNC_2 (VAR_6, VAR_2 + 1, VAR_9 - 1);
                VAR_6[VAR_9 - 1] = '\0';
                VAR_2 = VAR_6;
            }
        }
        if (VAR_2[0] == '\0')
            VAR_2 = ((void*)0);
    }

    return FUNC_1 (VAR_2, VAR_8, VAR_4, VAR_5);
}
