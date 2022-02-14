
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int i_rate; int i_bitspersample; int i_blockalign; int i_channels; } ;
struct TYPE_5__ {int i_bitrate; int p_extra; int i_extra; TYPE_1__ audio; int i_codec; } ;
typedef TYPE_2__ es_format_t ;
typedef int bo_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static bo_t *FUNC_5(es_format_t *VAR_0, const char *VAR_1)
{
    bo_t *VAR_2 = FUNC_3(VAR_1);
    if(!VAR_2)
        return ((void*)0);

    uint16_t VAR_3;
    FUNC_4(VAR_0->i_codec, &VAR_3);
    FUNC_0(VAR_2, VAR_3);
    FUNC_0(VAR_2, VAR_0->audio.i_channels);
    FUNC_1(VAR_2, VAR_0->audio.i_rate);
    FUNC_1(VAR_2, VAR_0->i_bitrate / 8);
    FUNC_0(VAR_2, VAR_0->audio.i_blockalign);
    FUNC_0(VAR_2, VAR_0->audio.i_bitspersample);
    FUNC_0(VAR_2, VAR_0->i_extra);

    FUNC_2(VAR_2, VAR_0->i_extra, VAR_0->p_extra);

    return VAR_2;
}
