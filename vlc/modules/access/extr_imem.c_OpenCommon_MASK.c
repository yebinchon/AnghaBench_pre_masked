
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {char* cookie; void* data; scalar_t__ release; scalar_t__ get; } ;
struct TYPE_6__ {int deadline; scalar_t__ dts; TYPE_1__ source; } ;
typedef TYPE_2__ imem_sys_t ;
typedef scalar_t__ imem_release_t ;
typedef scalar_t__ imem_get_t ;


 int FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,void*,void*,void*,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (char*,int *,int ) ;
 scalar_t__ FUNC_5 (char*,int *,int ) ;
 void* FUNC_6 (int *,char*) ;
 TYPE_2__* FUNC_7 (int *,int,int) ;

__attribute__((used)) static int FUNC_8(vlc_object_t *VAR_4, imem_sys_t **VAR_5, const char *VAR_6)
{
    char *VAR_7;


    imem_sys_t *VAR_8 = FUNC_7(VAR_4, 1, sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_1;


    VAR_7 = FUNC_6(VAR_4, "imem-get");
    if (VAR_7)
        VAR_8->source.get = (imem_get_t)(intptr_t)FUNC_4(VAR_7, ((void*)0), 0);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_6(VAR_4, "imem-release");
    if (VAR_7)
        VAR_8->source.release = (imem_release_t)(intptr_t)FUNC_4(VAR_7, ((void*)0), 0);
    FUNC_1(VAR_7);

    if (!VAR_8->source.get || !VAR_8->source.release) {
        FUNC_3(VAR_4, "Invalid get/release function pointers");
        return VAR_0;
    }

    VAR_7 = FUNC_6(VAR_4, "imem-data");
    if (VAR_7)
        VAR_8->source.data = (void *)(uintptr_t)FUNC_5(VAR_7, ((void*)0), 0);
    FUNC_1(VAR_7);



    if (*VAR_6)
        FUNC_0(VAR_4, VAR_6);

    VAR_8->source.cookie = FUNC_6(VAR_4, "imem-cookie");

    FUNC_2(VAR_4, "Using get(%p), release(%p), data(%p), cookie(%s)",
            (void *)VAR_8->source.get, (void *)VAR_8->source.release,
            VAR_8->source.data,
            VAR_8->source.cookie ? VAR_8->source.cookie : "(null)");


    VAR_8->dts = 0;
    VAR_8->deadline = VAR_3;

    *VAR_5 = VAR_8;
    return VAR_2;
}
