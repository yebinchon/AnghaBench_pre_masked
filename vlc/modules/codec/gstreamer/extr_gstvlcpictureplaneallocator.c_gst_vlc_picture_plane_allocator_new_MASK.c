
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int decoder_t ;
struct TYPE_4__ {int * p_dec; } ;
typedef TYPE_1__ GstVlcPicturePlaneAllocator ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int *) ;

GstVlcPicturePlaneAllocator* FUNC_1(
        decoder_t *VAR_1 )
{
    GstVlcPicturePlaneAllocator *VAR_2;

    VAR_2 = FUNC_0( VAR_0, ((void*)0));
    VAR_2->p_dec = VAR_1;

    return VAR_2;
}
