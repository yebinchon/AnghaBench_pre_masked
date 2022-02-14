
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vcddev_t ;
struct TYPE_4__ {int pf_control; int * pf_seek; int pf_readdir; int * pf_block; int * pf_read; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {scalar_t__ i_cdda_tracks; int * p_toc; int * cddb; int * mbrecord; int i_cdda_last; int i_cdda_first; scalar_t__ cdtextc; int * cdtextv; int * vcddev; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,scalar_t__,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int **,scalar_t__*) ;
 int * FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(vlc_object_t *VAR_5, vcddev_t *VAR_6)
{
    stream_t *VAR_7 = (stream_t *)VAR_5;

    access_sys_t *VAR_8 = FUNC_11(VAR_5, sizeof (*VAR_8));
    if (FUNC_8(VAR_8 == ((void*)0)))
    {
        FUNC_3(VAR_5, VAR_6);
        return VAR_3;
    }

    VAR_8->vcddev = VAR_6;
    VAR_8->p_toc = FUNC_5(VAR_5, VAR_6, 1);
    if (VAR_8->p_toc == ((void*)0))
    {
        FUNC_7(VAR_5, "cannot count tracks");
        goto error;
    }

    VAR_8->i_cdda_tracks = FUNC_2(VAR_8->p_toc, &VAR_8->i_cdda_first, &VAR_8->i_cdda_last);
    if (VAR_8->i_cdda_tracks == 0)
    {
        FUNC_7(VAR_5, "no audio tracks found");
        FUNC_10(VAR_8->p_toc);
        goto error;
    }

    if (FUNC_4(VAR_5, VAR_6, &VAR_8->cdtextv, &VAR_8->cdtextc))
    {
        FUNC_6(VAR_5, "CD-TEXT information missing");
        VAR_8->cdtextv = ((void*)0);
        VAR_8->cdtextc = 0;
    }

    VAR_8->mbrecord = ((void*)0);




    if(FUNC_9(VAR_5, "metadata-network-access"))
    {
        VAR_8->mbrecord = FUNC_1(VAR_5, VAR_8->p_toc, VAR_8->i_cdda_tracks,
                                           VAR_8->i_cdda_first, VAR_8->i_cdda_last );




    }
    else FUNC_6(VAR_5, "album art policy set to manual: not fetching");

    VAR_7->p_sys = VAR_8;
    VAR_7->pf_read = ((void*)0);
    VAR_7->pf_block = ((void*)0);
    VAR_7->pf_readdir = VAR_1;
    VAR_7->pf_seek = ((void*)0);
    VAR_7->pf_control = VAR_0;
    return VAR_4;

error:
    FUNC_3(VAR_5, VAR_6);
    return VAR_2;
}
