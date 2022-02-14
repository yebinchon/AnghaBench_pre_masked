
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int status ;
struct TYPE_3__ {int ssl; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,size_t) ;

status FUNC_2(connection *VAR_3, char *VAR_4, size_t VAR_5, size_t *VAR_6) {
    int VAR_7;
    if ((VAR_7 = FUNC_1(VAR_3->ssl, VAR_4, VAR_5)) <= 0) {
        switch (FUNC_0(VAR_3->ssl, VAR_7)) {
            case 129: return VAR_2;
            case 128: return VAR_2;
            default: return VAR_0;
        }
    }
    *VAR_6 = (size_t) VAR_7;
    return VAR_1;
}
