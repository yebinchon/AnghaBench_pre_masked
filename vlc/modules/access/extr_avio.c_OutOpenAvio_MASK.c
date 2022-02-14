
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {TYPE_2__* p_sys; int pf_seek; int pf_control; int pf_write; int psz_path; int p_cfg; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_11__ {int * context; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_12__ {int key; } ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int **) ;
 TYPE_3__* FUNC_2 (int *,char*,TYPE_3__*,int ) ;
 int FUNC_3 (int **,int ,int ,int *,int **) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int VAR_9 ;
 char* FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (char*,int **) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int *,int) ;

int FUNC_11(vlc_object_t *VAR_10)
{
    sout_access_out_t *VAR_11 = (sout_access_out_t*)VAR_10;

    FUNC_4( VAR_11, "sout-avio-", VAR_9, VAR_11->p_cfg );

    sout_access_out_sys_t *VAR_12 = FUNC_10(VAR_10, sizeof(*VAR_12));
    if (!VAR_12)
        return VAR_5;
    VAR_12->context = ((void*)0);


    FUNC_9(VAR_10);

    if (!VAR_11->psz_path)
        return VAR_4;

    int VAR_13;
    AVDictionary *VAR_14 = ((void*)0);
    char *VAR_15 = FUNC_7(VAR_11, "sout-avio-options");
    if (VAR_15) {
        FUNC_8(VAR_15, &VAR_14);
        FUNC_5(VAR_15);
    }
    VAR_13 = FUNC_3(&VAR_12->context, VAR_11->psz_path, VAR_0,
                     ((void*)0), &VAR_14);
    AVDictionaryEntry *VAR_16 = ((void*)0);
    while ((VAR_16 = FUNC_2(VAR_14, "", VAR_16, VAR_1)))
        FUNC_6( VAR_11, "unknown option \"%s\"", VAR_16->key );
    FUNC_1(&VAR_14);
    if (VAR_13 < 0) {
        VAR_8 = FUNC_0(VAR_13);
        FUNC_6(VAR_11, "Failed to open %s", VAR_11->psz_path);
        return VAR_4;
    }

    VAR_11->pf_write = VAR_7;
    VAR_11->pf_control = VAR_2;
    VAR_11->pf_seek = VAR_3;
    VAR_11->p_sys = VAR_12;

    return VAR_6;
}
