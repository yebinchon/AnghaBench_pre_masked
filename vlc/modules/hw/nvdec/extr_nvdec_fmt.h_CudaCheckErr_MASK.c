
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int (* cuGetErrorString ) (scalar_t__,char const**) ;int (* cuGetErrorName ) (scalar_t__,char const**) ;} ;
typedef TYPE_1__ CudaFunctions ;
typedef scalar_t__ CUresult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char const*,char const*,char const*) ;
 int FUNC_1 (scalar_t__,char const**) ;
 int FUNC_2 (scalar_t__,char const**) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(vlc_object_t *VAR_3, CudaFunctions *VAR_4, CUresult VAR_5, const char *VAR_6)
{
    if (FUNC_3(VAR_5 != VAR_0)) {
        const char *VAR_7, *VAR_8;
        VAR_4->cuGetErrorName(VAR_5, &VAR_7);
        VAR_4->cuGetErrorString(VAR_5, &VAR_8);
        FUNC_0(VAR_3, "%s failed: %s (%s)", VAR_6, VAR_8, VAR_7);
        return VAR_1;
    }
    return VAR_2;
}
