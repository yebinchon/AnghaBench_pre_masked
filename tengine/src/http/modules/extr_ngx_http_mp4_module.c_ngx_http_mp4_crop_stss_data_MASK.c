
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_10__ {scalar_t__ start_sample; scalar_t__ end_sample; scalar_t__ sync_samples_entries; TYPE_1__* out; } ;
typedef TYPE_3__ ngx_http_mp4_trak_t ;
struct TYPE_9__ {int log; } ;
struct TYPE_11__ {TYPE_2__ file; scalar_t__ length; } ;
typedef TYPE_4__ ngx_http_mp4_file_t ;
struct TYPE_12__ {int * last; int * pos; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_8__ {TYPE_5__* buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_3(ngx_http_mp4_file_t *VAR_2,
    ngx_http_mp4_trak_t *VAR_3, ngx_uint_t VAR_4)
{
    uint32_t VAR_5, VAR_6, *VAR_7, *VAR_8;
    ngx_buf_t *VAR_9;
    ngx_uint_t VAR_10;



    if (VAR_4) {
        VAR_6 = VAR_3->start_sample + 1;

        FUNC_1(VAR_1, VAR_2->file.log, 0,
                       "mp4 stss crop start_sample:%uD", VAR_6);

    } else if (VAR_2->length) {
        VAR_6 = VAR_3->end_sample + 1;

        FUNC_1(VAR_1, VAR_2->file.log, 0,
                       "mp4 stss crop end_sample:%uD", VAR_6);

    } else {
        return;
    }

    VAR_9 = VAR_3->out[VAR_0].buf;

    VAR_10 = VAR_3->sync_samples_entries;
    VAR_7 = (uint32_t *) VAR_9->pos;
    VAR_8 = (uint32_t *) VAR_9->last;

    while (VAR_7 < VAR_8) {
        VAR_5 = FUNC_2(VAR_7);

        FUNC_1(VAR_1, VAR_2->file.log, 0,
                       "sync:%uD", VAR_5);

        if (VAR_5 >= VAR_6) {
            goto found;
        }

        VAR_10--;
        VAR_7++;
    }

    FUNC_0(VAR_1, VAR_2->file.log, 0,
                   "sample is out of mp4 stss atom");

found:

    if (VAR_4) {
        VAR_9->pos = (u_char *) VAR_7;
        VAR_3->sync_samples_entries = VAR_10;

    } else {
        VAR_9->last = (u_char *) VAR_7;
        VAR_3->sync_samples_entries -= VAR_10;
    }
}
