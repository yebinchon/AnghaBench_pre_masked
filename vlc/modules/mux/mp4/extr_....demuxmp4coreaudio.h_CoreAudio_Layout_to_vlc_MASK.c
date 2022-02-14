
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct CoreAudio_layout_s {int i_channels_layout_tag; } ;
struct TYPE_3__ {int layout; int * p_chans_order; int i_vlc_bitmap; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct CoreAudio_layout_s const*,int *,int*,int const**) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_2( const struct CoreAudio_layout_s *VAR_3,
                                           uint16_t *VAR_4,
                                           uint8_t *VAR_5,
                                           const uint32_t **VAR_6 )
{
    if( VAR_3->i_channels_layout_tag == VAR_0 )
        return FUNC_1( VAR_3, VAR_4, VAR_5, VAR_6 );

    for (size_t VAR_7=0;VAR_7<FUNC_0(VAR_1);VAR_7++)
    {
        if(VAR_1[VAR_7].layout == VAR_3->i_channels_layout_tag )
        {
            *VAR_4 = VAR_1[VAR_7].i_vlc_bitmap;
            *VAR_6 = VAR_1[VAR_7].p_chans_order;
            *VAR_5 = VAR_3->i_channels_layout_tag & 0xFF;
            break;
        }
    }
    return VAR_2;
}
