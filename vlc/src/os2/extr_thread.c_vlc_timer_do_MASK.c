
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_timer {int htimer; scalar_t__ hev; scalar_t__ interval; int data; int (* func ) (int ) ;scalar_t__ quit; } ;
typedef int ULONG ;
typedef int HSEM ;


 int FUNC_0 (scalar_t__,int ,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (void *VAR_1)
{
    struct vlc_timer *VAR_2 = VAR_1;

    while (1)
    {
        ULONG VAR_3;

        FUNC_2 (VAR_2->hev, VAR_0);
        FUNC_1 (VAR_2->hev, &VAR_3);

        if (VAR_2->quit)
            break;

        VAR_2->func (VAR_2->data);

        if (VAR_2->interval)
            FUNC_0 (VAR_2->interval, (HSEM)VAR_2->hev, &VAR_2->htimer);
    }
}
