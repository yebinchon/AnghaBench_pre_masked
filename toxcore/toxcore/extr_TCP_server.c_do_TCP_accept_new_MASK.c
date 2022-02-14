
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int sock_t ;
typedef int addr ;
struct TYPE_4__ {size_t num_listening_socks; int * socks_listening; } ;
typedef TYPE_1__ TCP_Server ;


 int FUNC_0 (int ,struct sockaddr*,unsigned int*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(TCP_Server *VAR_0)
{
    uint32_t VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_listening_socks; ++VAR_1) {
        struct sockaddr_storage VAR_2;
        unsigned int VAR_3 = sizeof(VAR_2);
        sock_t VAR_4;

        do {
            VAR_4 = FUNC_0(VAR_0->socks_listening[VAR_1], (struct sockaddr *)&VAR_2, &VAR_3);
        } while (FUNC_1(VAR_0, VAR_4) != -1);
    }
}
