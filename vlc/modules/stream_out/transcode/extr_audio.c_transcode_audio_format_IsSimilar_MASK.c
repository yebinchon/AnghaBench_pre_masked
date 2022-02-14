
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_rate; scalar_t__ i_physical_channels; } ;
typedef TYPE_1__ audio_format_t ;



__attribute__((used)) static bool FUNC_0( const audio_format_t *VAR_0,
                                              const audio_format_t *VAR_1 )
{
    return
    VAR_0->i_rate == VAR_1->i_rate &&
    VAR_0->i_physical_channels == VAR_1->i_physical_channels;
}
