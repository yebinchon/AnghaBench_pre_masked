
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_storage {int member_0; } ;
struct sockaddr_in6 {int sin6_family; void* sin6_port; } ;
struct sockaddr_in {int sin_family; void* sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int sock_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr*,size_t) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sock_t VAR_2, int VAR_3, uint16_t VAR_4)
{
    struct sockaddr_storage VAR_5 = {0};
    size_t VAR_6;

    if (VAR_3 == VAR_0) {
        struct sockaddr_in *VAR_7 = (struct sockaddr_in *)&VAR_5;

        VAR_6 = sizeof(struct sockaddr_in);
        VAR_7->sin_family = VAR_0;
        VAR_7->sin_port = FUNC_1(VAR_4);
    } else if (VAR_3 == VAR_1) {
        struct sockaddr_in6 *VAR_8 = (struct sockaddr_in6 *)&VAR_5;

        VAR_6 = sizeof(struct sockaddr_in6);
        VAR_8->sin6_family = VAR_1;
        VAR_8->sin6_port = FUNC_1(VAR_4);
    } else {
        return 0;
    }

    return (FUNC_0(VAR_2, (struct sockaddr *)&VAR_5, VAR_6) == 0);
}
