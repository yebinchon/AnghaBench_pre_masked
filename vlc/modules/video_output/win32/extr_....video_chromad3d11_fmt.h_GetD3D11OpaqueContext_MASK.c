
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_video_context ;
struct TYPE_5__ {scalar_t__ type; int * opaque; } ;
typedef TYPE_1__ vlc_decoder_device ;
typedef int d3d11_decoder_device_t ;


 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static inline d3d11_decoder_device_t *FUNC_5(vlc_video_context *VAR_1)
{
    vlc_decoder_device *VAR_2 = VAR_1 ? FUNC_4(VAR_1) : ((void*)0);
    if (FUNC_2(VAR_2 == ((void*)0)))
        return ((void*)0);
    d3d11_decoder_device_t *VAR_3 = ((void*)0);
    if (VAR_2->type == VAR_0)
    {
        FUNC_1(VAR_2->opaque != ((void*)0));
        VAR_3 = FUNC_0(VAR_2);
    }
    FUNC_3(VAR_2);
    return VAR_3;
}
