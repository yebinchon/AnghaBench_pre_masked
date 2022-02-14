
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {int pf_encode_audio; int pf_encode_video; } ;
typedef TYPE_1__ encoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0( vlc_object_t *VAR_3 )
{
    encoder_t *VAR_4 = (encoder_t *)VAR_3;

    VAR_4->pf_encode_video = VAR_1;
    VAR_4->pf_encode_audio = VAR_0;

    return VAR_2;
}
