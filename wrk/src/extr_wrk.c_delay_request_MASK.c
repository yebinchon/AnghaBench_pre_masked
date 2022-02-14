
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delayed; int fd; } ;
typedef TYPE_1__ connection ;
typedef int aeEventLoop ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(aeEventLoop *VAR_3, long long VAR_4, void *VAR_5) {
    connection *VAR_6 = VAR_5;
    VAR_6->delayed = 0;
    FUNC_0(VAR_3, VAR_6->fd, VAR_1, VAR_2, VAR_6);
    return VAR_0;
}
