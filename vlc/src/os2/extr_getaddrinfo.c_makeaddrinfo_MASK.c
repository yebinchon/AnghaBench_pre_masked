
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {int ai_family; int ai_socktype; int ai_protocol; size_t ai_addrlen; int * ai_canonname; int * ai_addr; int * ai_next; scalar_t__ ai_flags; } ;


 int FUNC_0 (struct addrinfo*) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,struct sockaddr const*,size_t) ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static struct addrinfo *
FUNC_4 (int VAR_0, int VAR_1, int VAR_2,
              const struct sockaddr *VAR_3, size_t VAR_4,
              const char *VAR_5)
{
    struct addrinfo *VAR_6;

    VAR_6 = (struct addrinfo *)FUNC_1 (sizeof (struct addrinfo));
    if (VAR_6 != ((void*)0))
    {
        VAR_6->ai_flags = 0;
        VAR_6->ai_family = VAR_0;
        VAR_6->ai_socktype = VAR_1;
        VAR_6->ai_protocol = VAR_2;
        VAR_6->ai_addrlen = VAR_4;
        VAR_6->ai_addr = FUNC_1 (VAR_4);
        VAR_6->ai_canonname = ((void*)0);
        VAR_6->ai_next = ((void*)0);

        if (VAR_6->ai_addr != ((void*)0))
        {
            FUNC_2 (VAR_6->ai_addr, VAR_3, VAR_4);

            if (VAR_5 != ((void*)0))
            {
                VAR_6->ai_canonname = FUNC_3 (VAR_5);
                if (VAR_6->ai_canonname != ((void*)0))
                    return VAR_6;
            }
            else
                return VAR_6;
        }
    }

    FUNC_0 (VAR_6);
    return ((void*)0);
}
