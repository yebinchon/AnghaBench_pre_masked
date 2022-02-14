
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_16__ {int out; int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_17__ {double frame_rate_den; int frame_rate_num; int dts; TYPE_7__* p_packetizer; int * p_es; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_18__ {scalar_t__ i_dts; int i_flags; scalar_t__ i_length; int i_pts; struct TYPE_18__* p_next; } ;
typedef TYPE_4__ block_t ;
struct TYPE_15__ {double i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_14__ {int b_packetized; TYPE_1__ video; } ;
struct TYPE_19__ {TYPE_11__ fmt_out; TYPE_4__* (* pf_packetize ) (TYPE_7__*,TYPE_4__**) ;} ;


 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,int,double) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,scalar_t__ const) ;
 int * FUNC_5 (int ,TYPE_11__*) ;
 int FUNC_6 (int ,int *,TYPE_4__*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (TYPE_2__*,char*,double) ;
 unsigned int FUNC_9 (double) ;
 TYPE_4__* FUNC_10 (TYPE_7__*,TYPE_4__**) ;
 TYPE_4__* FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12( demux_t *VAR_6)
{
    demux_sys_t *VAR_7 = VAR_6->p_sys;
    block_t *VAR_8, *VAR_9;
    bool VAR_10 = 0;

    VAR_8 = FUNC_11( VAR_6->s, VAR_2 );
    if( VAR_8 == ((void*)0) )
    {
        VAR_10 = 1;
    }
    else
    {
        VAR_8->i_dts = FUNC_2( &VAR_7->dts );
    }

    while( (VAR_9 = VAR_7->p_packetizer->pf_packetize( VAR_7->p_packetizer,
                                                             VAR_8 ? &VAR_8 : ((void*)0) )) )
    {
        while( VAR_9 )
        {
            block_t *VAR_11 = VAR_9->p_next;

            VAR_9->p_next = ((void*)0);

            if( VAR_8 )
            {
                VAR_8->i_dts = FUNC_2( &VAR_7->dts );
                VAR_8->i_pts = VAR_5;
            }

            if( VAR_7->p_es == ((void*)0) )
            {
                VAR_7->p_packetizer->fmt_out.b_packetized = 1;
                VAR_7->p_es = FUNC_5( VAR_6->out, &VAR_7->p_packetizer->fmt_out );
                if( !VAR_7->p_es )
                {
                    FUNC_0( VAR_9 );
                    return VAR_3;
                }
            }


            bool VAR_12 = VAR_9->i_flags & VAR_0;
            const vlc_tick_t VAR_13 = VAR_9->i_dts;
            const vlc_tick_t VAR_14 = VAR_9->i_length;
            FUNC_6( VAR_6->out, VAR_7->p_es, VAR_9 );
            if( VAR_12 )
            {
                if( VAR_7->p_packetizer->fmt_out.video.i_frame_rate_base &&
                    VAR_7->p_packetizer->fmt_out.video.i_frame_rate_base != VAR_7->frame_rate_den &&
                    VAR_7->p_packetizer->fmt_out.video.i_frame_rate &&
                    VAR_7->p_packetizer->fmt_out.video.i_frame_rate_base != VAR_7->frame_rate_num )
                {
                    VAR_7->frame_rate_num = VAR_7->p_packetizer->fmt_out.video.i_frame_rate;
                    VAR_7->frame_rate_den = VAR_7->p_packetizer->fmt_out.video.i_frame_rate_base;
                    FUNC_1( &VAR_7->dts, 2 * VAR_7->frame_rate_num, VAR_7->frame_rate_den );
                    FUNC_8( VAR_6, "using %.2f fps", (double) VAR_7->frame_rate_num / VAR_7->frame_rate_den );
                }

                FUNC_7( VAR_6->out, FUNC_2( &VAR_7->dts ) );
                unsigned VAR_15;
                if( VAR_14 > 0 )
                {
                    VAR_15 = FUNC_9( (double)VAR_14 * 2 * VAR_7->frame_rate_num /
                                  ( VAR_7->frame_rate_den * VAR_1 ) );
                }
                else VAR_15 = 2;
                if( VAR_15 <= 6 )
                    FUNC_3( &VAR_7->dts, VAR_15 );
                else
                    FUNC_4( &VAR_7->dts, VAR_13 );
            }

            VAR_9 = VAR_11;
        }
    }
    return (VAR_10) ? VAR_3 : VAR_4;
}
