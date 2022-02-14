
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_tracks; int i_first_track; int i_last_track; TYPE_2__* p_sectors; } ;
typedef TYPE_1__ vcddev_toc_t ;
struct TYPE_5__ {int i_control; scalar_t__ i_lba; } ;
typedef TYPE_2__ vcddev_sector_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(vcddev_toc_t *VAR_2,
                             int *VAR_3, int *VAR_4)
{
    if( VAR_2->i_tracks < 1 )
        return 0;

    int VAR_5 = VAR_2->i_first_track;
    int VAR_6 = VAR_2->i_last_track;
    for(int VAR_7=VAR_5; VAR_7<VAR_2->i_tracks; VAR_7++)
    {
        if((VAR_2->p_sectors[VAR_7 - 1].i_control & VAR_0) == 0)
            break;
        VAR_5++;
    }
    for(int VAR_8=VAR_6; VAR_8 > 0; VAR_8--)
    {
        if((VAR_2->p_sectors[VAR_8 - 1].i_control & VAR_0) == 0)
            break;
        VAR_6--;
    }



    do
    {
        vcddev_sector_t *VAR_9 = &VAR_2->p_sectors[VAR_6 - VAR_2->i_first_track];
        vcddev_sector_t *VAR_10 = &VAR_2->p_sectors[VAR_2->i_tracks];
        if(VAR_10->i_lba > VAR_9->i_lba || VAR_6 <= VAR_5)
            break;

        VAR_6 = VAR_6 - 1;
        VAR_2->i_last_track = VAR_6;
        VAR_9->i_lba -= VAR_1;
        VAR_2->i_tracks--;
    } while( VAR_6 > VAR_5 );

    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return (VAR_6 >= VAR_5) ? VAR_6 - VAR_5 + 1 : 0;
}
