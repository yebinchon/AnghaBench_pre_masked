
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
struct TYPE_9__ {TYPE_2__* ssl; TYPE_1__* read; int log; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_8__ {int last; int connection; scalar_t__ in_early; } ;
struct TYPE_7__ {int error; int ready; int eof; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int *,size_t) ;

ssize_t
FUNC_5(ngx_connection_t *VAR_2, u_char *VAR_3, size_t VAR_4)
{
    int VAR_5, VAR_6;







    if (VAR_2->ssl->last == 128) {
        VAR_2->read->error = 1;
        return 128;
    }

    if (VAR_2->ssl->last == 129) {
        VAR_2->read->ready = 0;
        VAR_2->read->eof = 1;
        return 0;
    }

    VAR_6 = 0;

    FUNC_2(VAR_2->log);






    for ( ;; ) {

        VAR_5 = FUNC_0(VAR_2->ssl->connection, VAR_3, VAR_4);

        FUNC_1(VAR_0, VAR_2->log, 0, "SSL_read: %d", VAR_5);

        if (VAR_5 > 0) {
            VAR_6 += VAR_5;
        }

        VAR_2->ssl->last = FUNC_3(VAR_2, VAR_5);

        if (VAR_2->ssl->last == VAR_1) {

            VAR_4 -= VAR_5;

            if (VAR_4 == 0) {
                VAR_2->read->ready = 1;
                return VAR_6;
            }

            VAR_3 += VAR_5;

            continue;
        }

        if (VAR_6) {
            if (VAR_2->ssl->last != 130) {
                VAR_2->read->ready = 1;
            }

            return VAR_6;
        }

        switch (VAR_2->ssl->last) {

        case 129:
            VAR_2->read->ready = 0;
            VAR_2->read->eof = 1;
            return 0;

        case 128:
            VAR_2->read->error = 1;



        case 130:
            return VAR_2->ssl->last;
        }
    }
}
