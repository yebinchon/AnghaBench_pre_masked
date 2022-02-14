
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_6__ {int const i_frame_length; int const i_bytes_per_frame; int i_rate; } ;
struct TYPE_7__ {TYPE_1__ audio; } ;
struct mock_track {TYPE_2__ fmt; } ;
typedef int int64_t ;
typedef int demux_t ;
struct TYPE_8__ {int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (int const) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static block_t *
FUNC_3(demux_t *VAR_0, struct mock_track *VAR_1, vlc_tick_t VAR_2)
{
    const int64_t VAR_3 =
        FUNC_2(VAR_2, VAR_1->fmt.audio.i_rate);
    const int64_t VAR_4 = VAR_3 / VAR_1->fmt.audio.i_frame_length
                        * VAR_1->fmt.audio.i_bytes_per_frame;
    block_t *VAR_5 = FUNC_0(VAR_4);
    if (!VAR_5)
        return ((void*)0);
    FUNC_1(VAR_5->p_buffer, 0, VAR_5->i_buffer);
    return VAR_5;
    (void) VAR_0;
}
