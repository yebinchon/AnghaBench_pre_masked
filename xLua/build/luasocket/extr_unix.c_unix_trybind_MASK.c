
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_un {int sun_len; int sun_family; int sun_path; } ;
typedef TYPE_1__* p_unix ;
typedef int local ;
struct TYPE_3__ {int sock; } ;
typedef int SA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_un*,int ,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 char const* FUNC_3 (int) ;
 int FUNC_4 (int ,char const*) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static const char *FUNC_6(p_unix VAR_2, const char *VAR_3) {
    struct sockaddr_un VAR_4;
    size_t VAR_5 = FUNC_5(VAR_3);
    int VAR_6;
    if (VAR_5 >= sizeof(VAR_4.sun_path)) return "path too long";
    FUNC_0(&VAR_4, 0, sizeof(VAR_4));
    FUNC_4(VAR_4.sun_path, VAR_3);
    VAR_4.sun_family = VAR_0;






    VAR_6 = FUNC_1(&VAR_2->sock, (SA *) &VAR_4,
            sizeof(VAR_4.sun_family) + VAR_5);

    if (VAR_6 != VAR_1) FUNC_2(&VAR_2->sock);
    return FUNC_3(VAR_6);
}
