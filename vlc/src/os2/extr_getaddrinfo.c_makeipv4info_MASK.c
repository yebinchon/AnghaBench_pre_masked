
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct addrinfo {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 struct addrinfo* FUNC_0 (int ,int,int,struct sockaddr*,int,char const*) ;
 int FUNC_1 (struct sockaddr_in*,int ,int) ;

__attribute__((used)) static struct addrinfo *
FUNC_2 (int VAR_1, int VAR_2, u_long VAR_3, u_short VAR_4, const char *VAR_5)
{
    struct sockaddr_in VAR_6;

    FUNC_1 (&VAR_6, 0, sizeof (VAR_6));
    VAR_6.sin_family = VAR_0;



    VAR_6.sin_port = VAR_4;
    VAR_6.sin_addr.s_addr = VAR_3;

    return FUNC_0 (VAR_0, VAR_1, VAR_2,
                         (struct sockaddr*)&VAR_6, sizeof (VAR_6), VAR_5);
}
