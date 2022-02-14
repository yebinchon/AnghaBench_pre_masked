
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_10__ ;


typedef scalar_t__ off_t ;
typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_48__ {scalar_t__ size; scalar_t__ mdhd_size; scalar_t__ hdlr_size; scalar_t__ tkhd_size; scalar_t__ start_offset; scalar_t__ end_offset; TYPE_10__* out; } ;
typedef TYPE_7__ ngx_http_mp4_trak_t ;
struct TYPE_47__ {size_t nelts; TYPE_7__* elts; } ;
struct TYPE_44__ {int data; } ;
struct TYPE_45__ {int log; TYPE_3__ name; } ;
struct TYPE_43__ {TYPE_1__* buf; } ;
struct TYPE_41__ {int * buf; struct TYPE_41__* next; } ;
struct TYPE_46__ {scalar_t__ last; scalar_t__ pos; } ;
struct TYPE_49__ {scalar_t__ end; scalar_t__ moov_size; scalar_t__ ftyp_size; TYPE_6__ trak; TYPE_4__ file; TYPE_2__ mdat_data; TYPE_10__ mdat_atom; int content_length; int moov_atom_header; TYPE_10__ mvhd_atom; TYPE_5__ mvhd_atom_buf; TYPE_10__ moov_atom; TYPE_10__ ftyp_atom; TYPE_10__* out; int buffer_size; int request; int length; int start; } ;
typedef TYPE_8__ ngx_http_mp4_file_t ;
struct TYPE_50__ {int buffer_size; } ;
typedef TYPE_9__ ngx_http_mp4_conf_t ;
typedef TYPE_10__ ngx_chain_t ;
typedef int int32_t ;
struct TYPE_42__ {scalar_t__ file_last; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_9__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_8__*,TYPE_7__*,scalar_t__) ;
 int FUNC_2 (TYPE_8__*,TYPE_7__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_8__*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_5 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_8 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_9 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_10 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_11 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_12 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_13 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_14 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_15 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_16 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_17 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_18 (int ,int ,int ,char*,int ) ;
 int FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (int ,char,char,char,char) ;

__attribute__((used)) static ngx_int_t
FUNC_21(ngx_http_mp4_file_t *VAR_9)
{
    off_t VAR_10, VAR_11, VAR_12;
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14, VAR_15;
    ngx_chain_t **VAR_16;
    ngx_http_mp4_trak_t *VAR_17;
    ngx_http_mp4_conf_t *VAR_18;

    FUNC_17(VAR_4, VAR_9->file.log, 0,
                   "mp4 start:%ui, length:%ui", VAR_9->start, VAR_9->length);

    VAR_18 = FUNC_0(VAR_9->request, VAR_8);

    VAR_9->buffer_size = VAR_18->buffer_size;

    VAR_13 = FUNC_3(VAR_9, VAR_7, VAR_9->end);
    if (VAR_13 != VAR_6) {
        return VAR_13;
    }

    if (VAR_9->trak.nelts == 0) {
        FUNC_18(VAR_5, VAR_9->file.log, 0,
                      "no mp4 trak atoms were found in \"%s\"",
                      VAR_9->file.name.data);
        return VAR_0;
    }

    if (VAR_9->mdat_atom.buf == ((void*)0)) {
        FUNC_18(VAR_5, VAR_9->file.log, 0,
                      "no mp4 mdat atom was found in \"%s\"",
                      VAR_9->file.name.data);
        return VAR_0;
    }

    VAR_16 = &VAR_9->out;

    if (VAR_9->ftyp_atom.buf) {
        *VAR_16 = &VAR_9->ftyp_atom;
        VAR_16 = &VAR_9->ftyp_atom.next;
    }

    *VAR_16 = &VAR_9->moov_atom;
    VAR_16 = &VAR_9->moov_atom.next;

    if (VAR_9->mvhd_atom.buf) {
        VAR_9->moov_size += VAR_9->mvhd_atom_buf.last - VAR_9->mvhd_atom_buf.pos;
        *VAR_16 = &VAR_9->mvhd_atom;
        VAR_16 = &VAR_9->mvhd_atom.next;
    }

    VAR_10 = VAR_9->end;
    VAR_11 = 0;
    VAR_17 = VAR_9->trak.elts;

    for (VAR_14 = 0; VAR_14 < VAR_9->trak.nelts; VAR_14++) {

        if (FUNC_14(VAR_9, &VAR_17[VAR_14]) != VAR_6) {
            return VAR_0;
        }

        if (FUNC_12(VAR_9, &VAR_17[VAR_14]) != VAR_6) {
            return VAR_0;
        }

        FUNC_5(VAR_9, &VAR_17[VAR_14]);

        if (FUNC_11(VAR_9, &VAR_17[VAR_14]) != VAR_6) {
            return VAR_0;
        }

        if (FUNC_13(VAR_9, &VAR_17[VAR_14]) != VAR_6) {
            return VAR_0;
        }

        if (VAR_17[VAR_14].out[VAR_1].buf) {
            if (FUNC_4(VAR_9, &VAR_17[VAR_14]) != VAR_6) {
                return VAR_0;
            }

        } else {
            if (FUNC_10(VAR_9, &VAR_17[VAR_14]) != VAR_6) {
                return VAR_0;
            }
        }

        FUNC_9(VAR_9, &VAR_17[VAR_14]);
        FUNC_8(VAR_9, &VAR_17[VAR_14]);
        VAR_17[VAR_14].size += VAR_17[VAR_14].mdhd_size;
        VAR_17[VAR_14].size += VAR_17[VAR_14].hdlr_size;
        FUNC_7(VAR_9, &VAR_17[VAR_14]);
        VAR_17[VAR_14].size += VAR_17[VAR_14].tkhd_size;
        FUNC_15(VAR_9, &VAR_17[VAR_14]);

        VAR_9->moov_size += VAR_17[VAR_14].size;

        if (VAR_10 > VAR_17[VAR_14].start_offset) {
            VAR_10 = VAR_17[VAR_14].start_offset;
        }

        if (VAR_11 < VAR_17[VAR_14].end_offset) {
            VAR_11 = VAR_17[VAR_14].end_offset;
        }

        *VAR_16 = &VAR_17[VAR_14].out[VAR_3];
        VAR_16 = &VAR_17[VAR_14].out[VAR_3].next;

        for (VAR_15 = 0; VAR_15 < VAR_2 + 1; VAR_15++) {
            if (VAR_17[VAR_14].out[VAR_15].buf) {
                *VAR_16 = &VAR_17[VAR_14].out[VAR_15];
                VAR_16 = &VAR_17[VAR_14].out[VAR_15].next;
            }
        }
    }

    if (VAR_11 < VAR_10) {
        VAR_11 = VAR_10;
    }

    VAR_9->moov_size += 8;

    FUNC_19(VAR_9->moov_atom_header, VAR_9->moov_size);
    FUNC_20(VAR_9->moov_atom_header, 'm', 'o', 'o', 'v');
    VAR_9->content_length += VAR_9->moov_size;

    *VAR_16 = &VAR_9->mdat_atom;

    if (VAR_10 > VAR_9->mdat_data.buf->file_last) {
        FUNC_18(VAR_5, VAR_9->file.log, 0,
                      "start time is out mp4 mdat atom in \"%s\"",
                      VAR_9->file.name.data);
        return VAR_0;
    }

    VAR_12 = VAR_9->ftyp_size + VAR_9->moov_size
                 + FUNC_6(VAR_9, VAR_10, VAR_11)
                 - VAR_10;

    FUNC_16(VAR_4, VAR_9->file.log, 0,
                   "mp4 adjustment:%O", VAR_12);

    for (VAR_14 = 0; VAR_14 < VAR_9->trak.nelts; VAR_14++) {
        if (VAR_17[VAR_14].out[VAR_1].buf) {
            FUNC_1(VAR_9, &VAR_17[VAR_14], VAR_12);
        } else {
            FUNC_2(VAR_9, &VAR_17[VAR_14], (int32_t) VAR_12);
        }
    }

    return VAR_6;
}
