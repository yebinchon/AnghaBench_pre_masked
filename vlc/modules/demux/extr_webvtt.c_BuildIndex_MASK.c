
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct index_entry_s {int dummy; } ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_6__ {size_t i_count; TYPE_4__* p_array; } ;
struct TYPE_8__ {TYPE_1__ index; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_9__ {int active; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,size_t,int,int ) ;

__attribute__((used)) static void FUNC_1( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;


    FUNC_0( VAR_2->index.p_array, VAR_2->index.i_count,
           sizeof(struct index_entry_s), VAR_0 );
    unsigned VAR_3 = 0;
    for( size_t VAR_4=0; VAR_4<VAR_2->index.i_count; VAR_4++ )
    {
        if( VAR_2->index.p_array[VAR_4].active )
            VAR_2->index.p_array[VAR_4].active = ++VAR_3;
        else
            VAR_2->index.p_array[VAR_4].active = --VAR_3;
    }
}
