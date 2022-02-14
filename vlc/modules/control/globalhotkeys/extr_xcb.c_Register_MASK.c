
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {int i_map; int root; int p_connection; TYPE_3__* p_map; } ;
typedef TYPE_2__ intf_sys_t ;
struct TYPE_7__ {scalar_t__* p_keys; int i_modifier; } ;
typedef TYPE_3__ hotkey_mapping_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1( intf_thread_t *VAR_2 )
{
    intf_sys_t *VAR_3 = VAR_2->p_sys;

    for( int VAR_4 = 0; VAR_4 < VAR_3->i_map; VAR_4++ )
    {
        const hotkey_mapping_t *VAR_5 = &VAR_3->p_map[VAR_4];
        for( int VAR_6 = 0; VAR_5->p_keys[VAR_6] != VAR_1; VAR_6++ )
        {
            FUNC_0( VAR_3->p_connection, 1, VAR_3->root,
                          VAR_5->i_modifier, VAR_5->p_keys[VAR_6],
                          VAR_0, VAR_0 );
        }
    }
}
