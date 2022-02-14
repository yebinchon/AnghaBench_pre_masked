
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_mux_t ;
struct TYPE_13__ {int i_entry_count; TYPE_1__* entry; } ;
struct TYPE_15__ {TYPE_2__ idx1; } ;
typedef TYPE_4__ sout_mux_sys_t ;
struct TYPE_16__ {TYPE_6__* b; } ;
typedef TYPE_5__ bo_t ;
struct TYPE_17__ {int p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_12__ {char* fcc; int i_flags; int i_pos; int i_length; } ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static block_t * FUNC_4( sout_mux_t *VAR_0 )
{
    sout_mux_sys_t *VAR_1 = VAR_0->p_sys;
    uint32_t VAR_2;
    bo_t VAR_3;

    VAR_2 = 16 * VAR_1->idx1.i_entry_count + 8;

    if (!VAR_2 || !FUNC_2( &VAR_3, VAR_2 ) )
        return ((void*)0);
    FUNC_3( VAR_3.b->p_buffer, 0, VAR_2);

    FUNC_1( &VAR_3, "idx1" );
    FUNC_0( &VAR_3, VAR_2 - 8);

    for( unsigned VAR_4 = 0; VAR_4 < VAR_1->idx1.i_entry_count; VAR_4++ )
    {
        FUNC_1( &VAR_3, VAR_1->idx1.entry[VAR_4].fcc );
        FUNC_0( &VAR_3, VAR_1->idx1.entry[VAR_4].i_flags );
        FUNC_0( &VAR_3, VAR_1->idx1.entry[VAR_4].i_pos );
        FUNC_0( &VAR_3, VAR_1->idx1.entry[VAR_4].i_length );
    }

    return( VAR_3.b );
}
