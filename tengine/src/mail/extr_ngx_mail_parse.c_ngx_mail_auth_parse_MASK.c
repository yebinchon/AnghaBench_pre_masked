
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_8__ {int nelts; TYPE_2__* elts; } ;
struct TYPE_10__ {TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
typedef int ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int *,int) ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;

ngx_int_t
FUNC_4(ngx_mail_session_t *VAR_6, ngx_connection_t *VAR_7)
{
    ngx_str_t *VAR_8;







    if (VAR_6->args.nelts == 0) {
        return VAR_5;
    }

    VAR_8 = VAR_6->args.elts;

    if (VAR_8[0].len == 5) {

        if (FUNC_3(VAR_8[0].data, (u_char *) "LOGIN", 5) == 0) {

            if (VAR_6->args.nelts == 1) {
                return VAR_2;
            }

            if (VAR_6->args.nelts == 2) {
                return VAR_3;
            }

            return VAR_5;
        }

        if (FUNC_3(VAR_8[0].data, (u_char *) "PLAIN", 5) == 0) {

            if (VAR_6->args.nelts == 1) {
                return VAR_4;
            }

            if (VAR_6->args.nelts == 2) {
                return FUNC_1(VAR_6, VAR_7, 1);
            }
        }

        return VAR_5;
    }

    if (VAR_8[0].len == 8) {

        if (FUNC_3(VAR_8[0].data, (u_char *) "CRAM-MD5", 8) == 0) {

            if (VAR_6->args.nelts != 1) {
                return VAR_5;
            }

            return VAR_0;
        }

        if (FUNC_3(VAR_8[0].data, (u_char *) "EXTERNAL", 8) == 0) {

            if (VAR_6->args.nelts == 1) {
                return VAR_1;
            }

            if (VAR_6->args.nelts == 2) {
                return FUNC_0(VAR_6, VAR_7, 1);
            }
        }

        return VAR_5;
    }

    return VAR_5;
}
