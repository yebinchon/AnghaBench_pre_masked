
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef int u_char ;
struct TYPE_19__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {int ** h_addr_list; } ;
struct TYPE_17__ {scalar_t__ len; int data; } ;
struct TYPE_20__ {char* err; TYPE_11__ host; } ;
typedef TYPE_2__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_21__ {void* len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_22__ {int log; } ;
typedef TYPE_4__ ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
typedef scalar_t__ in_addr_t ;
struct TYPE_18__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 struct hostent* FUNC_1 (char*) ;
 int * FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 TYPE_16__* VAR_6 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_2__*,struct sockaddr*,int,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_11__*) ;
 int FUNC_8 (struct sockaddr_in*,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_2__**,TYPE_3__) ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_2__**,TYPE_3__) ;
 void* FUNC_11 (int *) ;

ngx_int_t
FUNC_12(ngx_pool_t *VAR_7, ngx_url_t *VAR_8)
{
    u_char *VAR_9;
    ngx_uint_t VAR_10, VAR_11;
    struct hostent *VAR_12;
    struct sockaddr_in VAR_13;







    FUNC_8(&VAR_13, sizeof(struct sockaddr_in));

    VAR_13.sin_family = VAR_0;
    VAR_13.sin_addr.s_addr = FUNC_6(VAR_8->host.data, VAR_8->host.len);

    if (VAR_13.sin_addr.s_addr == VAR_1) {
        VAR_9 = FUNC_2(VAR_8->host.len + 1, VAR_7->log);
        if (VAR_9 == ((void*)0)) {
            return VAR_3;
        }

        (void) FUNC_3(VAR_9, VAR_8->host.data, VAR_8->host.len + 1);

        VAR_12 = FUNC_1((char *) VAR_9);
        FUNC_4(VAR_9);

        if (VAR_12 == ((void*)0) || VAR_12->h_addr_list[0] == ((void*)0)) {
            VAR_8->err = "host not found";
            return VAR_3;
        }

        for (VAR_11 = 0; VAR_12->h_addr_list[VAR_11] != ((void*)0); VAR_11++) { }



        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
            VAR_13.sin_addr.s_addr = *(in_addr_t *) (VAR_12->h_addr_list[VAR_10]);

            if (FUNC_5(VAR_7, VAR_8, (struct sockaddr *) &VAR_13,
                                  sizeof(struct sockaddr_in), VAR_11)
                != VAR_5)
            {
                return VAR_3;
            }
        }
    } else {



        if (FUNC_5(VAR_7, VAR_8, (struct sockaddr *) &VAR_13,
                              sizeof(struct sockaddr_in), 1)
            != VAR_5)
        {
            return VAR_3;
        }
    }

    return VAR_5;
}
