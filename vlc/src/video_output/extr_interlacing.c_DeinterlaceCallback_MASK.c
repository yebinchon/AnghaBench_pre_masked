
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
typedef void* vlc_value_t ;
typedef int vlc_object_t ;
struct TYPE_9__ {int control; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int const,char*,int const) ;
 char* FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 char* FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,char*,char*) ;
 int FUNC_9 (int *,int ,int) ;

__attribute__((used)) static int FUNC_10(vlc_object_t *VAR_3, char const *VAR_4,
                               vlc_value_t VAR_5, vlc_value_t VAR_6, void *VAR_7)
{
    FUNC_1(VAR_4); FUNC_1(VAR_5); FUNC_1(VAR_6); FUNC_1(VAR_7);
    vout_thread_t *VAR_8 = (vout_thread_t *)VAR_3;


    const int VAR_9 = FUNC_6(VAR_8, "deinterlace");
    char *VAR_10 = FUNC_7(VAR_8, "deinterlace-mode");
    const bool VAR_11 = FUNC_5(VAR_8, "deinterlace-needed");
    if (!VAR_10 || !FUNC_0(VAR_10))
    {
        FUNC_2(VAR_10);
        return VAR_0;
    }


    char *VAR_12 = FUNC_4(VAR_8, "sout-deinterlace-mode");
    FUNC_8(VAR_8, "sout-deinterlace-mode", VAR_10);

    FUNC_3(VAR_8, "deinterlace %d, mode %s, is_needed %d", VAR_9, VAR_10, VAR_11);
    if (VAR_9 == 0 || (VAR_9 < 0 && !VAR_11))
        FUNC_9(&VAR_8->p->control,
                              VAR_2, 0);
    else
        FUNC_9(&VAR_8->p->control,
                              VAR_2, 1);


    FUNC_2(VAR_12);
    FUNC_2(VAR_10);
    return VAR_1;
}
