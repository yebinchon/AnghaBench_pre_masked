
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int yajl_gen ;
typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef unsigned char const u_char ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int pool; int gen; } ;
typedef TYPE_3__ ngx_http_tfs_json_gen_t ;
struct TYPE_16__ {size_t file_count; TYPE_5__* files; struct TYPE_16__* next; } ;
typedef TYPE_4__ ngx_http_tfs_custom_meta_info_t ;
struct TYPE_14__ {int pid; int id; int size; int ver_no; int modify_time; int create_time; } ;
struct TYPE_13__ {int len; scalar_t__ data; } ;
struct TYPE_17__ {TYPE_2__ file_info; TYPE_1__ file_name; } ;
typedef TYPE_5__ ngx_http_tfs_custom_file_t ;
struct TYPE_18__ {TYPE_7__* buf; int * next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_19__ {int temporary; int flush; scalar_t__ last; scalar_t__ end; scalar_t__ pos; } ;
typedef TYPE_7__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (int ) ;
 int FUNC_2 (unsigned char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,unsigned char const**,size_t*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,unsigned char const*,int) ;

ngx_chain_t *
FUNC_11(ngx_http_tfs_json_gen_t *VAR_2,
    ngx_http_tfs_custom_meta_info_t *VAR_3, uint8_t VAR_4)
{
    size_t VAR_5;
    u_char VAR_6[VAR_1];
    yajl_gen VAR_7;
    uint32_t VAR_8;
    ngx_buf_t *VAR_9;
    ngx_int_t VAR_10;
    ngx_uint_t VAR_11;
    ngx_chain_t *VAR_12;
    ngx_http_tfs_custom_file_t *VAR_13;

    VAR_7 = VAR_2->gen;
    VAR_5 = 0;

    if (VAR_4 == VAR_0) {
        FUNC_4(VAR_7);
    }

    for(; VAR_3; VAR_3 = VAR_3->next) {
        VAR_8 = VAR_3->file_count;
        VAR_13 = VAR_3->files;

        for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
            FUNC_9(VAR_7);

            FUNC_10(VAR_7, (const unsigned char *) "NAME", 4);
            FUNC_10(VAR_7, (const unsigned char *) VAR_13[VAR_11].file_name.data,
                            VAR_13[VAR_11].file_name.len);

            FUNC_10(VAR_7, (const unsigned char *) "PID", 3);
            FUNC_7(VAR_7, VAR_13[VAR_11].file_info.pid);

            FUNC_10(VAR_7, (const unsigned char *) "ID", 2);
            FUNC_7(VAR_7, VAR_13[VAR_11].file_info.id);

            FUNC_10(VAR_7, (const unsigned char *) "SIZE", 4);
            FUNC_7(VAR_7, VAR_13[VAR_11].file_info.size);

            FUNC_10(VAR_7, (const unsigned char *) "IS_FILE", 7);
            if (VAR_4 == VAR_0) {
                VAR_10 = (VAR_13[VAR_11].file_info.pid >> 63) & 0x01;
            } else {
                VAR_10 = 1;
            }
            FUNC_5(VAR_7, VAR_10);

            FUNC_2(VAR_6, VAR_13[VAR_11].file_info.create_time);
            FUNC_10(VAR_7, (const unsigned char *) "CREATE_TIME", 11);
            FUNC_10(VAR_7, VAR_6, VAR_1);

            FUNC_2(VAR_6, VAR_13[VAR_11].file_info.modify_time);
            FUNC_10(VAR_7, (const unsigned char *) "MODIFY_TIME", 11);
            FUNC_10(VAR_7, VAR_6, VAR_1);

            FUNC_10(VAR_7, (const unsigned char *) "VER_NO", 6);
            FUNC_7(VAR_7, VAR_13[VAR_11].file_info.ver_no);

            FUNC_8(VAR_7);
        }
    }

    if (VAR_4 == VAR_0) {
        FUNC_3(VAR_7);
    }

    VAR_12 = FUNC_0(VAR_2->pool);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_12->next = ((void*)0);

    VAR_9 = FUNC_1(VAR_2->pool);
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_6(VAR_7, (const unsigned char **) &VAR_9->pos, &VAR_5);
    VAR_9->last = VAR_9->pos + VAR_5;
    VAR_9->end = VAR_9->last;
    VAR_9->temporary = 1;
    VAR_9->flush = 1;

    VAR_12->buf = VAR_9;

    return VAR_12;
}
