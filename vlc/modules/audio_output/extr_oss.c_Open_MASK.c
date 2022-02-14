
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int device_select; int stop; int start; TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_9__ {int fd; int device; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_6 (vlc_object_t *VAR_5)
{
    audio_output_t *VAR_6 = (audio_output_t *)VAR_5;

    aout_sys_t *VAR_7 = FUNC_3 (sizeof (*VAR_7));
    if(FUNC_4( VAR_7 == ((void*)0) ))
        return VAR_3;

    VAR_7->fd = -1;
    VAR_7->device = FUNC_5 (VAR_6, "oss-audio-device");

    VAR_6->sys = VAR_7;
    VAR_6->start = VAR_1;
    VAR_6->stop = VAR_2;
    VAR_6->device_select = VAR_0;
    FUNC_1 (VAR_6, VAR_7->device);
    FUNC_2 (VAR_6);

    FUNC_0 (VAR_6);
    return VAR_4;
}
