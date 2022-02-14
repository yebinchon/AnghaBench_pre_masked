
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_bitspersample; scalar_t__ i_rate; scalar_t__ i_channels; } ;
struct TYPE_6__ {TYPE_1__ audio; } ;
typedef TYPE_2__ es_format_t ;



__attribute__((used)) static int FUNC_0( es_format_t *VAR_0, es_format_t *VAR_1 )
{
    return (VAR_0->audio.i_bitspersample != VAR_1->audio.i_bitspersample)
        || (VAR_0->audio.i_rate != VAR_1->audio.i_rate)
        || (VAR_0->audio.i_channels != VAR_1->audio.i_channels);
}
