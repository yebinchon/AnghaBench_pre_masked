
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cvpxpic_ctx {int cvpx; } ;
struct TYPE_3__ {int * context; } ;
typedef TYPE_1__ picture_t ;
typedef int CVPixelBufferRef ;


 int FUNC_0 (int ) ;

CVPixelBufferRef
FUNC_1(picture_t *VAR_0)
{
    FUNC_0(VAR_0->context != ((void*)0));
    return ((struct cvpxpic_ctx *)VAR_0->context)->cvpx;
}
