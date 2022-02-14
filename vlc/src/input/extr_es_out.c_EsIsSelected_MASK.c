
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int i_codec; } ;
struct TYPE_6__ {int * p_dec; TYPE_3__ fmt; TYPE_1__* p_master; } ;
typedef TYPE_2__ es_out_id_t ;
struct TYPE_5__ {scalar_t__ p_dec; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__,int ,int,int*) ;

__attribute__((used)) static bool FUNC_2( es_out_id_t *VAR_0 )
{
    if( VAR_0->p_master )
    {
        bool VAR_1 = 0;
        if( VAR_0->p_master->p_dec )
        {
            int VAR_2 = FUNC_0( &VAR_0->fmt );
            FUNC_1( VAR_0->p_master->p_dec, VAR_0->fmt.i_codec,
                                     VAR_2, &VAR_1 );
        }
        return VAR_1;
    }
    else
    {
        return VAR_0->p_dec != ((void*)0);
    }
}
