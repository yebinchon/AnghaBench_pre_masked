
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_decoder_device ;
struct TYPE_14__ {scalar_t__ MaxCLL; scalar_t__ MaxFALL; } ;
struct TYPE_15__ {TYPE_4__ lighting; int mastering; } ;
struct TYPE_16__ {TYPE_5__ video; } ;
struct decoder_owner {int lock; TYPE_6__ fmt; } ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
struct TYPE_11__ {scalar_t__ MaxCLL; scalar_t__ MaxFALL; } ;
struct TYPE_12__ {TYPE_1__ lighting; int mastering; } ;
struct TYPE_13__ {TYPE_2__ video; } ;
struct TYPE_17__ {TYPE_3__ fmt_out; } ;
typedef TYPE_7__ decoder_t ;


 int FUNC_0 (struct decoder_owner*,int *,int*,int **) ;
 int FUNC_1 (struct decoder_owner*) ;
 struct decoder_owner* FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_7__*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static vlc_decoder_device * FUNC_8( decoder_t *VAR_0 )
{
    struct decoder_owner *VAR_1 = FUNC_2( VAR_0 );

    enum vlc_vout_order VAR_2;
    vlc_decoder_device *VAR_3 = ((void*)0);
    int VAR_4 = FUNC_0(VAR_1, ((void*)0), &VAR_2, &VAR_3);
    if (VAR_4 == -1)
    {
        if ( VAR_3 )
            FUNC_5( VAR_3 );
        return ((void*)0);
    }
    if (VAR_4 == 1)
    {
        return VAR_3;
    }

    bool VAR_5 = 0;
    if ( FUNC_3( &VAR_0->fmt_out.video.mastering,
                 &VAR_1->fmt.video.mastering,
                 sizeof(VAR_1->fmt.video.mastering)) )
    {
        FUNC_4(VAR_0, "vout update: mastering data");
        VAR_5 = 1;
    }
    if ( VAR_0->fmt_out.video.lighting.MaxCLL !=
         VAR_1->fmt.video.lighting.MaxCLL ||
         VAR_0->fmt_out.video.lighting.MaxFALL !=
         VAR_1->fmt.video.lighting.MaxFALL )
    {
        FUNC_4(VAR_0, "vout update: lighting data");
        VAR_5 = 1;
    }

    if ( VAR_5 )
    {

        FUNC_6( &VAR_1->lock );
        FUNC_1( VAR_1 );
        FUNC_7( &VAR_1->lock );
    }
    return VAR_3;
}
