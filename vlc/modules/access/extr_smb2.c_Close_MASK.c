
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct access_sys {int encoded_url; int smb2; int * share_enum; int * smb2dir; int * smb2fh; } ;
struct TYPE_4__ {struct access_sys* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(vlc_object_t *VAR_0)
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    struct access_sys *VAR_2 = VAR_1->p_sys;

    if (VAR_2->smb2fh != ((void*)0))
        FUNC_5(VAR_1);
    else if (VAR_2->smb2dir != ((void*)0))
        FUNC_0(VAR_2->smb2, VAR_2->smb2dir);
    else if (VAR_2->share_enum != ((void*)0))
        FUNC_2(VAR_2->smb2, VAR_2->share_enum);
    else
        FUNC_4();

    FUNC_6(VAR_1);
    FUNC_1(VAR_2->smb2);

    FUNC_3(&VAR_2->encoded_url);
}
