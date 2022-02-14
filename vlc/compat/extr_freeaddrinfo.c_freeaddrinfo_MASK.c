
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_addr; struct addrinfo* ai_canonname; struct addrinfo* ai_next; } ;


 int FUNC_0 (struct addrinfo*) ;

void FUNC_1 (struct addrinfo *VAR_0)
{
    while (VAR_0 != ((void*)0))
    {
        struct addrinfo *VAR_1 = VAR_0->ai_next;

        FUNC_0 (VAR_0->ai_canonname);
        FUNC_0 (VAR_0->ai_addr);
        FUNC_0 (VAR_0);
        VAR_0 = VAR_1;
    }
}
