
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin6_port; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int*) ;
 int VAR_5 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(unsigned *VAR_6)
{
    int VAR_7 = FUNC_3(VAR_2, VAR_4|VAR_3, VAR_1);
    if (VAR_7 == -1)
        return -1;

    struct sockaddr_in6 VAR_8 = {
        .sin6_family = VAR_0,



        .sin6_addr = VAR_5,
    };
    socklen_t VAR_9 = sizeof (VAR_8);

    if (FUNC_0(VAR_7, (struct sockaddr *)&VAR_8, VAR_9)
     || FUNC_1(VAR_7, (struct sockaddr *)&VAR_8, &VAR_9))
    {
        FUNC_4(VAR_7);
        return -1;
    }

    *VAR_6 = FUNC_2(VAR_8.sin6_port);
    return VAR_7;
}
