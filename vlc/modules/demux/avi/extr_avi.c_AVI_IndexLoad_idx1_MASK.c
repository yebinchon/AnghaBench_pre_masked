
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ uint64_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;
struct TYPE_21__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_22__ {int b_indexloaded; unsigned int i_track; TYPE_16__** track; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_23__ {unsigned int i_size; TYPE_3__* p_entry; } ;
typedef TYPE_6__ avi_index_t ;
struct TYPE_24__ {int i_flags; int i_length; int i_lengthtotal; scalar_t__ i_pos; int i_id; } ;
typedef TYPE_7__ avi_entry_t ;
struct TYPE_25__ {unsigned int i_entry_count; TYPE_2__* entry; } ;
typedef TYPE_8__ avi_chunk_idx1_t ;
struct TYPE_20__ {unsigned int i_lengthtotal; int i_pos; } ;
struct TYPE_19__ {int i_flags; int i_length; scalar_t__ i_pos; int i_fourcc; } ;
struct TYPE_18__ {int i_cat; } ;
struct TYPE_17__ {scalar_t__ i_samplesize; TYPE_1__ fmt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_16__*,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_8__**,scalar_t__*) ;
 int FUNC_2 (int ,unsigned int*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_6__*,scalar_t__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_4__*,char*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_4,
                               avi_index_t VAR_5[], uint64_t *VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_4->p_sys;

    avi_chunk_idx1_t *VAR_8;
    uint64_t VAR_9;
    if( FUNC_1( VAR_4, &VAR_8, &VAR_9 ) )
        return VAR_2;

    VAR_7->b_indexloaded = 1;

    for( unsigned VAR_10 = 0; VAR_10 < VAR_8->i_entry_count; VAR_10++ )
    {
        enum es_format_category_e VAR_11;
        unsigned VAR_12;

        FUNC_2( VAR_8->entry[VAR_10].i_fourcc,
                               &VAR_12,
                               &VAR_11 );
        if( VAR_12 < VAR_7->i_track &&
            (VAR_11 == VAR_7->track[VAR_12]->fmt.i_cat || VAR_11 == VAR_1 ) )
        {
            avi_entry_t VAR_13;
            VAR_13.i_id = VAR_8->entry[VAR_10].i_fourcc;
            VAR_13.i_flags = VAR_8->entry[VAR_10].i_flags&(~VAR_0);
            VAR_13.i_pos = VAR_8->entry[VAR_10].i_pos + VAR_9;
            VAR_13.i_length = VAR_8->entry[VAR_10].i_length;
            VAR_13.i_lengthtotal = VAR_13.i_length;

            FUNC_3( &VAR_5[VAR_12], VAR_6, &VAR_13 );
        }
    }
    return VAR_3;
}
