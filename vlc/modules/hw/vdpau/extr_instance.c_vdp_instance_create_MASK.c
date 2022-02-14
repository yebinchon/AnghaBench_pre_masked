
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num; int refs; int * display; int device; int vdp; int * name; int * next; } ;
typedef TYPE_1__ vdp_instance_t ;
typedef scalar_t__ VdpStatus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int,int *,int *) ;

__attribute__((used)) static VdpStatus FUNC_9(const char *VAR_3, int VAR_4,
                                     vdp_instance_t **VAR_5)
{
    size_t VAR_6 = (VAR_3 != ((void*)0)) ? (FUNC_6(VAR_3) + 1) : 0;
    vdp_instance_t *VAR_7 = FUNC_4(sizeof (*VAR_7) + VAR_6);

    if (FUNC_7(VAR_7 == ((void*)0)))
        return VAR_2;

    VAR_7->display = FUNC_2(VAR_3);
    if (VAR_7->display == ((void*)0))
    {
        FUNC_3(VAR_7);
        return VAR_0;
    }

    VAR_7->next = ((void*)0);
    if (VAR_3 != ((void*)0))
    {
        VAR_7->name = (void *)(VAR_7 + 1);
        FUNC_5(VAR_7->name, VAR_3, VAR_6);
    }
    else
        VAR_7->name = ((void*)0);
    if (VAR_4 >= 0)
        VAR_7->num = VAR_4;
    else
        VAR_7->num = FUNC_1(VAR_7->display);
    VAR_7->refs = 1;

    VdpStatus VAR_8 = FUNC_8(VAR_7->display, VAR_7->num,
                                   &VAR_7->vdp, &VAR_7->device);
    if (VAR_8 != VAR_1)
    {
        FUNC_0(VAR_7->display);
        FUNC_3(VAR_7);
        return VAR_8;
    }
    *VAR_5 = VAR_7;
    return VAR_1;
}
