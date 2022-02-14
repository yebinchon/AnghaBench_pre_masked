
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int i_bytes_per_frame; int i_frame_length; int i_rate; int i_format; } ;
typedef TYPE_1__ audio_sample_format_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,char*,char const*,char*,int ,int ,int ,int ) ;

void FUNC_2( vlc_object_t *VAR_0, const char *VAR_1,
                       const audio_sample_format_t *VAR_2 )
{
    FUNC_1( VAR_0, "%s '%4.4s' %d Hz %s frame=%u samples/%u bytes", VAR_1,
             (char *)&VAR_2->i_format, VAR_2->i_rate,
             FUNC_0( VAR_2 ),
             VAR_2->i_frame_length, VAR_2->i_bytes_per_frame );
}
