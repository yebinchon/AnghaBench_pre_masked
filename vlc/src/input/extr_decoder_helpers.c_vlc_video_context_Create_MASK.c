
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int private_type; size_t private_size; struct vlc_video_context_operations const* ops; int * device; int rc; } ;
typedef TYPE_1__ vlc_video_context ;
typedef int vlc_decoder_device ;
struct vlc_video_context_operations {int dummy; } ;
typedef enum vlc_video_context_type { ____Placeholder_vlc_video_context_type } vlc_video_context_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

vlc_video_context * FUNC_5(vlc_decoder_device *VAR_1,
                                          enum vlc_video_context_type VAR_2,
                                          size_t VAR_3,
                                          const struct vlc_video_context_operations *VAR_4)
{
    FUNC_0(VAR_2 != VAR_0);
    vlc_video_context *VAR_5 = FUNC_1(sizeof(*VAR_5) + VAR_3);
    if (FUNC_2(VAR_5 == ((void*)0)))
        return ((void*)0);
    FUNC_3( &VAR_5->rc );
    VAR_5->private_type = VAR_2;
    VAR_5->private_size = VAR_3;
    VAR_5->device = VAR_1;
    if (VAR_5->device)
        FUNC_4( VAR_5->device );
    VAR_5->ops = VAR_4;
    return VAR_5;
}
