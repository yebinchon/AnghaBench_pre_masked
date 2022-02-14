
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int sa_family; } ;





__attribute__((used)) static void FUNC_0(struct sockaddr *VAR_0, uint16_t VAR_1)
{
    switch (VAR_0->sa_family)
    {

        case 128:
            ((struct sockaddr_in6 *)VAR_0)->sin6_port = VAR_1;
        break;

        case 129:
            ((struct sockaddr_in *)VAR_0)->sin_port = VAR_1;
        break;
    }
}
