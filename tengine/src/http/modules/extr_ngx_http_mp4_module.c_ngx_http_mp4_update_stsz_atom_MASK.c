
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int entries; int size; } ;
typedef TYPE_4__ ngx_mp4_stsz_atom_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {int sample_sizes_entries; int start_sample; int* start_chunk_samples; int end_sample; int* end_chunk_samples; size_t size; TYPE_3__* out; int end_chunk_samples_size; int start_chunk_samples_size; } ;
typedef TYPE_5__ ngx_http_mp4_trak_t ;
struct TYPE_10__ {int data; } ;
struct TYPE_11__ {int log; TYPE_1__ name; } ;
struct TYPE_15__ {TYPE_2__ file; scalar_t__ length; } ;
typedef TYPE_6__ ngx_http_mp4_file_t ;
struct TYPE_16__ {int pos; int last; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_12__ {TYPE_7__* buf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_mp4_file_t *VAR_6,
    ngx_http_mp4_trak_t *VAR_7)
{
    size_t VAR_8;
    uint32_t *VAR_9, *VAR_10, VAR_11;
    ngx_buf_t *VAR_12, *VAR_13;
    ngx_mp4_stsz_atom_t *VAR_14;







    FUNC_0(VAR_3, VAR_6->file.log, 0,
                   "mp4 stsz atom update");

    VAR_13 = VAR_7->out[VAR_2].buf;

    if (VAR_13) {
        VAR_11 = VAR_7->sample_sizes_entries;

        if (VAR_7->start_sample > VAR_11) {
            FUNC_2(VAR_4, VAR_6->file.log, 0,
                          "start time is out mp4 stsz samples in \"%s\"",
                          VAR_6->file.name.data);
            return VAR_0;
        }

        VAR_11 -= VAR_7->start_sample;
        VAR_13->pos += VAR_7->start_sample * sizeof(uint32_t);
        VAR_10 = (uint32_t *) VAR_13->pos;

        for (VAR_9 = VAR_10 - VAR_7->start_chunk_samples; VAR_9 < VAR_10; VAR_9++) {
            VAR_7->start_chunk_samples_size += FUNC_3(VAR_9);
        }

        FUNC_1(VAR_3, VAR_6->file.log, 0,
                       "chunk samples sizes:%uL",
                       VAR_7->start_chunk_samples_size);

        if (VAR_6->length) {
            if (VAR_7->end_sample - VAR_7->start_sample > VAR_11) {
                FUNC_2(VAR_4, VAR_6->file.log, 0,
                              "end time is out mp4 stsz samples in \"%s\"",
                              VAR_6->file.name.data);
                return VAR_0;
            }

            VAR_11 = VAR_7->end_sample - VAR_7->start_sample;
            VAR_13->last = VAR_13->pos + VAR_11 * sizeof(uint32_t);
            VAR_10 = (uint32_t *) VAR_13->last;

            for (VAR_9 = VAR_10 - VAR_7->end_chunk_samples; VAR_9 < VAR_10; VAR_9++) {
                VAR_7->end_chunk_samples_size += FUNC_3(VAR_9);
            }

            FUNC_1(VAR_3, VAR_6->file.log, 0,
                           "mp4 stsz end_chunk_samples_size:%uL",
                           VAR_7->end_chunk_samples_size);
        }

        VAR_8 = sizeof(ngx_mp4_stsz_atom_t) + (VAR_13->last - VAR_13->pos);
        VAR_7->size += VAR_8;

        VAR_12 = VAR_7->out[VAR_1].buf;
        VAR_14 = (ngx_mp4_stsz_atom_t *) VAR_12->pos;

        FUNC_4(VAR_14->size, VAR_8);
        FUNC_4(VAR_14->entries, VAR_11);
    }

    return VAR_5;
}
