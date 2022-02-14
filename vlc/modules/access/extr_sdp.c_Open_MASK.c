
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {char* p_sys; scalar_t__ psz_location; int pf_control; int pf_seek; int * pf_block; int pf_read; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0 (vlc_object_t *VAR_4)
{
    stream_t *VAR_5 = (stream_t *)VAR_4;

    VAR_5->pf_read = VAR_1;
    VAR_5->pf_block = ((void*)0);
    VAR_5->pf_seek = VAR_2;
    VAR_5->pf_control = VAR_0;
    VAR_5->p_sys = (char *)VAR_5->psz_location;

    return VAR_3;
}
