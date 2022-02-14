
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_private; scalar_t__ (* pf_validate ) (int ,int *) ;int * (* pf_drain ) (int ) ;} ;
typedef TYPE_1__ packetizer_t ;
typedef int block_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int **) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static block_t *FUNC_4( packetizer_t *VAR_0, block_t **VAR_1 )
{
    block_t *VAR_2 = FUNC_1( VAR_0, VAR_1 );
    if( VAR_2 )
        return VAR_2;

    if( VAR_1 == ((void*)0) && VAR_0->pf_drain )
    {
        VAR_2 = VAR_0->pf_drain( VAR_0->p_private );
        if( VAR_2 && VAR_0->pf_validate( VAR_0->p_private, VAR_2 ) )
        {
            FUNC_0( VAR_2 );
            VAR_2 = ((void*)0);
        }
    }
    return VAR_2;
}
