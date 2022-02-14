
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int b_xds; int i_class; int b_future; int b_meta_changed; int meta; TYPE_1__** pkt; scalar_t__ i_type; } ;
typedef TYPE_2__ xds_t ;
struct TYPE_4__ {int b_started; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1( xds_t *VAR_1 )
{
    VAR_1->b_xds = 0;
    VAR_1->i_class = VAR_0;
    VAR_1->i_type = 0;
    VAR_1->b_future = 0;
    for( int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++ )
    {
        for( int VAR_3 = 0; VAR_3 < 128; VAR_3++ )
            VAR_1->pkt[VAR_2][VAR_3].b_started = 0;
    }
    VAR_1->b_meta_changed = 0;
    FUNC_0( &VAR_1->meta, 0, sizeof(VAR_1->meta) );
}
