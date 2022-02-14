
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; int opaque; } ;
typedef TYPE_2__ vlc_decoder_device ;
struct TYPE_11__ {int i_chroma; } ;
struct TYPE_13__ {scalar_t__ p_sys; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
typedef int filter_t ;
typedef int VADisplay ;
struct TYPE_14__ {int lock; TYPE_2__* dec_device; int * owner; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_9__ VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (scalar_t__,int *) ;

vlc_decoder_device *
FUNC_8(filter_t *VAR_2, VADisplay *VAR_3)
{

    picture_t *VAR_4 = FUNC_1(VAR_2);
    if (!VAR_4)
        return ((void*)0);

    if (!FUNC_6(VAR_4->format.i_chroma))
    {
        FUNC_2(VAR_4);
        return ((void*)0);
    }

    vlc_decoder_device *VAR_5 = ((void*)0);

    FUNC_4(&VAR_1.lock);
    if (VAR_1.dec_device != ((void*)0))
    {
        VAR_5 = FUNC_3(VAR_1.dec_device);
        *VAR_3 = VAR_5->opaque;
    }
    else
    {
        VAR_1.owner = VAR_2;
        VAR_1.dec_device = VAR_5 = VAR_4->p_sys ?
            FUNC_7(VAR_4->p_sys, VAR_3) : ((void*)0);
        FUNC_0(VAR_5 == ((void*)0) || VAR_5->type == VAR_0);
    }
    FUNC_5(&VAR_1.lock);
    FUNC_2(VAR_4);

    return VAR_5;
}
