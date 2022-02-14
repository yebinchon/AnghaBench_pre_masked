
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_5__ {int i_buffer; scalar_t__* p_buffer; int i_dts; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3( decoder_t *VAR_1, block_t *VAR_2 )
{
    if( VAR_2 == ((void*)0) )
        return VAR_0;

    int VAR_3 = FUNC_0( VAR_1, VAR_2 );







    FUNC_1( VAR_2 );
    return VAR_3;
}
