
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int drives; int insert_dot_dot; } ;
struct TYPE_4__ {char const* entry; int * wdir; TYPE_1__ u; } ;
typedef TYPE_2__ vlc_DIR ;
struct _wdirent {int d_name; } ;
typedef int DWORD ;
typedef int DIR ;


 char const* FUNC_0 (int ) ;
 struct _wdirent* FUNC_1 (int *) ;
 int FUNC_2 (char const**,char*,char) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 char const* FUNC_5 (char*) ;

const char *FUNC_6 (DIR *VAR_0)
{
    vlc_DIR *VAR_1 = (vlc_DIR *)VAR_0;

    FUNC_4(VAR_1->entry);



    if (VAR_1->wdir == ((void*)0))
    {
        DWORD VAR_2 = VAR_1->u.drives;
        if (VAR_2 == 0)
        {
            VAR_1->entry = ((void*)0);
            return ((void*)0);
        }

        unsigned int VAR_3;
        for (VAR_3 = 0; !(VAR_2 & 1); VAR_3++)
            VAR_2 >>= 1;
        VAR_1->u.drives &= ~(1UL << VAR_3);
        FUNC_3 (VAR_3 < 26);

        if (FUNC_2 (&VAR_1->entry, "%c:\\", 'A' + VAR_3) == -1)
            VAR_1->entry = ((void*)0);
    }
    else

    if (VAR_1->u.insert_dot_dot)
    {

        VAR_1->u.insert_dot_dot = 0;
        VAR_1->entry = FUNC_5 ("..");
    }
    else
    {
        struct _wdirent *VAR_4 = FUNC_1 (VAR_1->wdir);
        VAR_1->entry = (VAR_4 != ((void*)0)) ? FUNC_0 (VAR_4->d_name) : ((void*)0);
    }
    return VAR_1->entry;
}
