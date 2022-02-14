
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_19__ {int p_sys; } ;
struct TYPE_20__ {int b_absolute; scalar_t__ i_start; scalar_t__ i_stop; int b_ephemer; TYPE_1__ updater; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_21__ {scalar_t__ i_end; scalar_t__ i_start; int * p_segment; } ;
typedef TYPE_3__ stl_sg_t ;
struct TYPE_22__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_23__ {size_t cct; int i_fps; TYPE_3__* groups; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_24__ {size_t i_buffer; int i_flags; size_t* p_buffer; scalar_t__ i_dts; scalar_t__ i_pts; scalar_t__ i_length; } ;
typedef TYPE_6__ block_t ;
struct TYPE_18__ {char* str; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,size_t*,char const*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_6__*) ;
 TYPE_11__* VAR_7 ;
 TYPE_2__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(decoder_t *VAR_8, block_t *VAR_9)
{
    if (VAR_9 == ((void*)0))
        return VAR_4;

    decoder_sys_t *VAR_10 = VAR_8->p_sys;

    if(VAR_9->i_buffer < VAR_3)
        VAR_9->i_flags |= VAR_0;

    if(VAR_9->i_flags & (VAR_0|VAR_1))
    {
        FUNC_2(VAR_8->p_sys);

        if(VAR_9->i_flags & VAR_0)
        {
            FUNC_3(VAR_9);
            return VAR_4;
        }
    }

    const char *VAR_11 = VAR_7[VAR_10->cct - VAR_2].str;
    for (size_t VAR_12 = 0; VAR_12 < VAR_9->i_buffer / VAR_3; VAR_12++)
    {
        stl_sg_t *VAR_13 = &VAR_10->groups[VAR_9->p_buffer[0]];
        if(FUNC_1(VAR_13, &VAR_9->p_buffer[VAR_12 * VAR_3], VAR_11, VAR_10->i_fps) &&
           VAR_13->p_segment != ((void*)0) )
        {

            subpicture_t *VAR_14 = FUNC_4(VAR_8);
            if( VAR_14 )
            {
                FUNC_0(VAR_13, VAR_14->updater.p_sys );

                VAR_14->b_absolute = 0;

                if(VAR_13->i_end != VAR_6 && VAR_13->i_start >= VAR_9->i_dts)
                {
                    VAR_14->i_start = VAR_5 + VAR_13->i_start;
                    VAR_14->i_stop = VAR_5 + VAR_13->i_end;
                }
                else
                {
                    VAR_14->i_start = VAR_9->i_pts;
                    VAR_14->i_stop = VAR_9->i_pts + VAR_9->i_length;
                    VAR_14->b_ephemer = (VAR_9->i_length == VAR_6);
                }
                FUNC_5(VAR_8, VAR_14);
            }
        }
    }

    FUNC_2(VAR_10);

    FUNC_3(VAR_9);
    return VAR_4;
}
