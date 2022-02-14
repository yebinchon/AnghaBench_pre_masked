
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static unsigned
FUNC_1(vlc_object_t *VAR_1, const char *VAR_2)
{
    int64_t VAR_3 = FUNC_0(VAR_1, VAR_2);
    return VAR_3 >= 0 && VAR_3 < VAR_0 ? VAR_3 : VAR_0;
}
