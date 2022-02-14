
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int interval; TYPE_4__* msi; int mutex; TYPE_2__* m; } ;
typedef TYPE_1__ ToxAV ;
typedef int Tox ;
struct TYPE_11__ {TYPE_1__* av; } ;
struct TYPE_10__ {scalar_t__ msi_packet; } ;
typedef scalar_t__ TOXAV_ERR_NEW ;
typedef TYPE_2__ Messenger ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (int ) ;

ToxAV *FUNC_7(Tox *VAR_15, TOXAV_ERR_NEW *VAR_16)
{
    TOXAV_ERR_NEW VAR_17 = VAR_3;
    ToxAV *VAR_18 = ((void*)0);

    if (VAR_15 == ((void*)0)) {
        VAR_17 = VAR_2;
        goto END;
    }

    if (((Messenger *)VAR_15)->msi_packet) {
        VAR_17 = VAR_1;
        goto END;
    }

    VAR_18 = FUNC_1 (sizeof(ToxAV), 1);

    if (VAR_18 == ((void*)0)) {
        FUNC_0("Allocation failed!");
        VAR_17 = VAR_0;
        goto END;
    }

    if (FUNC_2(VAR_18->mutex) != 0) {
        FUNC_0("Mutex creation failed!");
        VAR_17 = VAR_0;
        goto END;
    }

    VAR_18->m = (Messenger *)VAR_15;
    VAR_18->msi = FUNC_4(VAR_18->m);

    if (VAR_18->msi == ((void*)0)) {
        FUNC_6(VAR_18->mutex);
        VAR_17 = VAR_0;
        goto END;
    }

    VAR_18->interval = 200;
    VAR_18->msi->av = VAR_18;

    FUNC_5(VAR_18->msi, VAR_7, VAR_12);
    FUNC_5(VAR_18->msi, VAR_8, VAR_14);
    FUNC_5(VAR_18->msi, VAR_5, VAR_10);
    FUNC_5(VAR_18->msi, VAR_6, VAR_11);
    FUNC_5(VAR_18->msi, VAR_6, VAR_13);
    FUNC_5(VAR_18->msi, VAR_4, VAR_9);

END:

    if (VAR_16)
        *VAR_16 = VAR_17;

    if (VAR_17 != VAR_3) {
        FUNC_3(VAR_18);
        VAR_18 = ((void*)0);
    }

    return VAR_18;
}
