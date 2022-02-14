
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_next_block_flags; scalar_t__ es; } ;
typedef TYPE_1__ ps_track_t ;
typedef int es_out_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_1( ps_track_t *VAR_4, es_out_t *VAR_5 )
{
    bool VAR_6;
    for( size_t VAR_7 = 0; VAR_7 < VAR_2; VAR_7++ )
    {
        ps_track_t *VAR_8 = &VAR_4[VAR_7];
        if( VAR_8->es &&
                FUNC_0( VAR_5, VAR_1, VAR_8->es, &VAR_6 ) == VAR_3
                && VAR_6 )
        {
            VAR_8->i_next_block_flags |= VAR_0;
        }
    }
}
