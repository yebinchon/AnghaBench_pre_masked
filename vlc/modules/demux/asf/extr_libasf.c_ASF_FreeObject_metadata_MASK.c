
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t i_record_entries_count; TYPE_3__* record; } ;
struct TYPE_5__ {TYPE_2__ metadata; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_metadata_t ;
struct TYPE_7__ {struct TYPE_7__* p_data; struct TYPE_7__* psz_name; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1( asf_object_t *VAR_0 )
{
    asf_object_metadata_t *VAR_1 = &VAR_0->metadata;

    for( uint32_t VAR_2 = 0; VAR_2 < VAR_1->i_record_entries_count; VAR_2++ )
    {
        FUNC_0( VAR_1->record[VAR_2].psz_name );
        FUNC_0( VAR_1->record[VAR_2].p_data );
    }
    FUNC_0( VAR_1->record );
}
