
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yearbuf ;
typedef int vlc_meta_t ;
struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef int cddb_track_t ;
struct TYPE_7__ {scalar_t__ cdtextc; int * cddb; TYPE_1__* p_toc; int ** cdtextv; } ;
typedef TYPE_3__ access_sys_t ;
struct TYPE_5__ {int i_tracks; } ;


 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 unsigned int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,unsigned int const) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *,char const*) ;

__attribute__((used)) static void FUNC_13(stream_t *VAR_0, vlc_meta_t *VAR_1)
{
    access_sys_t *VAR_2 = VAR_0->p_sys;

    FUNC_12(VAR_1, "Audio CD");


    if (VAR_2->cdtextc > 0 && VAR_2->cdtextv[0] != ((void*)0))
        FUNC_9(VAR_1, VAR_2->cdtextv[0]);
}
