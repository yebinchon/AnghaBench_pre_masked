
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_8__ {int i_end; int i_start; int * p_buffer; } ;
typedef TYPE_2__ stream_track_t ;
struct TYPE_9__ {int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_7__ {int i_bytes; int i_read_time; int i_read_count; } ;
struct TYPE_10__ {size_t i_tk; int i_used; int i_offset; TYPE_1__ stat; TYPE_2__* tk; } ;
typedef TYPE_4__ stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,char*,int,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int *,int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(stream_t *VAR_3)
{
    stream_sys_t *VAR_4 = VAR_3->p_sys;
    stream_track_t *VAR_5 = &VAR_4->tk[VAR_4->i_tk];


    int VAR_6 =
        FUNC_0(VAR_4->i_used, VAR_0 -
               (VAR_5->i_end - VAR_5->i_start - VAR_4->i_offset));

    if (VAR_6 <= 0) return VAR_2;






    vlc_tick_t VAR_7 = FUNC_4();
    while (VAR_6 > 0)
    {
        int VAR_8 = VAR_5->i_end % VAR_0;
        int VAR_9;

        if (FUNC_2())
            return VAR_1;

        VAR_9 = FUNC_0(VAR_6, VAR_0 - VAR_8);
        VAR_9 = FUNC_3(VAR_3->s, &VAR_5->p_buffer[VAR_8], VAR_9);


        if (VAR_9 < 0)
        {
            continue;
        }
        else if (VAR_9 == 0)
            return VAR_2;


        VAR_5->i_end += VAR_9;


        if (VAR_5->i_start + VAR_0 < VAR_5->i_end)
        {
            unsigned VAR_10 = VAR_5->i_end - VAR_5->i_start - VAR_0;

            VAR_5->i_start += VAR_10;
            VAR_4->i_offset -= VAR_10;
        }

        VAR_6 -= VAR_9;
        VAR_4->i_used -= VAR_9;

        VAR_4->stat.i_bytes += VAR_9;
        VAR_4->stat.i_read_count++;
    }

    VAR_4->stat.i_read_time += FUNC_4() - VAR_7;
    return VAR_2;
}
