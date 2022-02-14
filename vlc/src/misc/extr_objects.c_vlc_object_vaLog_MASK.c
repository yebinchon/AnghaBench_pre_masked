
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int logger; } ;
typedef TYPE_1__ vlc_object_t ;
typedef int va_list ;


 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,char const*,char const*,char const*,unsigned int,char const*,char const*,int ) ;

void FUNC_2(vlc_object_t *VAR_0, int VAR_1, const char *VAR_2,
                      const char *VAR_3, unsigned VAR_4, const char *VAR_5,
                      const char *VAR_6, va_list VAR_7)
{
    if (VAR_0 == ((void*)0))
        return;

    const char *VAR_8 = FUNC_0(VAR_0);

    if (VAR_8 == ((void*)0))
        VAR_8 = "generic";

    FUNC_1(&VAR_0->logger, VAR_1, VAR_8, VAR_2, VAR_3, VAR_4, VAR_5,
              VAR_6, VAR_7);
}
