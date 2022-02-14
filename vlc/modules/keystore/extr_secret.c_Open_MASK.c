
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int force; } ;
typedef TYPE_1__ vlc_object_t ;
typedef int vlc_keystore_sys ;
struct TYPE_5__ {int pf_remove; int pf_find; int pf_store; int * p_sys; } ;
typedef TYPE_2__ vlc_keystore ;
struct secrets_watch_data {int b_running; int sem; } ;
typedef int guint ;
typedef int SecretService ;
typedef int GCancellable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,struct secrets_watch_data*,int *) ;
 int * FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(vlc_object_t *VAR_10)
{
    if (!VAR_10->force)
    {



        struct secrets_watch_data VAR_11;
        VAR_11.b_running = 0;
        FUNC_6(&VAR_11.sem, 0);

        guint VAR_12 = FUNC_3(VAR_2,
                                      "org.freedesktop.secrets",
                                      VAR_1,
                                      VAR_8, VAR_9,
                                      &VAR_11, ((void*)0));



        FUNC_7(&VAR_11.sem);

        FUNC_2(VAR_12);
        FUNC_5(&VAR_11.sem);

        if (!VAR_11.b_running)
            return VAR_6;
    }

    GCancellable *VAR_13 = FUNC_0();
    SecretService *VAR_14 = FUNC_4(VAR_4,
                                                  VAR_13, ((void*)0));
    FUNC_1(VAR_13);
    if (!VAR_14)
        return VAR_6;

    vlc_keystore *VAR_15 = (vlc_keystore *)VAR_10;

    VAR_15->p_sys = (vlc_keystore_sys *) VAR_14;
    VAR_15->pf_store = VAR_5;
    VAR_15->pf_find = VAR_0;
    VAR_15->pf_remove = VAR_3;

    return VAR_7;
}
