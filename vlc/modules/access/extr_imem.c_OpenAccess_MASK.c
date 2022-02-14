
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {int * p_sys; int * pf_seek; int pf_block; int * pf_read; int pf_control; int psz_location; } ;
typedef TYPE_1__ stream_t ;
typedef int imem_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int **,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(vlc_object_t *VAR_4)
{
    stream_t *VAR_5 = (stream_t *)VAR_4;
    imem_sys_t *VAR_6;

    if (FUNC_1(VAR_4, &VAR_6, VAR_5->psz_location))
        return VAR_2;

    if (FUNC_2(VAR_4, "imem-cat") != 4) {
        FUNC_0(VAR_6);
        return VAR_2;
    }


    VAR_5->pf_control = VAR_1;
    VAR_5->pf_read = ((void*)0);
    VAR_5->pf_block = VAR_0;
    VAR_5->pf_seek = ((void*)0);
    VAR_5->p_sys = VAR_6;

    return VAR_3;
}
