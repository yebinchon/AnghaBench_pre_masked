
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_13__ {int jitter; scalar_t__ last_seq; TYPE_4__* blocks; } ;
typedef TYPE_1__ rtp_source_t ;
struct TYPE_14__ {unsigned int srcc; TYPE_1__** srcv; } ;
typedef TYPE_2__ rtp_session_t ;
struct TYPE_15__ {int frequency; } ;
typedef TYPE_3__ rtp_pt_t ;
typedef scalar_t__ int16_t ;
typedef int demux_t ;
struct TYPE_16__ {scalar_t__ i_pts; } ;
typedef TYPE_4__ block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__ const*,TYPE_1__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__ const*,TYPE_1__*,TYPE_4__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 () ;

bool FUNC_6 (demux_t *VAR_1, const rtp_session_t *VAR_2,
                  vlc_tick_t *restrict VAR_3)
{
    vlc_tick_t VAR_4 = FUNC_5 ();
    bool VAR_5 = 0;

    *VAR_3 = VAR_0;

    for (unsigned VAR_6 = 0, VAR_7 = VAR_2->srcc; VAR_6 < VAR_7; VAR_6++)
    {
        rtp_source_t *VAR_8 = VAR_2->srcv[VAR_6];
        block_t *VAR_9;
        while (((VAR_9 = VAR_8->blocks)) != ((void*)0))
        {
            if ((int16_t)(FUNC_3 (VAR_9) - (VAR_8->last_seq + 1)) <= 0)
            {
                FUNC_1 (VAR_1, VAR_2, VAR_8);
                continue;
            }




            vlc_tick_t VAR_10;
            const rtp_pt_t *VAR_11 = FUNC_2 (VAR_2, VAR_8, VAR_9, ((void*)0));
            if (VAR_11)
                VAR_10 = FUNC_4(3 * VAR_8->jitter, VAR_11->frequency);
            else
                VAR_10 = 0;


            if (VAR_10 < FUNC_0(25))
                VAR_10 = FUNC_0(25);






            VAR_10 += VAR_9->i_pts;
            if (VAR_4 >= VAR_10)
            {
                FUNC_1 (VAR_1, VAR_2, VAR_8);
                continue;
            }
            if (*VAR_3 > VAR_10)
                *VAR_3 = VAR_10;
            VAR_5 = 1;
            break;
        }
    }
    return VAR_5;
}
