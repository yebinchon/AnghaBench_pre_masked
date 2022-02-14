
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_key_symbols_t ;
typedef int xcb_connection_t ;


 unsigned int FUNC_0 (int *,int *,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static unsigned FUNC_1( xcb_connection_t *VAR_14,
        xcb_key_symbols_t *VAR_15, unsigned VAR_16 )
{
    unsigned VAR_17 = 0;

    if( VAR_16 & VAR_0 )
        VAR_17 |= FUNC_0( VAR_14, VAR_15, VAR_4 ) |
                  FUNC_0( VAR_14, VAR_15, VAR_5 );
    if( VAR_16 & VAR_3 )
        VAR_17 |= FUNC_0( VAR_14, VAR_15, VAR_10 ) |
                  FUNC_0( VAR_14, VAR_15, VAR_11 );
    if( VAR_16 & VAR_1 )
        VAR_17 |= FUNC_0( VAR_14, VAR_15, VAR_6 ) |
                  FUNC_0( VAR_14, VAR_15, VAR_7 );
    if( VAR_16 & VAR_2 )
        VAR_17 |= FUNC_0( VAR_14, VAR_15, VAR_8 ) |
                  FUNC_0( VAR_14, VAR_15, VAR_9 ) |
                  FUNC_0( VAR_14, VAR_15, VAR_12 ) |
                  FUNC_0( VAR_14, VAR_15, VAR_13 );
    return VAR_17;
}
