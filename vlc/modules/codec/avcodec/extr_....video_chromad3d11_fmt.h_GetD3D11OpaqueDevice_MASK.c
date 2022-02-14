
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int * opaque; } ;
typedef TYPE_1__ vlc_decoder_device ;
typedef int d3d11_decoder_device_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline d3d11_decoder_device_t *FUNC_0(vlc_decoder_device *VAR_1)
{
    if (VAR_1 == ((void*)0) || VAR_1->type != VAR_0)
        return ((void*)0);
    return VAR_1->opaque;
}
