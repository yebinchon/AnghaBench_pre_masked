
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
 int FUNC_2 (int *,char*,char*,int ,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(stream_t *VAR_3, struct sockaddr *VAR_4, struct sockaddr *VAR_5)
{
    if (VAR_4->sa_family == VAR_0)
    {
        struct sockaddr_in *VAR_6 = (void*)VAR_4, *VAR_7 = (void*)VAR_5;
        FUNC_2(VAR_3, "Peer IP:Port change detected: old IP:Port %s:%d, new IP:Port %s:%d",
            FUNC_0(VAR_6->sin_addr), FUNC_3(VAR_6->sin_port), FUNC_0(VAR_7->sin_addr),
            FUNC_3(VAR_7->sin_port));
    }
    else if (VAR_4->sa_family == VAR_1)
    {
        struct sockaddr_in6 *VAR_8 = (void*)VAR_4, *VAR_9 = (void*)VAR_5;
        char VAR_10[VAR_2];
        char VAR_11[VAR_2];
        FUNC_1(VAR_8->sin6_family, &VAR_8->sin6_addr, VAR_10, sizeof(struct in6_addr));
        FUNC_1(VAR_9->sin6_family, &VAR_9->sin6_addr, VAR_11, sizeof(struct in6_addr));
        FUNC_2(VAR_3, "Peer IP:Port change detected: old IP:Port %s:%d, new IP:Port %s:%d",
            VAR_10, FUNC_3(VAR_8->sin6_port), VAR_11, FUNC_3(VAR_9->sin6_port));
    }
}
