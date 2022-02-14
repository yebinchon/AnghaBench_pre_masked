
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; int sin6_addr; int sin6_family; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct in6_addr {int dummy; } ;
typedef int stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(stream_t *VAR_3, struct sockaddr *VAR_4)
{
    if (VAR_4->sa_family == VAR_0)
    {
        struct sockaddr_in *VAR_5 = (void*)VAR_4;
        FUNC_2(VAR_3, "Peer IP:Port %s:%d", FUNC_0(VAR_5->sin_addr), FUNC_3(VAR_5->sin_port));
    }
    else if (VAR_4->sa_family == VAR_1)
    {
        struct sockaddr_in6 *VAR_6 = (void*)VAR_4;
        char VAR_7[VAR_2];
        FUNC_1(VAR_6->sin6_family, &VAR_6->sin6_addr, VAR_7, sizeof(struct in6_addr));
        FUNC_2(VAR_3, "Peer IP:Port %s:%d", VAR_7, FUNC_3(VAR_6->sin6_port));
    }
}
