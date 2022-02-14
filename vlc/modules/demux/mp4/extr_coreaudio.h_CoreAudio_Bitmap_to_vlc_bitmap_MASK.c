
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct CoreAudio_layout_s {int i_channels_bitmap; } ;
struct TYPE_3__ {int i_bitmap; int i_vlc_bitmap; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static inline int FUNC_1( const struct CoreAudio_layout_s *VAR_5,
                                                  uint16_t *VAR_6,
                                                  uint8_t *VAR_7,
                                                  const uint32_t **VAR_8 )
{
    *VAR_8 = VAR_4;
    *VAR_6 = 0;
    *VAR_7 = 0;
    for (uint8_t VAR_9=0;VAR_9<FUNC_0(VAR_1);VAR_9++)
    {
        if ( VAR_1[VAR_9].i_bitmap & VAR_5->i_channels_bitmap )
        {
            if ( (VAR_1[VAR_9].i_vlc_bitmap & *VAR_6) ||
                 *VAR_7 >= VAR_0 )
            {

                *VAR_6 = 0;
                *VAR_7 = 0;
                return VAR_2;
            }
            *VAR_6 |= VAR_1[VAR_9].i_vlc_bitmap;
        }
    }
    return VAR_3;
}
