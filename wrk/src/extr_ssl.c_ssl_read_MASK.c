
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int status ;
struct TYPE_3__ {int ssl; int buf; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;

status FUNC_2(connection *VAR_3, size_t *VAR_4) {
    int VAR_5;
    if ((VAR_5 = FUNC_1(VAR_3->ssl, VAR_3->buf, sizeof(VAR_3->buf))) <= 0) {
        switch (FUNC_0(VAR_3->ssl, VAR_5)) {
            case 129: return VAR_2;
            case 128: return VAR_2;
            default: return VAR_0;
        }
    }
    *VAR_4 = (size_t) VAR_5;
    return VAR_1;
}
