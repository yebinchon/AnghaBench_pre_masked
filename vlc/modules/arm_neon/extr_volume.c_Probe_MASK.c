
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {scalar_t__ format; int amplify; } ;
typedef TYPE_1__ audio_volume_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(vlc_object_t *VAR_4)
{
    audio_volume_t *VAR_5 = (audio_volume_t *)VAR_4;

    if (!FUNC_0())
        return VAR_2;
    if (VAR_5->format == VAR_1)
        VAR_5->amplify = VAR_0;
    else
        return VAR_2;
    return VAR_3;
}
