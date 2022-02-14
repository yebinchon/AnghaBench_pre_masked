
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int yajl_gen ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_11__ {int pool; int gen; } ;
typedef TYPE_1__ ngx_http_tfs_json_gen_t ;
struct TYPE_12__ {int length; int offset; } ;
typedef TYPE_2__ ngx_http_tfs_file_hole_info_t ;
struct TYPE_13__ {TYPE_4__* buf; int * next; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_14__ {int temporary; int flush; scalar_t__ last; scalar_t__ end; scalar_t__ pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_15__ {scalar_t__ nelts; scalar_t__ elts; } ;
typedef TYPE_5__ ngx_array_t ;


 TYPE_3__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned char const**,size_t*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned char const*,int) ;

ngx_chain_t *
FUNC_9(ngx_http_tfs_json_gen_t *VAR_0,
    ngx_array_t *VAR_1)
{
    size_t VAR_2;
    yajl_gen VAR_3;
    ngx_buf_t *VAR_4;
    ngx_uint_t VAR_5;
    ngx_chain_t *VAR_6;
    ngx_http_tfs_file_hole_info_t *VAR_7;

    VAR_3 = VAR_0->gen;
    VAR_2 = 0;

    FUNC_3(VAR_3);

    VAR_7 = (ngx_http_tfs_file_hole_info_t *) VAR_1->elts;
    for(VAR_5 = 0; VAR_5 < VAR_1->nelts; VAR_5++, VAR_7++) {
        FUNC_7(VAR_3);

        FUNC_8(VAR_3, (const unsigned char *) "OFFSET", 6);
        FUNC_5(VAR_3, VAR_7->offset);

        FUNC_8(VAR_3, (const unsigned char *) "LENGTH", 6);
        FUNC_5(VAR_3, VAR_7->length);

        FUNC_6(VAR_3);
    }

    FUNC_2(VAR_3);

    VAR_6 = FUNC_0(VAR_0->pool);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_6->next = ((void*)0);

    VAR_4 = FUNC_1(VAR_0->pool);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_4(VAR_3, (const unsigned char **) &VAR_4->pos, &VAR_2);
    VAR_4->last = VAR_4->pos + VAR_2;
    VAR_4->end = VAR_4->last;
    VAR_4->temporary = 1;
    VAR_4->flush = 1;

    VAR_6->buf = VAR_4;
    return VAR_6;
}
