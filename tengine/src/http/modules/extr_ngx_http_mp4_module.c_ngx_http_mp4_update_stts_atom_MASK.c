
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int entries; int size; } ;
typedef TYPE_4__ ngx_mp4_stts_atom_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {size_t time_to_sample_entries; size_t size; TYPE_3__* out; } ;
typedef TYPE_5__ ngx_http_mp4_trak_t ;
struct TYPE_12__ {int data; } ;
struct TYPE_13__ {int log; TYPE_1__ name; } ;
struct TYPE_17__ {TYPE_2__ file; } ;
typedef TYPE_6__ ngx_http_mp4_file_t ;
struct TYPE_18__ {int last; int pos; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_14__ {TYPE_7__* buf; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_6__*,TYPE_5__*,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,size_t) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 int FUNC_4 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_mp4_file_t *VAR_6,
    ngx_http_mp4_trak_t *VAR_7)
{
    size_t VAR_8;
    ngx_buf_t *VAR_9, *VAR_10;
    ngx_mp4_stts_atom_t *VAR_11;






    FUNC_1(VAR_3, VAR_6->file.log, 0,
                   "mp4 stts atom update");

    VAR_10 = VAR_7->out[VAR_2].buf;

    if (VAR_10 == ((void*)0)) {
        FUNC_3(VAR_4, VAR_6->file.log, 0,
                      "no mp4 stts atoms were found in \"%s\"",
                      VAR_6->file.name.data);
        return VAR_0;
    }

    if (FUNC_0(VAR_6, VAR_7, 1) != VAR_5) {
        return VAR_0;
    }

    if (FUNC_0(VAR_6, VAR_7, 0) != VAR_5) {
        return VAR_0;
    }

    FUNC_2(VAR_3, VAR_6->file.log, 0,
                   "time-to-sample entries:%uD", VAR_7->time_to_sample_entries);

    VAR_8 = sizeof(ngx_mp4_stts_atom_t) + (VAR_10->last - VAR_10->pos);
    VAR_7->size += VAR_8;

    VAR_9 = VAR_7->out[VAR_1].buf;
    VAR_11 = (ngx_mp4_stts_atom_t *) VAR_9->pos;
    FUNC_4(VAR_11->size, VAR_8);
    FUNC_4(VAR_11->entries, VAR_7->time_to_sample_entries);

    return VAR_5;
}
