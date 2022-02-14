
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ encoder_t ;
struct TYPE_6__ {int p_schro; } ;
typedef TYPE_2__ encoder_sys_t ;


 int FUNC_0 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_1 (int ,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static inline bool FUNC_3( encoder_t *VAR_0, int VAR_1, const char *VAR_2[],
                  const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
    encoder_sys_t *VAR_6 = VAR_0->p_sys;
    if( VAR_2 && VAR_4 && VAR_3 && VAR_5 ) {
        for( int VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7 ) {
            if( FUNC_2( VAR_2[VAR_7], VAR_5 ) )
                continue;
            FUNC_1( VAR_6->p_schro, VAR_3, VAR_7 );
            return 1;
        }
        FUNC_0( VAR_0, "Invalid %s: %s", VAR_4, VAR_5 );
    }
    return 0;
}
