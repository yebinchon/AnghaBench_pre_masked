
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int status ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int buf; int fd; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

status FUNC_1(connection *VAR_2, size_t *VAR_3) {
    ssize_t VAR_4 = FUNC_0(VAR_2->fd, VAR_2->buf, sizeof(VAR_2->buf));
    *VAR_3 = (size_t) VAR_4;
    return VAR_4 >= 0 ? VAR_1 : VAR_0;
}
