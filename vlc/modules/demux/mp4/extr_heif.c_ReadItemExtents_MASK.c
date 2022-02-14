
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct heif_private_t {int p_root; } ;
struct TYPE_26__ {int s; scalar_t__ p_sys; } ;
typedef TYPE_6__ demux_t ;
struct TYPE_27__ {struct TYPE_27__* p_next; int p_buffer; } ;
typedef TYPE_7__ block_t ;
struct TYPE_22__ {TYPE_1__* p_binary; } ;
struct TYPE_28__ {scalar_t__ i_type; struct TYPE_28__ const* p_next; struct TYPE_28__ const* p_first; scalar_t__ i_pos; TYPE_2__ data; } ;
struct TYPE_25__ {size_t i_to_item_id; } ;
struct TYPE_24__ {size_t i_item_id; size_t i_extent_count; int i_construction_method; TYPE_3__* p_extents; scalar_t__ i_base_offset; } ;
struct TYPE_23__ {size_t i_extent_index; scalar_t__ i_extent_length; scalar_t__ i_extent_offset; } ;
struct TYPE_21__ {int i_blob; int p_blob; } ;
struct TYPE_20__ {size_t i_item_count; size_t i_from_item_id; size_t i_reference_count; TYPE_5__* p_references; TYPE_4__* p_items; } ;
typedef TYPE_8__ const MP4_Box_t ;


 TYPE_18__* FUNC_0 (TYPE_8__ const*) ;
 TYPE_8__ const* FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char,char,char,char) ;
 scalar_t__ VAR_0 ;
 TYPE_7__* FUNC_3 (int ) ;
 TYPE_7__* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_8__ const*) ;
 TYPE_7__* FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static block_t *FUNC_9( demux_t *VAR_1, uint32_t VAR_2,
                                 const MP4_Box_t *VAR_3 )
{
    struct heif_private_t *VAR_4 = (void *) VAR_1->p_sys;
    block_t *VAR_5 = ((void*)0);

    MP4_Box_t *VAR_6 = FUNC_1( VAR_4->p_root, "meta/iloc" );
    if( !VAR_6 )
        return VAR_5;

    for( uint32_t VAR_7=0; VAR_7<FUNC_0(VAR_6)->i_item_count; VAR_7++ )
    {
        if( FUNC_0(VAR_6)->p_items[VAR_7].i_item_id != VAR_2 )
            continue;

        block_t **VAR_8 = &VAR_5;


        if( VAR_3 )
        {
            *VAR_8 = FUNC_3( VAR_3->data.p_binary->i_blob );
            if( *VAR_8 )
            {
                FUNC_5( (*VAR_8)->p_buffer,
                        VAR_3->data.p_binary->p_blob,
                        VAR_3->data.p_binary->i_blob );
                VAR_8 = &((*VAR_8)->p_next);
            }
        }

        for( uint16_t VAR_9=0; VAR_9<FUNC_0(VAR_6)->p_items[VAR_7].i_extent_count; VAR_9++ )
        {
            uint64_t VAR_10 = FUNC_0(VAR_6)->p_items[VAR_7].i_base_offset +
                                FUNC_0(VAR_6)->p_items[VAR_7].p_extents[VAR_9].i_extent_offset;
            uint64_t VAR_11 = FUNC_0(VAR_6)->p_items[VAR_7].p_extents[VAR_9].i_extent_length;

            if( FUNC_0(VAR_6)->p_items[VAR_7].i_construction_method < 2 )
            {

                if( FUNC_0(VAR_6)->p_items[VAR_7].i_construction_method == 1 )
                {
                    MP4_Box_t *VAR_12 = FUNC_1( VAR_4->p_root, "meta/idat" );
                    if(!VAR_12)
                        break;
                    VAR_10 += VAR_12->i_pos + FUNC_6(VAR_12);
                }

                if( FUNC_8( VAR_1->s, VAR_10 ) != VAR_0 )
                    break;
                *VAR_8 = FUNC_7( VAR_1->s, VAR_11 );
            }

            else if( FUNC_0(VAR_6)->p_items[VAR_7].i_construction_method == 2 )
            {

                uint32_t VAR_13 = FUNC_0(VAR_6)->p_items[VAR_7].p_extents[VAR_9].i_extent_index;
                if(VAR_13 == 0)
                    VAR_13 = 1;
                const MP4_Box_t *VAR_14 = FUNC_1( VAR_4->p_root, "meta/iref" );
                if(!VAR_14)
                    break;
                for( const MP4_Box_t *VAR_15 = VAR_14->p_first;
                                      VAR_15; VAR_15 = VAR_15->p_next )
                {
                    if( VAR_15->i_type != FUNC_2('i','l','o','c') ||
                        FUNC_0(VAR_15)->i_from_item_id == VAR_2 )
                        continue;

                    for( uint16_t VAR_16=0; VAR_16< FUNC_0(VAR_15)->i_reference_count; VAR_16++ )
                    {
                        if( --VAR_13 > 0 )
                            continue;
                        if( FUNC_0(VAR_15)->p_references[VAR_16].i_to_item_id != VAR_2 )
                        {
                            *VAR_8 = FUNC_9(VAR_1,
                                            FUNC_0(VAR_15)->p_references[VAR_16].i_to_item_id,
                                            ((void*)0));
                        }
                    }

                    break;
                }
            }

            while( *VAR_8 )
                VAR_8 = &((*VAR_8)->p_next);
        }
        break;
    }

    if( VAR_5 )
        VAR_5 = FUNC_4( VAR_5 );

    return VAR_5;
}
