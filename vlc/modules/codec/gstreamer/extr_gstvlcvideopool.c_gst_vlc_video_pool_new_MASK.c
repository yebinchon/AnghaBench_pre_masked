
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_4__ {int * p_dec; int p_allocator; } ;
typedef TYPE_1__ GstVlcVideoPool ;
typedef int GstAllocator ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

GstVlcVideoPool* FUNC_4(
    GstAllocator *VAR_1, decoder_t *VAR_2 )
{
    GstVlcVideoPool *VAR_3;

    if( !FUNC_0( VAR_1 ))
    {
        FUNC_3( VAR_2, "unspported allocator for pool" );
        return ((void*)0);
    }

    VAR_3 = FUNC_1( VAR_0, ((void*)0) );
    VAR_3->p_allocator = FUNC_2( VAR_1 );
    VAR_3->p_dec = VAR_2;

    return VAR_3;
}
