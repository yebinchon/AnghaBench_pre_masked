
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int yajl_gen ;
typedef int uint32_t ;
typedef unsigned char const u_char ;
struct TYPE_10__ {int crc; int flag; int create_time; int modify_time; int u_size; int size; int offset; int id; } ;
typedef TYPE_1__ ngx_http_tfs_raw_file_stat_t ;
struct TYPE_11__ {int pool; int gen; } ;
typedef TYPE_2__ ngx_http_tfs_json_gen_t ;
struct TYPE_12__ {TYPE_4__* buf; int * next; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_13__ {int temporary; int flush; scalar_t__ last; scalar_t__ end; scalar_t__ pos; } ;
typedef TYPE_4__ ngx_buf_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (unsigned char const*,int ) ;
 int FUNC_3 (int ,unsigned char const**,size_t*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned char const*,int) ;

ngx_chain_t *
FUNC_8(ngx_http_tfs_json_gen_t *VAR_1,
    u_char* VAR_2, uint32_t VAR_3,
    ngx_http_tfs_raw_file_stat_t *VAR_4)
{
    size_t VAR_5;
    u_char VAR_6[VAR_0];
    yajl_gen VAR_7;
    ngx_buf_t *VAR_8;
    ngx_chain_t *VAR_9;

    VAR_7 = VAR_1->gen;
    VAR_5 = 0;

    FUNC_6(VAR_7);

    FUNC_7(VAR_7, (const unsigned char *) "FILE_NAME", 9);
    FUNC_7(VAR_7, (const unsigned char *) VAR_2, 18);

    FUNC_7(VAR_7, (const unsigned char *) "BLOCK_ID", 8);
    FUNC_4(VAR_7, VAR_3);

    FUNC_7(VAR_7, (const unsigned char *) "FILE_ID", 7);
    FUNC_4(VAR_7, VAR_4->id);

    FUNC_7(VAR_7, (const unsigned char *) "OFFSET", 6);
    FUNC_4(VAR_7, VAR_4->offset);

    FUNC_7(VAR_7, (const unsigned char *) "SIZE", 4);
    FUNC_4(VAR_7, VAR_4->size);

    FUNC_7(VAR_7, (const unsigned char *) "OCCUPY_SIZE", 11);
    FUNC_4(VAR_7, VAR_4->u_size);

    FUNC_2(VAR_6, VAR_4->modify_time);
    FUNC_7(VAR_7, (const unsigned char *) "MODIFY_TIME", 11);
    FUNC_7(VAR_7, VAR_6, VAR_0);

    FUNC_2(VAR_6, VAR_4->create_time);
    FUNC_7(VAR_7, (const unsigned char *) "CREATE_TIME", 11);
    FUNC_7(VAR_7, VAR_6, VAR_0);

    FUNC_7(VAR_7, (const unsigned char *) "STATUS", 6);
    FUNC_4(VAR_7, VAR_4->flag);

    FUNC_7(VAR_7, (const unsigned char *) "CRC", 3);
    FUNC_4(VAR_7, VAR_4->crc);

    FUNC_5(VAR_7);

    VAR_9 = FUNC_0(VAR_1->pool);
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_9->next = ((void*)0);

    VAR_8 = FUNC_1(VAR_1->pool);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_3(VAR_7, (const unsigned char **) &VAR_8->pos, &VAR_5);

    VAR_8->last = VAR_8->pos + VAR_5;
    VAR_8->end = VAR_8->last;
    VAR_8->temporary = 1;
    VAR_8->flush = 1;



    VAR_9->buf = VAR_8;

    return VAR_9;
}
