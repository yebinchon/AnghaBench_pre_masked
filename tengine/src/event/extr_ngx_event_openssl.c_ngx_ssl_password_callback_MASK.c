
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,...) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
    ngx_str_t *VAR_7 = VAR_6;

    if (VAR_5) {
        FUNC_0(VAR_0, VAR_2->log, 0,
                      "ngx_ssl_password_callback() is called for encryption");
        return 0;
    }

    if (VAR_7 == ((void*)0)) {
        return 0;
    }

    if (VAR_7->len > (size_t) VAR_4) {
        FUNC_0(VAR_1, VAR_2->log, 0,
                      "password is truncated to %d bytes", VAR_4);
    } else {
        VAR_4 = VAR_7->len;
    }

    FUNC_1(VAR_3, VAR_7->data, VAR_4);

    return VAR_4;
}
