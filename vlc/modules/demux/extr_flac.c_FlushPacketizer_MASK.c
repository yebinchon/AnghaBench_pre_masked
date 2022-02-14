
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * (* pf_packetize ) (TYPE_1__*,int *) ;int (* pf_flush ) (TYPE_1__*) ;} ;
typedef TYPE_1__ decoder_t ;
typedef int block_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3( decoder_t *VAR_0 )
{
    if( VAR_0->pf_flush )
        VAR_0->pf_flush( VAR_0 );
    else
    {
        block_t *VAR_1;
        while( (VAR_1 = VAR_0->pf_packetize( VAR_0, ((void*)0) )) )
            FUNC_0( VAR_1 );
    }
}
