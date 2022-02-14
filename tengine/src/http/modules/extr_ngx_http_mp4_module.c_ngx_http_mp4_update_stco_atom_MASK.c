
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_17__ {int size; int entries; } ;
typedef TYPE_6__ ngx_mp4_stco_atom_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {scalar_t__ start_chunk; scalar_t__ chunks; int start_offset; scalar_t__ end_chunk; int end_offset; size_t size; TYPE_5__* out; scalar_t__ end_chunk_samples_size; scalar_t__ start_chunk_samples_size; } ;
typedef TYPE_7__ ngx_http_mp4_trak_t ;
struct TYPE_15__ {TYPE_3__* buf; } ;
struct TYPE_12__ {int data; } ;
struct TYPE_13__ {int log; TYPE_1__ name; } ;
struct TYPE_19__ {int end; TYPE_4__ mdat_data; TYPE_2__ file; scalar_t__ length; } ;
typedef TYPE_8__ ngx_http_mp4_file_t ;
struct TYPE_20__ {int pos; int last; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_16__ {TYPE_9__* buf; } ;
struct TYPE_14__ {int file_last; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_mp4_file_t *VAR_6,
    ngx_http_mp4_trak_t *VAR_7)
{
    size_t VAR_8;
    uint32_t VAR_9;
    ngx_buf_t *VAR_10, *VAR_11;
    ngx_mp4_stco_atom_t *VAR_12;







    FUNC_0(VAR_3, VAR_6->file.log, 0,
                   "mp4 stco atom update");

    VAR_11 = VAR_7->out[VAR_2].buf;

    if (VAR_11 == ((void*)0)) {
        FUNC_2(VAR_4, VAR_6->file.log, 0,
                      "no mp4 stco atoms were found in \"%s\"",
                      VAR_6->file.name.data);
        return VAR_0;
    }

    if (VAR_7->start_chunk > VAR_7->chunks) {
        FUNC_2(VAR_4, VAR_6->file.log, 0,
                      "start time is out mp4 stco chunks in \"%s\"",
                      VAR_6->file.name.data);
        return VAR_0;
    }

    VAR_11->pos += VAR_7->start_chunk * sizeof(uint32_t);

    VAR_7->start_offset = FUNC_3(VAR_11->pos);
    VAR_7->start_offset += VAR_7->start_chunk_samples_size;
    FUNC_4(VAR_11->pos, VAR_7->start_offset);

    FUNC_1(VAR_3, VAR_6->file.log, 0,
                   "start chunk offset:%O", VAR_7->start_offset);

    if (VAR_6->length) {

        if (VAR_7->end_chunk > VAR_7->chunks) {
            FUNC_2(VAR_4, VAR_6->file.log, 0,
                          "end time is out mp4 stco chunks in \"%s\"",
                          VAR_6->file.name.data);
            return VAR_0;
        }

        VAR_9 = VAR_7->end_chunk - VAR_7->start_chunk;
        VAR_11->last = VAR_11->pos + VAR_9 * sizeof(uint32_t);

        if (VAR_9) {
            VAR_7->end_offset =
                            FUNC_3(VAR_11->last - sizeof(uint32_t));
            VAR_7->end_offset += VAR_7->end_chunk_samples_size;

            FUNC_1(VAR_3, VAR_6->file.log, 0,
                           "end chunk offset:%O", VAR_7->end_offset);
        }

    } else {
        VAR_9 = VAR_7->chunks - VAR_7->start_chunk;
        VAR_7->end_offset = VAR_6->mdat_data.buf->file_last;
    }

    if (VAR_9 == 0) {
        VAR_7->start_offset = VAR_6->end;
        VAR_7->end_offset = 0;
    }

    VAR_8 = sizeof(ngx_mp4_stco_atom_t) + (VAR_11->last - VAR_11->pos);
    VAR_7->size += VAR_8;

    VAR_10 = VAR_7->out[VAR_1].buf;
    VAR_12 = (ngx_mp4_stco_atom_t *) VAR_10->pos;

    FUNC_4(VAR_12->size, VAR_8);
    FUNC_4(VAR_12->entries, VAR_9);

    return VAR_5;
}
