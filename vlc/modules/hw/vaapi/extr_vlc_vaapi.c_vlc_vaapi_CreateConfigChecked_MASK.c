
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {int i; } ;
struct TYPE_11__ {TYPE_1__ value; } ;
struct TYPE_12__ {scalar_t__ type; int flags; TYPE_2__ value; } ;
typedef TYPE_3__ VASurfaceAttrib ;
typedef int VAProfile ;
typedef int VAEntrypoint ;
typedef int VADisplay ;
typedef scalar_t__ VAConfigID ;
struct TYPE_13__ {int value; int type; } ;
typedef TYPE_4__ VAConfigAttrib ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ,int ,int ,int ,TYPE_4__*,int,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,int ,int ,TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,TYPE_3__*,unsigned int*) ;
 TYPE_3__* FUNC_7 (unsigned int,int) ;
 int FUNC_8 (int,unsigned int*,int*) ;
 int FUNC_9 (int *,int ,scalar_t__) ;

VAConfigID
FUNC_10(vlc_object_t *VAR_8, VADisplay VAR_9,
                              VAProfile VAR_10, VAEntrypoint VAR_11,
                              int VAR_12)
{
    int VAR_13 = 0;
    if (VAR_12 != 0)
    {
        unsigned VAR_14;
        FUNC_8(VAR_12, &VAR_14, &VAR_13);
    }

    if (!FUNC_1(VAR_9, VAR_10))
    {
        FUNC_4(VAR_8, "profile(%d) is not supported", VAR_10);
        return VAR_2;
    }
    if (!FUNC_0(VAR_9, VAR_10, VAR_11))
    {
        FUNC_4(VAR_8, "entrypoint(%d) is not available", VAR_11);
        return VAR_2;
    }


    VAConfigAttrib VAR_15 = {
        .type = VAR_0,
    };
    if (FUNC_5(VAR_9, VAR_10, VAR_11, &VAR_15, 1))
    {
        FUNC_4(VAR_8, "vaGetConfigAttributes failed");
        return VAR_2;
    }


    if ((VAR_15.value & (VAR_3|VAR_4)) == 0)
    {
        FUNC_4(VAR_8, "config doesn't support VA_RT_FORMAT_YUV420*");
        return VAR_2;
    }

    unsigned int VAR_16;
    VASurfaceAttrib *VAR_17 = ((void*)0);
    VAConfigID VAR_18 = VAR_2;
    FUNC_2(VAR_8, VAR_7, VAR_9, VAR_10, VAR_11, &VAR_15, 1,
            &VAR_18);

    if (VAR_13 == 0)
        return VAR_18;


    if (FUNC_6(VAR_9, VAR_18, ((void*)0), &VAR_16)
        != VAR_5)
        goto error;

    VAR_17 = FUNC_7(VAR_16, sizeof(*VAR_17));
    if (VAR_17 == ((void*)0))
        goto error;
    if (FUNC_6(VAR_9, VAR_18, VAR_17, &VAR_16)
        != VAR_5)
        goto error;

    for (unsigned VAR_19 = 0; VAR_19 < VAR_16; ++VAR_19)
    {
        VASurfaceAttrib *VAR_20 = &VAR_17[VAR_19];
        if (VAR_20->type == VAR_1
         && VAR_20->flags & VAR_6
         && VAR_20->value.value.i == VAR_13)
        {
            FUNC_3(VAR_17);
            return VAR_18;
        }

    }

error:
    FUNC_3(VAR_17);
    if (VAR_18 != VAR_2)
    {
        FUNC_4(VAR_8, "config doesn't support forced fourcc");
        FUNC_9(VAR_8, VAR_9, VAR_18);
    }
    return VAR_2;
}
