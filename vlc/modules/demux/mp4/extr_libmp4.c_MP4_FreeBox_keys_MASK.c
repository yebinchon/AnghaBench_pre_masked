
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {struct TYPE_9__* psz_value; } ;
struct TYPE_7__ {TYPE_1__* p_keys; } ;
struct TYPE_8__ {TYPE_2__ data; } ;
struct TYPE_6__ {size_t i_entry_count; TYPE_4__* p_entries; } ;
typedef TYPE_3__ MP4_Box_t ;


 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    for( uint32_t VAR_1=0; VAR_1<VAR_0->data.p_keys->i_entry_count; VAR_1++ )
        FUNC_0( VAR_0->data.p_keys->p_entries[VAR_1].psz_value );
    FUNC_0( VAR_0->data.p_keys->p_entries );
}
