
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

size_t FUNC_1(connection *VAR_1) {
    int VAR_2, VAR_3;
    VAR_3 = FUNC_0(VAR_1->fd, VAR_0, &VAR_2);
    return VAR_3 == -1 ? 0 : VAR_2;
}
