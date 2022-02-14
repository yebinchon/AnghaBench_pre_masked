
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int es_out_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static inline vlc_tick_t FUNC_2( es_out_t *VAR_1 )
{
    vlc_tick_t VAR_2;
    int VAR_3 = FUNC_1( VAR_1, VAR_0, &VAR_2 );

    FUNC_0( !VAR_3 );
    return VAR_2;
}
