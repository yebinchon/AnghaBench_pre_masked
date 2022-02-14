
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; int sin6_family; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct in6_addr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,struct sockaddr*,int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static inline void FUNC_6(int VAR_4, char *VAR_5)
{

    char VAR_6[VAR_3];
    struct sockaddr_storage VAR_7;
    int VAR_8 = 0;
    socklen_t VAR_9 = 0;
    int VAR_10 = FUNC_0(VAR_6, VAR_3);
    if (VAR_10 == -1)
        FUNC_5(VAR_6, VAR_3, "UnknownHost");
    int VAR_11 = FUNC_1(VAR_4, (struct sockaddr *)&VAR_7, &VAR_9);
    if (VAR_11 == 0)
    {
        struct sockaddr *VAR_12 = (struct sockaddr *)&VAR_7;
        if (VAR_12->sa_family == VAR_0) {
            struct sockaddr_in *VAR_13 = (void*)VAR_12;
            VAR_8 = FUNC_5(VAR_5, VAR_3, "%s@%s:%u", VAR_6,
                            FUNC_2(VAR_13->sin_addr), FUNC_4(VAR_13->sin_port));
            if (VAR_8 >= VAR_3)
                VAR_5[VAR_3-1] = 0;
        } else if (VAR_12->sa_family == VAR_1) {
            struct sockaddr_in6 *VAR_14 = (void*)VAR_12;
            char VAR_15[VAR_2];
            FUNC_3(VAR_14->sin6_family, &VAR_14->sin6_addr, VAR_15, sizeof(struct in6_addr));
            VAR_8 = FUNC_5(VAR_5, VAR_3, "%s@%s:%u", VAR_6,
                            VAR_15, FUNC_4(VAR_14->sin6_port));
            if (VAR_8 >= VAR_3)
                VAR_5[VAR_3-1] = 0;
        }
    }
    if (VAR_8 == 0)
    {
        VAR_8 = FUNC_5(VAR_5, VAR_3, "%s", VAR_6);
        if (VAR_8 >= VAR_3)
            VAR_5[VAR_3-1] = 0;
    }
}
