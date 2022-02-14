
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {size_t len; int * data; } ;
struct TYPE_13__ {int loc_conf; TYPE_2__* connection; TYPE_1__ uri; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_14__ {size_t len; struct TYPE_14__* left; TYPE_4__* inclusive; TYPE_3__* exact; scalar_t__ auto_redirect; struct TYPE_14__* right; struct TYPE_14__* tree; int name; } ;
typedef TYPE_6__ ngx_http_location_tree_node_t ;
struct TYPE_12__ {int loc_conf; } ;
struct TYPE_11__ {int loc_conf; } ;
struct TYPE_10__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,size_t,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_5,
    ngx_http_location_tree_node_t *VAR_6)
{
    u_char *VAR_7;
    size_t VAR_8, VAR_9;
    ngx_int_t VAR_10, VAR_11;

    VAR_8 = VAR_5->uri.len;
    VAR_7 = VAR_5->uri.data;

    VAR_11 = VAR_1;

    for ( ;; ) {

        if (VAR_6 == ((void*)0)) {
            return VAR_11;
        }

        FUNC_1(VAR_3, VAR_5->connection->log, 0,
                       "test location: \"%*s\"",
                       (size_t) VAR_6->len, VAR_6->name);

        VAR_9 = (VAR_8 <= (size_t) VAR_6->len) ? VAR_8 : VAR_6->len;

        VAR_10 = FUNC_0(VAR_7, VAR_6->name, VAR_9);

        if (VAR_10 != 0) {
            VAR_6 = (VAR_10 < 0) ? VAR_6->left : VAR_6->right;

            continue;
        }

        if (VAR_8 > (size_t) VAR_6->len) {

            if (VAR_6->inclusive) {

                VAR_5->loc_conf = VAR_6->inclusive->loc_conf;
                VAR_11 = VAR_0;

                VAR_6 = VAR_6->tree;
                VAR_7 += VAR_9;
                VAR_8 -= VAR_9;

                continue;
            }



            VAR_6 = VAR_6->right;

            continue;
        }

        if (VAR_8 == (size_t) VAR_6->len) {

            if (VAR_6->exact) {
                VAR_5->loc_conf = VAR_6->exact->loc_conf;
                return VAR_4;

            } else {
                VAR_5->loc_conf = VAR_6->inclusive->loc_conf;
                return VAR_0;
            }
        }



        if (VAR_8 + 1 == (size_t) VAR_6->len && VAR_6->auto_redirect) {

            VAR_5->loc_conf = (VAR_6->exact) ? VAR_6->exact->loc_conf:
                                          VAR_6->inclusive->loc_conf;
            VAR_11 = VAR_2;
        }

        VAR_6 = VAR_6->left;
    }
}
