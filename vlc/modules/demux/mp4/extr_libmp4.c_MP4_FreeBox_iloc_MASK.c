
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {struct TYPE_9__* p_extents; } ;
struct TYPE_8__ {size_t i_item_count; TYPE_4__* p_items; } ;
struct TYPE_6__ {TYPE_3__* p_iloc; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;
typedef TYPE_3__ MP4_Box_data_iloc_t ;


 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    MP4_Box_data_iloc_t *VAR_1 = VAR_0->data.p_iloc;
    for( uint32_t VAR_2=0; VAR_2<VAR_1->i_item_count; VAR_2++ )
        FUNC_0( VAR_1->p_items[VAR_2].p_extents );
    FUNC_0( VAR_1->p_items );
}
