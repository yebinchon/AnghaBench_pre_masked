
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int status ;
typedef int ssize_t ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ connection ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,size_t) ;

status FUNC_1(connection *VAR_4, char *VAR_5, size_t VAR_6, size_t *VAR_7) {
    ssize_t VAR_8;
    if ((VAR_8 = FUNC_0(VAR_4->fd, VAR_5, VAR_6)) == -1) {
        switch (VAR_3) {
            case 128: return VAR_2;
            default: return VAR_0;
        }
    }
    *VAR_7 = (size_t) VAR_8;
    return VAR_1;
}
