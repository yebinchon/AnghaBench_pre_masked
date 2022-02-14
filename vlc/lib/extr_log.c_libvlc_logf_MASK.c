
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_log_t ;
typedef int va_list ;
struct TYPE_3__ {int data; int (* cb ) (int ,int,int const*,char const*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ log; } ;
typedef TYPE_2__ libvlc_instance_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,int,int const*,char const*,int ) ;

__attribute__((used)) static void FUNC_1 (void *VAR_4, int VAR_5, const vlc_log_t *VAR_6,
                         const char *VAR_7, va_list VAR_8)
{
    libvlc_instance_t *VAR_9 = VAR_4;

    switch (VAR_5)
    {
        case 129: VAR_5 = VAR_2; break;
        case 130: VAR_5 = VAR_1; break;
        case 128: VAR_5 = VAR_3; break;
        case 131: VAR_5 = VAR_0; break;
    }

    VAR_9->log.cb (VAR_9->log.data, VAR_5, VAR_6, VAR_7, VAR_8);
}
