
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef char uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef int input_attachment_t ;
struct TYPE_28__ {int i_length; scalar_t__ i_pos; int i_fourcc; } ;
typedef TYPE_4__ idx1_entry_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;
struct TYPE_29__ {int s; TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_30__ {int attachment; int i_attachment; int b_seekable; } ;
typedef TYPE_6__ demux_sys_t ;
struct TYPE_31__ {char* p_buffer; } ;
typedef TYPE_7__ block_t ;
struct TYPE_27__ {TYPE_2__* std; TYPE_1__* super; } ;
struct TYPE_33__ {scalar_t__ i_indextype; int i_entriesinuse; scalar_t__ i_indexsubtype; TYPE_3__ idx; scalar_t__ i_baseoffset; } ;
struct TYPE_32__ {TYPE_9__ indx; } ;
typedef TYPE_8__ avi_chunk_t ;
typedef int avi_chunk_list_t ;
typedef TYPE_9__ avi_chunk_indx_t ;
struct TYPE_23__ {unsigned int i_entry_count; TYPE_4__* entry; } ;
typedef TYPE_10__ avi_chunk_idx1_t ;
struct TYPE_24__ {scalar_t__ p_str; } ;
typedef TYPE_11__ avi_chunk_STRING_t ;
struct TYPE_26__ {int i_size; scalar_t__ i_offset; } ;
struct TYPE_25__ {scalar_t__ i_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_8__*) ;
 TYPE_9__* FUNC_1 (int *,int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_8__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_10__**,scalar_t__*) ;
 int FUNC_4 (int ,unsigned int*,int*) ;
 char* FUNC_5 (scalar_t__) ;
 char* FUNC_6 (char*,char const*,unsigned int const) ;
 unsigned int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int VAR_3 ;
 int FUNC_9 (int ,int ,int *) ;
 scalar_t__ FUNC_10 (char**,char*,int ) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char const*,char*,int) ;
 int FUNC_14 (TYPE_5__*,char*,...) ;
 int FUNC_15 (TYPE_5__*,char*) ;
 int * FUNC_16 (char*,char*,char*,char const*,unsigned int const) ;
 TYPE_7__* FUNC_17 (int ,unsigned int) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_19( demux_t *VAR_4,
                                 unsigned int VAR_5,
                                 avi_chunk_list_t *VAR_6,
                                 avi_chunk_STRING_t *VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_4->p_sys;
    block_t *VAR_9 = ((void*)0);
    input_attachment_t *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    avi_chunk_indx_t *VAR_12 = ((void*)0);

    if( !VAR_8->b_seekable )
        goto exit;

    VAR_12 = FUNC_1( VAR_6, VAR_0, 0, 0 );
    avi_chunk_t VAR_13;
    int64_t VAR_14;
    unsigned VAR_15;
    if( VAR_12 )
    {
        if( VAR_12->i_indextype == VAR_2 &&
            VAR_12->i_entriesinuse > 0 )
        {
            if( FUNC_18( VAR_4->s, VAR_12->idx.super[0].i_offset ) ||
                FUNC_2( VAR_4->s, &VAR_13, ((void*)0) ) )
                goto exit;
            VAR_12 = &VAR_13.indx;
        }

        if( VAR_12->i_indextype != VAR_1 ||
            VAR_12->i_entriesinuse != 1 ||
            VAR_12->i_indexsubtype != 0 )
            goto exit;

        VAR_14 = VAR_12->i_baseoffset +
                      VAR_12->idx.std[0].i_offset - 8;
        VAR_15 = (VAR_12->idx.std[0].i_size & 0x7fffffff) + 8;
    }
    else
    {
        avi_chunk_idx1_t *VAR_16;
        uint64_t VAR_17;

        if( FUNC_3( VAR_4, &VAR_16, &VAR_17 ) )
            goto exit;

        VAR_15 = 0;
        for( unsigned VAR_18 = 0; VAR_18 < VAR_16->i_entry_count; VAR_18++ )
        {
            const idx1_entry_t *VAR_19 = &VAR_16->entry[VAR_18];
            enum es_format_category_e VAR_20;
            unsigned VAR_21;

            FUNC_4( VAR_19->i_fourcc, &VAR_21, &VAR_20 );
            if( VAR_20 == VAR_3 && VAR_21 == VAR_5 )
            {
                VAR_14 = VAR_19->i_pos + VAR_17;
                VAR_15 = VAR_19->i_length + 8;
                break;
            }
        }
        if( VAR_15 <= 0 )
            goto exit;
    }


    if( VAR_15 > 10000000 )
    {
        FUNC_14( VAR_4, "Attached subtitle too big: %u", VAR_15 );
        goto exit;
    }

    if( FUNC_18( VAR_4->s, VAR_14 ) )
        goto exit;
    VAR_9 = FUNC_17( VAR_4->s, VAR_15 );
    if( !VAR_9 )
        goto exit;


    const uint8_t *VAR_22 = VAR_9->p_buffer;
    if( VAR_15 < 8 || VAR_22[2] != 't' || VAR_22[3] != 'x' )
        goto exit;
    VAR_22 += 8;
    VAR_15 -= 8;


    if( VAR_15 < 11 || FUNC_13( VAR_22, "GAB2", 4 ) ||
        VAR_22[4] != 0x00 || FUNC_8( &VAR_22[5] ) != 0x2 )
        goto exit;
    const unsigned VAR_23 = FUNC_7( &VAR_22[7] );
    if( 11 + VAR_15 <= VAR_23 )
        goto exit;
    if( VAR_23 > 0 )
        VAR_11 = FUNC_6( "UTF-16LE", &VAR_22[11], VAR_23 );
    VAR_22 += 11 + VAR_23;
    VAR_15 -= 11 + VAR_23;
    if( VAR_15 < 6 || FUNC_8( &VAR_22[0] ) != 0x04 )
        goto exit;
    const unsigned VAR_24 = FUNC_7( &VAR_22[2] );
    if( VAR_15 < 6 + VAR_24 || VAR_24 <= 0 )
        goto exit;
    VAR_22 += 6;
    VAR_15 -= 6;

    if( !VAR_11 )
        VAR_11 = VAR_7 && VAR_7->p_str ? FUNC_5( VAR_7->p_str ) : ((void*)0);
    char *VAR_25;
    if( FUNC_10( &VAR_25, "subtitle%d.srt", VAR_8->i_attachment ) <= 0 )
        VAR_25 = ((void*)0);
    VAR_10 = FUNC_16( VAR_25,
                                             "application/x-srt",
                                             VAR_11,
                                             VAR_22, VAR_24 );
    if( VAR_10 )
        FUNC_9( VAR_8->i_attachment, VAR_8->attachment, VAR_10 );
    FUNC_12( VAR_25 );

exit:
    FUNC_12( VAR_11 );

    if( VAR_9 )
        FUNC_11( VAR_9 );

    if( VAR_10 )
        FUNC_14( VAR_4, "Loaded an embedded subtitle" );
    else
        FUNC_15( VAR_4, "Failed to load an embedded subtitle" );

    if( VAR_12 == &VAR_13.indx )
        FUNC_0( VAR_4->s, &VAR_13 );
}
