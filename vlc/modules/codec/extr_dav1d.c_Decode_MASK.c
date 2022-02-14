
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_25__ {int b_progressive; int date; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_26__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_27__ {int c; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_28__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_23__ {scalar_t__ timestamp; } ;
struct TYPE_30__ {scalar_t__ sz; TYPE_1__ m; } ;
struct TYPE_24__ {int timestamp; } ;
struct TYPE_29__ {TYPE_2__ m; TYPE_3__* allocator_data; int member_0; } ;
typedef TYPE_7__ Dav1dPicture ;
typedef TYPE_8__ Dav1dData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_8__*,int ,int ,int ,TYPE_6__*) ;
 int FUNC_2 (int ,TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ,TYPE_8__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,char*,int) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(decoder_t *VAR_8, block_t *VAR_9)
{
    decoder_sys_t *VAR_10 = VAR_8->p_sys;

    if (VAR_9 && VAR_9->i_flags & (VAR_0))
    {
        FUNC_0(VAR_9);
        return VAR_4;
    }

    bool VAR_11 = 0;
    Dav1dData VAR_12;
    Dav1dData *VAR_13 = ((void*)0);

    if (VAR_9)
    {
        VAR_13 = &VAR_12;
        if (FUNC_9(FUNC_1(&VAR_12, VAR_9->p_buffer, VAR_9->i_buffer,
                                     VAR_7, VAR_9) != 0))
        {
            FUNC_0(VAR_9);
            return VAR_3;
        }
        vlc_tick_t VAR_14 = VAR_9->i_pts == VAR_6 ? VAR_9->i_dts : VAR_9->i_pts;
        VAR_13->m.timestamp = VAR_14;
        VAR_11 = (VAR_9->i_flags & VAR_1);
    }

    Dav1dPicture VAR_15 = { 0 };

    bool VAR_16 = 0;
    int VAR_17 = VAR_4;
    int VAR_18;
    do {
        if( VAR_13 )
        {
            VAR_18 = FUNC_4(VAR_10->c, VAR_13);
            if (VAR_18 < 0 && VAR_18 != -VAR_2)
            {
                FUNC_6(VAR_8, "Decoder feed error %d!", VAR_18);
                VAR_17 = VAR_5;
                break;
            }
        }

        VAR_18 = FUNC_2(VAR_10->c, &VAR_15);
        if (VAR_18 == 0)
        {
            picture_t *VAR_19 = VAR_15.allocator_data;
            picture_t *VAR_20 = FUNC_7(VAR_19);
            if (FUNC_9(VAR_20 == ((void*)0)))
            {
                VAR_17 = VAR_5;
                FUNC_8(VAR_19);
                break;
            }
            VAR_20->b_progressive = 1;
            VAR_20->date = VAR_15.m.timestamp;

            FUNC_5(VAR_8, VAR_20);
            FUNC_3(&VAR_15);
        }
        else if (VAR_18 != -VAR_2)
        {
            FUNC_6(VAR_8, "Decoder error %d!", VAR_18);
            VAR_17 = VAR_5;
            break;
        }


        if(!VAR_16 && (VAR_18 == -VAR_2 || VAR_18 == 0) && (VAR_13 == ((void*)0)||VAR_11))
        {
            VAR_16 = 1;
            VAR_18 = 0;
        }
    } while (VAR_18 == 0 || (VAR_13 && VAR_13->sz != 0));


    return VAR_17;
}
