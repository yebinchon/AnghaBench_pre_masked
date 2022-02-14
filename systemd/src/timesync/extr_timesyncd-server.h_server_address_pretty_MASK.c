
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sa; } ;
struct TYPE_5__ {int socklen; TYPE_1__ sockaddr; } ;
typedef TYPE_2__ ServerAddress ;


 int FUNC_0 (int *,int ,int,int,char**) ;

__attribute__((used)) static inline int FUNC_1(ServerAddress *VAR_0, char **VAR_1) {
        return FUNC_0(&VAR_0->sockaddr.sa, VAR_0->socklen, 1, 1, VAR_1);
}
