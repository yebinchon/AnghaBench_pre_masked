
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {void* ss_len; void* ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
typedef void* socklen_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (void*,char*,int *) ;
 int FUNC_1 (char const*,char*,unsigned int*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2 (const char *VAR_2, struct sockaddr_storage *VAR_3,
                               socklen_t *VAR_4, unsigned *VAR_5)
{
    char VAR_6[60];
    unsigned VAR_7, VAR_8, VAR_9;

    int VAR_10 = FUNC_1 (VAR_2, "IN IP%u %59[^/]/%u/%u", &VAR_7, VAR_6, &VAR_8, &VAR_9);
    if (VAR_10 < 2)
        return -1;

    switch (VAR_7)
    {
        case 4:
            VAR_3->ss_family = VAR_0;



           *VAR_4 = sizeof (struct sockaddr_in);

            if (FUNC_0 (VAR_0, VAR_6,
                           &((struct sockaddr_in *)VAR_3)->sin_addr) <= 0)
                return -1;

            *VAR_5 = (VAR_10 >= 4) ? VAR_9 : 1;
            break;

        default:
            return -1;
    }
    return 0;
}
