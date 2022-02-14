
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int status ;
struct TYPE_3__ {int ssl; int fd; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

status FUNC_4(connection *VAR_3, char *VAR_4) {
    int VAR_5;
    FUNC_2(VAR_3->ssl, VAR_3->fd);
    FUNC_3(VAR_3->ssl, VAR_4);
    if ((VAR_5 = FUNC_0(VAR_3->ssl)) != 1) {
        switch (FUNC_1(VAR_3->ssl, VAR_5)) {
            case 129: return VAR_2;
            case 128: return VAR_2;
            default: return VAR_0;
        }
    }
    return VAR_1;
}
