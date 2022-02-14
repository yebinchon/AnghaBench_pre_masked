
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct vlc_memstream {int dummy; } ;
struct TYPE_3__ {long long rem; int quot; } ;
typedef TYPE_1__ lldiv_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct vlc_memstream*,char*,int ,long long,long long) ;

__attribute__((used)) static void FUNC_2(struct vlc_memstream *VAR_1, vlc_tick_t VAR_2)
{
    lldiv_t VAR_3;
    long long VAR_4;

    VAR_2 /= VAR_0;
    VAR_3 = FUNC_0(VAR_2, 60);
    VAR_4 = VAR_3.rem;
    VAR_3 = FUNC_0(VAR_3.quot, 60);
    FUNC_1(VAR_1, "%02lld:%02lld:%02lld", VAR_3.quot, VAR_3.rem, VAR_4);
}
