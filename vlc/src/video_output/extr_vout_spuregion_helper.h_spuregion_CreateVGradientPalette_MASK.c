
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_entries; int * palette; } ;
typedef TYPE_1__ video_palette_t ;
typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static inline void
FUNC_2( video_palette_t *VAR_0, uint8_t VAR_1,
                                  uint32_t VAR_2, uint32_t VAR_3 )
{
    for( uint8_t VAR_4 = 0; VAR_4<VAR_1; VAR_4++ )
    {
        uint32_t VAR_5 = VAR_2 & 0x00FFFFFF;
        uint32_t VAR_6 = VAR_3 & 0x00FFFFFF;

        uint32_t VAR_7 = ((((VAR_5 >> 16) * (VAR_1 - VAR_4)) + (VAR_6 >> 16) * VAR_4)) / VAR_1;
        uint32_t VAR_8 = (((((VAR_5 >> 8) & 0xFF) * (VAR_1 - VAR_4)) + ((VAR_6 >> 8) & 0xFF) * VAR_4)) / VAR_1;
        uint32_t VAR_9 = ((((VAR_5 & 0xFF) * (VAR_1 - VAR_4)) + (VAR_6 & 0xFF) * VAR_4)) / VAR_1;
        uint8_t VAR_10[4] = { FUNC_0( VAR_7,VAR_8,VAR_9 ), VAR_2 >> 24 };
        FUNC_1( VAR_0->palette[VAR_4], VAR_10, 4 );
    }
    VAR_0->i_entries = VAR_1;
}
